#ifndef TASKLIST_H
#define TASKLIST_H

#include <fstream>
#include <QDebug>
#include <string>
#include <QTextEdit>

class TaskList
{
public:
    TaskList();
    void show_task_list(QTextEdit * text_edit);
};

#endif // TASKLIST_H
