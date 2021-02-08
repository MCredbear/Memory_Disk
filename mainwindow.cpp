#include "mainwindow.h"
#include "ui_mainwindow.h"


/* 0.ext4
 * 1.btrfs
 * 2.extfat
 * 3.ntfs
 * 4.fat32
 */
/* 0.create
 * 1.mount
 */

void MainWindow::openwincreate(){
    class create *openwin;
    openwin=new class create;
    openwin->show();
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action_1,SIGNAL(triggered()),this,SLOT(openwincreate()));

}
MainWindow::~MainWindow()
{
    delete ui;
}

