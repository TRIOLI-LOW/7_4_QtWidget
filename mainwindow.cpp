#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    window = new Dialog(this);

    QRadioButton* radio_button_1 = window->findChild<QRadioButton*>("radioButton_2");
    QRadioButton* radio_button_2 = window->findChild<QRadioButton*>("radioButton");
    radio_button_1->setObjectName("Button_1");
    radio_button_1->setText("Кнопка №1");
    radio_button_2->setObjectName("Button_2");
    radio_button_2->setText("Кнопка №2");

    QComboBox* ComBox1 = window->findChild<QComboBox*>("comboBox");
    ComBox1->addItems({"Первый","Второй","Третий","Четвертый","Пятый",});

    QPushButton* pushButton = window->findChild<QPushButton*>("pushButton");
    pushButton->setText("Up Progress");
    pushButton->setCheckable(true);

    QProgressBar* progressBar = window->findChild<QProgressBar*>("progressBar");
    progressBar->setValue(0);
    progressBar->setMinimum(0);
    progressBar->setMaximum(100);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_go_clicked()
{
      window->show();
}

