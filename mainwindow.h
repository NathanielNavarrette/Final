#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include <QLabel>
#include <QLayout>
#include <vector>

#include "mydata.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QWidget *persons;


public slots:
    //check if data vector is empty, so this can grab next (or be sent) next value

signals:
    //send the result of the data vector empty thing back
        //also will "grab" next value and display it


};

#endif // MAINWINDOW_H
