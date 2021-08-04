// Input : 1234
/*
4   3   2   1
3   2   1
2   1
1
 */


#include<iostream>
using namespace std;

class StringX
{
    public:
    int iNo=0;
    void Accept()
    {
        cout<<"Enter Number\n";
        cin>>iNo;
    }
void pattern()
    {
        int iValue=iNo,iTemp=0;
        while(iValue>0)
        {
            iTemp=iValue;
            while(iTemp>0)
            {
                cout<<iTemp%10<<"\t";
                iTemp=iTemp/10;
            }
            cout<<"\n";
            iValue=iValue/10;
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