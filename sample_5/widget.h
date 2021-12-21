#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "qperson.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

private:
    QPerson *boy;
    QPerson *girl;

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_Btn_B_clicked();
    void on_Btn_G_clicked();
    void on_Btn_O_clicked();
    void on_spin_valueChanged(int arg1);

private:
    Ui::Widget *ui;

    void on_ageChanged(unsigned value);

};

#endif // WIDGET_H
