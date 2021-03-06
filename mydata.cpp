#include "mydata.h"

myData::myData(QWidget *parent) : QWidget(parent)
{
    fillTest(m_data);
    for(int i = 0; i < m_data.size()+1; i++)
    {
        m_layout->addWidget(displayObj());
    }


    //tmp2->move(tmp1->frameWidth()+2, 0);
}

QHBoxLayout *myData::displayObj()
{
    QHBoxLayout *sendback = new QHBoxLayout(this);

    QLabel *tmp1 = new QLabel ((this->m_data.at(0).at(0)), this);
    QLabel *tmp2= new QLabel ((this->m_data.at(9).at(1)), this);
    QPushButton *delButton = new QPushButton("Delete", this);
    QPushButton *editButton = new QPushButton("Edit", this);

    sendback->addWidget(tmp1);
    sendback->addWidget(tmp2);
    sendback->addWidget(delButton);
    sendback->addWidget(editButton);

    QPalette pal = palette();

    // set black background
    pal.setColor(QPalette::Background, Qt::white);
    tmp1->setAutoFillBackground(true);
    tmp1->setPalette(pal);
    tmp2->setAutoFillBackground(true);
    tmp2->setPalette(pal);
    return sendback;
}

void myData::displayNext(bool isFinsihed)
{
    if(!isFinsihed)
    {

    }else{
    }
}

void myData::getNext()
{
    //QLabel tmp1 ((this->m_data.at(0).at(0)), this);
}


void myData::fillTest(Storage &fillThis)
{
    for(int i=0;i<10;i++)
    {
        std::vector<QString> data_tmp;
        for(int j=0;j<2;j++)
        {

            data_tmp.push_back(QString("Name:"));
            data_tmp.push_back(QString("Joe" + QString::number(i) ));
        }
        fillThis.push_back(data_tmp);
    }
}
