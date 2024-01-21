#ifndef DIALOG_H
#define DIALOG_H
#include<QComboBox>
#include<QRadioButton>
#include<QProgressBar>
#include<QGroupBox>
#include <QMainWindow>
#include<QRadioButton>
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:

    Ui::Dialog *ui;
};

#endif // DIALOG_H
