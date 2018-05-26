#include "data.h"

data::data(QWidget *parent) : QWidget(parent)
{
    fillTest(m_data);
}

void data::fillTest(Storage &fillThis)
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<2;j++)
        {
            fillThis.at(i).at(j) = QString("Name:");
            fillThis.at(i).at(j) = QString("Joe" + i);
        }
    }
}
