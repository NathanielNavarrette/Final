#ifndef QCLICKLABEL_H
#define QCLICKLABEL_H

#include <QLabel>
#include <QWidget>
#include <Qt>


class QClickLabel : public QLabel
{
    Q_OBJECT
public:
    explicit QClickLabel(QWidget *parent = 0);
    QClickLabel(const QString text, QWidget *parent = 0);

    //explicit ClickableLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~QClickLabel();

private:
    QLabel *m_data;

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent* event);

};

#endif // QCLICKLABEL_H
