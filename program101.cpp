#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>


using namespace std;

 class FileX
{
    public:
    int fd;

    FileX(char Name[])
    {
        fd=open(Name,O_RDONLY);
        if(fd==-1)
        {
            cout<<"Unable to open file\n";
        }
        else{
            cout<<"File Successfully opened";
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