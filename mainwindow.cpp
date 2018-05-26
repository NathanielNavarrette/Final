#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    persons = new myData(this);


    this->setMinimumHeight(500);
    this->setMinimumWidth(500);
}

MainWindow::~MainWindow()
{
    delete ui;
}
