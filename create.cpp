//
// Created by 王兴钰 on 2018/7/7.
//
#include "index.h"
void create(char filename[],int size,int u_id,int mode,int limit)
{
    int i,j;

    // 当前目录下是否有重名文件
    // TODO 当前目录下查找重复的文件名
    for(i = 0;i < 1024;i++)
    {
        if(strcmp(filename,dirn[i].f_name)==0)  //如果有文件名相同，则创建失败
        {
            cout << "有重复文件名!创建失败" << endl;
            return;
        }
    }

    for(i = 0;i <1024;i++)
    {
        if(dirn[i].i_num == -1)
        {
            dirn[i].i_num = i;
            strcpy(dirn[i].f_name,filename);
            i_node[i].i_mode = mode;
            i_node[i].i_size = size;
            i_node[i].i_Uid = u_id;
            i_node[i].i_limit = limit;
            allot(size);
            for(j=0;j<size;j++)
            {
                i_node[i].i_address[j] = physic[j];
                physic[j] = -1;
            }
            break;
         }
    }
}