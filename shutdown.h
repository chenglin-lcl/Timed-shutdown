#ifndef SHUTDOWN_H
#define SHUTDOWN_H

#include <QTimeEdit>
#include <QTextEdit>
#include <string>
#include <QDebug>
#include <QString>
#include <windows.h>

class ShutDown
{
public:
    ShutDown();
    int add_shut_task(QTimeEdit* timeEdit, QTextEdit* textEdit);
    void cancel_shut_task(void);
};

#endif // SHUTDOWN_H
