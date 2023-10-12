#include "tasklist.h"

TaskList::TaskList()
{

}

void TaskList::show_task_list(QTextEdit* text_edit)
{
    // 展示文件，
    // 打开文件的时候，如果这个文件的时间是大于当前时间的，那么这个时间保留
    // 如果这个时间是小于当前时间，说明过期了，那么删除时间
    // 添加文件时，如果添加的时间小于之前的时间，那么删除之前的记录
    // 文件初始化
    // 先读文件，如果没有文件，就创建文件
    std::ifstream input("task.txt");
    if (!input) {
        qDebug() << "没有文件" << endl;
        std::ofstream init("task.txt");
        exit(-1);
    }
    std::string content;
    std::getline(input, content);
    qDebug() << content.c_str() << endl;
    // 如果字符串是空的，就不管，大于0就提取数据
    if (content.size() == 0) {
        return;
    }
    int hour = std::stoi(content.substr(11, 2));
    int minute = std::stoi(content.substr(14, 2));
    qDebug() << hour << minute << endl;
    // auto append_task_str = hour;
    text_edit->append(QString(""));



    // std::ofstream new_file("test.txt", std::ios::app);
    // new_file << "hello world" << std::endl;
//
}
