#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}
Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
 int current = ui->progressBar->value();
    ui->progressBar->setValue(current + 10);

if (current == 100){
    ui->progressBar->setValue(0);
}
}

