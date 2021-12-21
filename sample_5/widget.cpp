#include "widget.h"
#include "ui_widget.h"
#include "QMetaProperty"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->Spinb_B->setProperty("isBoy",true);
    ui->Spinb_G->setProperty("isBoy",false);

    boy = new QPerson("boy");
    boy->setProperty("score",95);
    boy->setProperty("age",18);
    boy->setProperty("sex","Boy");
    connect(boy,&QPerson::ageChanged,this,&Widget::on_ageChanged);

    girl = new QPerson("girl");
    girl->setProperty("score",85);
    girl->setProperty("age",20);
    girl->setProperty("sex","Girl");
    connect(girl,&QPerson::ageChanged,this,&Widget::on_ageChanged);

    connect(ui->Spinb_B,SIGNAL(valueChanged(int)),this,SLOT(on_spin_valueChanged(int)));
    connect(ui->Spinb_G,SIGNAL(valueChanged(int)),this,SLOT(on_spin_valueChanged(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Btn_B_clicked()
{
    boy->incAge();
}

void Widget::on_Btn_G_clicked()
{
    girl->incAge();
}

void Widget::on_Btn_O_clicked()
{
    const QMetaObject *meta = girl->metaObject();
    ui->plainTextEdit->clear();;
    ui->plainTextEdit->appendPlainText("==meta==\n");
    ui->plainTextEdit->appendPlainText(
                QString("Class:%1\n").arg(meta->className())
                );
    ui->plainTextEdit->appendPlainText("property");
    for(int i = meta->propertyOffset();i<meta->propertyCount();i++){
        QMetaProperty prop = meta->property(i);
        const char *propname = prop.name();
        QString propValue = boy->property(propname).toString();
        ui->plainTextEdit->appendPlainText(
                    QString("ClassName:%1,value:%2").arg(propname).arg(propValue)
                    );
    }
    ui->plainTextEdit->appendPlainText("");
    ui->plainTextEdit->appendPlainText("ClassInfo");
    for(int i = meta->classInfoOffset();i<meta->classInfoCount();i++){
        QMetaClassInfo classinfo = meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(
                    QString("Name=%1,Value=%2").arg(classinfo.name()).arg(classinfo.value())
                    );
    }
}

void Widget::on_spin_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    QSpinBox *spinbox = qobject_cast<QSpinBox*>(sender());
    if(spinbox->property("isBoy").toBool())
        boy->setAge(spinbox->value());
    else
        girl->setAge(spinbox->value());
}

void Widget::on_ageChanged(unsigned value)
{
    Q_UNUSED(value)
    QPerson *aperson = qobject_cast<QPerson*>(sender());
    QString aname = aperson->property("name").toString();
    QString asex = aperson->property("sex").toString();
    unsigned aAge = aperson->age();
    ui->plainTextEdit->appendPlainText(aname+","+asex+QString::asprintf(",age=%d",aAge));
}
