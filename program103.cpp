#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>
//#include<io.h>

using namespace std;

class FileX
{
    public:
    int fd;

    FileX(char Name[])
    {
        fd=creat(Name,0777);
        if(fd==-1)
        {
            cout<<"Unable Create File\n";
        }
        else{
            cout<<"File Successfully Created";
        }
    }
    ~FileX()
    {
        close (fd);
    }
};
int main()
{
    char str[30];
    cout<<"Enter File name\n";
    cin>>str;
    FileX obj(str);
    return 0;
}