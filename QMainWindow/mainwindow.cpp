#include "mainwindow.h"
#include <QMenuBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600,400);
    //菜单栏创建
    QMenuBar * bar = menuBar();
    //将菜单放在窗口中
    setMenuBar(bar);
    //创建菜单
    QMenu *fileMenu = bar->addMenu("文件");
    QMenu *editMenu = bar->addMenu("编辑");
    fileMenu->addAction("新建");
    fileMenu->addAction("打开");
    editMenu->addAction("剪切");
    editMenu->addAction("复制");
}

MainWindow::~MainWindow() {}
