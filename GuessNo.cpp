#include<bits/stdc++.h>
using namespace std;
int main(){
    srand((unsigned int) time(0));
    int number = (rand()%100+1);
    int guess=0;
    cout<<"Guess no. b/w 1to100"<<endl;
    for (int i = 1; i < 8; i++)
    {
        cout<<"Try left = "<<8-i<<endl;
        cin>>guess;
        if (number==guess)
        {
            cout<<"You Won"<<endl;
        cout<<"You found the no."<<endl;
        cout<<"In "<<i<<" try"<<endl;
        }
        else if(i==7)
        {
            cout<<"You Losses"<<endl;
            cout<<"You couldn't found the no."<<endl;
            cout<<"The number was "<<number<<endl;
        }
        else if (guess>number)
        {
            cout<<"Your guess is High"<<endl;
            cout<<"Try again"<<endl;
        }
         else if (guess<number)
        {
            cout<<"Your guess is Low"<<endl;
            cout<<"Try again"<<endl;
        }
        
    }
    
}