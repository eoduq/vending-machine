#include "widget.h"
#include "./ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pbCoffee->setEnabled(false);
    ui->pbTea->setEnabled(false);
    ui->pbMilk->setEnabled(false);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int diff){
    money+=diff;
    ui->lcdNumber->display(money);
};

void Widget::isEnabled(int change)
{
    if(change>=200){
        ui->pbMilk->setEnabled(true);
        ui->pbCoffee->setEnabled(true);
        ui->pbTea->setEnabled(true);
    }else if(change>=150){
        ui->pbMilk->setEnabled(false);
        ui->pbCoffee->setEnabled(true);
        ui->pbTea->setEnabled(true);
    }else if(change>=100){
        ui->pbMilk->setEnabled(false);
        ui->pbTea->setEnabled(false);
        ui->pbCoffee->setEnabled(true);
    }else{
        ui->pbMilk->setEnabled(false);
        ui->pbTea->setEnabled(false);
        ui->pbCoffee->setEnabled(false);
    }
}


void Widget::on_pb100_clicked()
{
    changeMoney(100);
    isEnabled(money);
}


void Widget::on_pb10_clicked()
{
    changeMoney(10);
    isEnabled(money);
}


void Widget::on_pb500_clicked()
{
    changeMoney(500);
    isEnabled(money);
}


void Widget::on_pb50_clicked()
{
    changeMoney(50);
    isEnabled(money);
}


void Widget::on_pbCoffee_clicked()
{
   changeMoney(-100);
   isEnabled(money);
}


void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
    isEnabled(money);
}


void Widget::on_pbMilk_clicked()
{
    changeMoney(-200);
    isEnabled(money);

}


void Widget::on_pbReset_clicked()
{
    unsigned int tmp=money;
    unsigned int tmp500=tmp/500;
    tmp%=500;
    unsigned int tmp100=tmp/100;
    tmp%=100;
    unsigned int tmp50=tmp/50;
    tmp%=50;
    unsigned int tmp10=tmp/10;
    char buff[50];
    sprintf(buff,"500: %u, 100: %u, 50: %u, 10: %u",tmp500,tmp100,tmp50,tmp10);

    QMessageBox msg;
    msg.information(this, "Reset",  buff);

}

