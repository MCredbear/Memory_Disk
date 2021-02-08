#include "create.h"
#include "ui_create.h"
#include "check_fs.h"

/* 0.ext4
 * 1.btrfs
 * 2.extfat
 * 3.ntfs
 * 4.fat32
 */
/* 0.create
 * 1.mount
 */

create::create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::create)
{
    checkfs();

    ui->setupUi(this);
    if (fs[0][0]) ui->comboBox_2->addItem("ext4");
}

create::~create()
{
    delete ui;
}
