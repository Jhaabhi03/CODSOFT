#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter 1st no. = ";
    cin>>a;
//     cout<<"what do youu want to do(+,-,/,*,%)"<<endl;
// char op;
// cin>>op;
    cout<<"enter 2nd no. = ";
    cin>>b;
cout<<"what do youu want to do(+,-,/,*,%)"<<endl;
char op;
cin>>op;
switch (op)
{
case '+': 
    cout<<a<<" + "<<b<<" = "<<a+b;
    break;
case '-': 
    cout<<a<<" - "<<b<<" = "<<a-b;
    break;
case '/': 
    cout<<a<<" / "<<b<<" = "<<a/b;
    break;
case '*': 
    cout<<a<<" * "<<b<<" = "<<a*b;
    break; 
// case '%': 
//     cout<<"The reminder b/w "<<a<<" and "<<b<<" is = "<<a%b;
//     break;       
default:
cout<<"invalid operator";
    break;
}
return 0;
}