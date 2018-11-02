#include "mywidget.h"
#include "ui_mywidget.h"

#include <QLabel>
#include <QToolBar>
#include <QVBoxLayout>
#include <QTime>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    initPlayer();
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::initPlayer()
{
    //设置主界面标题、图标和大小
    setWindowTitle(tr("MyPlayer 音乐播放器"));
    setWindowIcon(QIcon(":/images/icon.png"));
    setMinimumSize(320, 160);
    setMaximumSize(320, 160);
}
