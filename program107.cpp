#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;
class FileX
{
public:
    int fd;
    
    FileX(char Name[])
    {
        fd = open(Name,7777|O_APPEND);
        if(fd == -1)
        {
            cout<<"Unable to write data ..\n";
            exit(0);
        }
        else
        {cout<<"data write succesfully ..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void WriteData()
    {
        char str[]="Pune";
        write(fd,str,4);
    }
};
int main()
{
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    
    obj.WriteData();
    return 0;
}
