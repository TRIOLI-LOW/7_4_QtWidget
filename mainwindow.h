#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "dialog.h"
#include<QComboBox>
#include<QRadioButton>
#include<QProgressBar>
#include<QGroupBox>
#include <QMainWindow>
#include<QRadioButton>
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private Q_SLOTS:
    void on_go_clicked();

private:
    Ui::MainWindow *ui;
    Dialog* window;

};
#endif // MAINWINDOW_H
