#include "widget.h"
#include "ui_widget.h"

#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    this->teacher = new Teacher(this);
    this->student = new Student(this);
    connect(teacher,&Teacher::hungry,student,&Student::treat);
    ClassIsOver();
}

void Widget::ClassIsOver()
{
    //发送信号
    emit teacher->hungry();
}

Widget::~Widget()
{
    delete ui;
}
