/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *Label_B;
    QSpinBox *Spinb_B;
    QPushButton *Btn_B;
    QPushButton *Btn_O;
    QLabel *Label_G;
    QSpinBox *Spinb_G;
    QPushButton *Btn_G;
    QPushButton *Btn_clear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(316, 300);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label_B = new QLabel(Widget);
        Label_B->setObjectName(QStringLiteral("Label_B"));
        QFont font;
        font.setPointSize(11);
        Label_B->setFont(font);

        gridLayout->addWidget(Label_B, 0, 0, 1, 1);

        Spinb_B = new QSpinBox(Widget);
        Spinb_B->setObjectName(QStringLiteral("Spinb_B"));
        Spinb_B->setValue(18);

        gridLayout->addWidget(Spinb_B, 0, 1, 1, 1);

        Btn_B = new QPushButton(Widget);
        Btn_B->setObjectName(QStringLiteral("Btn_B"));

        gridLayout->addWidget(Btn_B, 0, 2, 1, 1);

        Btn_O = new QPushButton(Widget);
        Btn_O->setObjectName(QStringLiteral("Btn_O"));

        gridLayout->addWidget(Btn_O, 0, 3, 1, 1);

        Label_G = new QLabel(Widget);
        Label_G->setObjectName(QStringLiteral("Label_G"));
        Label_G->setFont(font);

        gridLayout->addWidget(Label_G, 1, 0, 1, 1);

        Spinb_G = new QSpinBox(Widget);
        Spinb_G->setObjectName(QStringLiteral("Spinb_G"));
        Spinb_G->setValue(20);

        gridLayout->addWidget(Spinb_G, 1, 1, 1, 1);

        Btn_G = new QPushButton(Widget);
        Btn_G->setObjectName(QStringLiteral("Btn_G"));

        gridLayout->addWidget(Btn_G, 1, 2, 1, 1);

        Btn_clear = new QPushButton(Widget);
        Btn_clear->setObjectName(QStringLiteral("Btn_clear"));

        gridLayout->addWidget(Btn_clear, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setFont(font);

        gridLayout_2->addWidget(plainTextEdit, 1, 0, 1, 1);


        retranslateUi(Widget);
        QObject::connect(Btn_clear, SIGNAL(clicked()), plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        Label_B->setText(QApplication::translate("Widget", "boy  age:", Q_NULLPTR));
        Btn_B->setText(QApplication::translate("Widget", "B_age+1", Q_NULLPTR));
        Btn_O->setText(QApplication::translate("Widget", "QObject", Q_NULLPTR));
        Label_G->setText(QApplication::translate("Widget", "girl age:", Q_NULLPTR));
        Btn_G->setText(QApplication::translate("Widget", "G_age+1", Q_NULLPTR));
        Btn_clear->setText(QApplication::translate("Widget", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
