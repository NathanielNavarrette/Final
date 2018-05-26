#ifndef MYDATA_H
#define MYDATA_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLayout>
#include <vector>

typedef std::vector<std::vector<QString>> Storage;

class myData : public QWidget
{
    Q_OBJECT
public:
    explicit myData(QWidget *parent = nullptr);

private:
    //"outside" vector will be the different people
    //"inside" vector will be the actual information
    //inside vector will take input as title, data
    int loopCount = 0 ;
    Storage m_data;
    QVBoxLayout *m_layout;
    void getNext();
    QHBoxLayout *displayObj();

    void fillTest(Storage &fillThis);


public slots:
    //need a slot for "continue(bool doIContinue)"
    //need this slot to know when to go to next index in vector
    void displayNext(bool isFinsihed);

signals:
    void isEmpty(bool);
    //need a slot for empty(bool)
    //will check the m_data vector if it reached end
    //while m_data !empty sent false
signals:

public slots:
};

#endif // MYDATA_H
