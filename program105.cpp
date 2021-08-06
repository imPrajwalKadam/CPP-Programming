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
        fd = open(Name,O_RDONLY);
        if(fd == -1)
        {   cout<<"Unable to Open file\n";}
        else
        {cout<<"File Open created..\n";}
    }
    ~FileX()
    {
        close(fd);
    }
    void ReadData(int iSize)
    {
        int ret;
        char *Arr=new char[iSize];
          
        
        ret=read(fd,Arr,iSize);
       //       printf("%d\n",ret);
        write(1,Arr,ret);
        delete []Arr;
    }
};
int main()
{
    int iNo;
    char str[30];
    cout<<"Enter file name\n";
    cin>>str;
    FileX obj(str);
    cout<<"Enter number of character you want to read\n";
    cin>>iNo;
    obj.ReadData(iNo);
    return 0;
}
