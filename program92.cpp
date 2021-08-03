#include<iostream>
using namespace std;
class Arithmatic
{
  public:
  int iNo1,iNo2;
  Arithmatic(int x,int y)
  {
    iNo1=x;
    iNo2=y;
  }

  
 /* void Accept()
  {
    cout<<"Enter First Number\n";
    cin>>iNo1;
    cout<<"Enter Second Number\n";
    cin>>iNo2;
  }*/
  int Addition()
  {
  int iResult=0;
  iResult=iNo1+iNo2;
  return iResult;
  }
int Substraction()
{
int iResult=0;
iResult=iNo1-iNo2;
return iResult;
}
};
int main()
{
  int iRet1=0,iRet2=0;
  int i=0,j=0;

  cout<<"Enter First number\n";
  cin>>i;
  cout<<"Enter Second number\n";
  cin>>j;


  Arithmatic obj1(i,j);
  cout<<"Enter First number\n";
  cin>>i;
  cout<<"Enter second number\n";
  cin>>j;

  Arithmatic obj2(i,j);
  iRet1=obj1.Addition();
  cout<<"Addition is:"<<iRet1<<"\n";
  
  obj2.Substraction();
  iRet2=obj2.Substraction();
  cout<<"Substraction is:"<<iRet2<<"\n";
  
  return 0;
}