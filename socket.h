#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>


class Mysocket : public QObject
{
    Q_OBJECT
public:
    explicit Mysocket(QObject *parent = 0);

    void Connect();



signals:

public slots:
    void connected();
    void disconnected();
    void bytesWritten(qint64 bytes);
    void readRead();


private:
    QTcpSocket *socket;
};

#endif // SOCKET_H
