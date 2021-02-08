#ifndef CHECK_FS_H
#define CHECK_FS_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <iostream>

/* 0.ext4
 * 1.btrfs
 * 2.extfat
 * 3.ntfs
 * 4.fat32
 */
/* 0.create
 * 1.mount
 */

bool fs[5][2];
int checkfs(){
        //FILE *fp;
        std::cout<<'y';
        //if (fp = fopen("/sbin/mkfs.ext4", "r")){fs[0][0]=1;fclose(fp);} else {fs[0][0]=0;fclose(fp);}
        //if (fp = fopen("/sbin/mkfs.btrfs", "r")){fs[1][0]=1;fclose(fp);} else {fs[1][0]=0;fclose(fp);}
        //if (fp = fopen("/sbin/mkfs.exfat", "r")){fs[2][0]=1;fclose(fp);} else {fs[2][0]=0;fclose(fp);}
        //if (fp = fopen("/sbin/mkfs.ntfs", "r")){fs[3][0]=1;fclose(fp);} else {fs[3][0]=0;fclose(fp);}
        //if (fp = fopen("/sbin/mkfs.fat32", "r")){fs[4][0]=1;fclose(fp);} else {fs[4][0]=0;fclose(fp);}
}
#endif // CHECK_FS_H
