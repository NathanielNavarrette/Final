#include "qclicklabel.h"
#include <QDebug>


QClickLabel::QClickLabel(QWidget *parent) :
    QLabel(parent)
{

}

QClickLabel::QClickLabel(const QString text, QWidget *parent) :
    QLabel(parent)
{
    m_data = new QLabel(text, parent);
}


QClickLabel::~QClickLabel()
{

}


void QClickLabel::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
    qDebug() << "Clicked";
}
