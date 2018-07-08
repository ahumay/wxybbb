#include <iostream>
#include "index.h"
using namespace std;
struct inode i_node[1024];
struct dir dirn[1024];
struct Super_Block super_block;
struct block memory[memorysize];
int physic[100];    //文件地址缓冲区

int main() {
    initialize();
    cout << "worked!" << endl;
    char tempfilename[100];
    cin >> tempfilename;
    create(tempfilename,10,3,1,1);
    display_memory();
    display(tempfilename);
    return 0;
}