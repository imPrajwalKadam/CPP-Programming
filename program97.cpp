// Input : Hello
/*
 H  e   l   l   o
 H  e   l   l
 H  e   l
 H  e
 H
 */



#include<iostream>
using namespace std;

class StringX
{
    public:
    char str[30];
    void Accept()
    {
        cout<<"Enter String\n";
        scanf("%[^'\n']s",str);
    }
void pattern()
    {
        char *ptr=str;
        char *s=str;
        int iCnt=0;
        while(*ptr!='\0')
        {
            while(*(s+iCnt)!='\0')
            {
                cout<<*s<<"\t";
                s++;
            }
            s=str;
            ptr++;
            iCnt++;
            cout<<"\n";
        }
       
    }
};

int main()
{
    int ret=0;
    StringX obj;
    obj.Accept();
    obj.pattern();
        return 0;
}