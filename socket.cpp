#include "socket.h"

Mysocket::Mysocket(QObject *parent):
    QObject(parent)
{

}

void Mysocket::Connect()
{
    socket = new QTcpSocket(this);

}
