#include "shutdown.h"

ShutDown::ShutDown()
{

}

int ShutDown::add_shut_task(QTimeEdit* timeEdit, QTextEdit* textEdit) {
    // 获得小时，分钟，秒
    int hour = timeEdit->time().hour();
    int minute = timeEdit->time().minute();
    int second = timeEdit->time().second();

    int second_sum = hour * 60 * 60 + minute * 60 + second;

    std::string command = "shutdown -s -t ";
    auto command_str = command + std::to_string(second_sum);
    // 打印时间
    QString q_command_str = QString(command_str.c_str());
    qDebug() << q_command_str << endl;
    // 打印时间
    system(command_str.c_str());

    textEdit->append((std::to_string(hour) + "小时" + std::to_string(minute) + "分钟之后关闭计算机!\n").c_str());
    return second_sum;
}

void ShutDown::cancel_shut_task(void) {
    std::string command = "shutdown -a";
    system(command.c_str());
}
