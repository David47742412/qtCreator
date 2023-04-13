
#include "widget.h"
#include "../build-DulcePastel-Desktop_Qt_6_5_0_MinGW_64_bit-Debug/DulcePastel_autogen/include/ui_widget.h"
#include "./ui_widget.h" //ignore


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


