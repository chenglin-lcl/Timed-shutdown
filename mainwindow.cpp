#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    auto icon = QIcon("icon.png");
    this->setWindowIcon(icon);
    // QTime current_time = QTime::currentTime();//获取系统现在的时间
    // 时间框
    auto timeEdit = ui->timeEdit;
    // 设置时间框的基本时间
    timeEdit->setTime(QTime(3, 0, 0));
    // 打印当前时间框的时间
    qDebug() << timeEdit->time().hour() << endl;
    // 文本框
    ui->textEdit->append("请先清除定时任务，然后设置新的定时任务!\n");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    st.add_shut_task(ui->timeEdit, ui->textEdit);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->append("已清除定时任务!\n");
    st.cancel_shut_task();

}
