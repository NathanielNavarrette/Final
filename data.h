#ifndef DATA_H
#define DATA_H

#include <QWidget>
#include <QLabel>
#include <QRadioButton>
#include <QLayout>
#include <vector>

typedef std::vector<std::vector<QString>> Storage;

class data : public QWidget
{
    Q_OBJECT
public:
    explicit data(QWidget *parent = nullptr);

private:
    //"outside" vector will be the different people
        //"inside" vector will be the actual information
        //inside vector will take input as title, data

        Storage m_data;
        QHBoxLayout *m_layout;

        void fillTest(Storage &fillThis);




    public slots:
        //need a slot for "continue(bool doIContinue)"
            //need this slot to know when to go to next index in vector


    signals:
        //need a slot for empty(bool)
            //will check the m_data vector if it reached end
            //while m_data !empty sent false
};

#endif // DATA_H
