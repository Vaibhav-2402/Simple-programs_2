#include<iostream>
using namespace std;
const int clubs=0;
const int diamonds=1;
const int hearts=2;
const int spades=3;
const int jack=11;
const int queen=12;
const int king=13;
const int ace=14;

struct card
{
    int number;
    int suit;
};
int main()
{
    card temp,chosen,prize;
    int position;
    card card1{ 7,hearts};
    cout<<"\n Card number 1 is 7 of hearts";
    card card2 { 9,spades};
    cout<<"\n Card number 2 is 9 of spades";
    card card3{ ace, diamonds};
    cout<<"\n Card number 3 is ace of diamonds"<<endl;
    prize = card3;
    cout<<"I m swapping card1 and card3"<<endl;
    temp=card3; card3=card1; card1=temp;
    cout<<"I m swapping card2 and card3"<<endl;
    temp=card3; card3=card2; card2=temp;
    cout<<"I m swapping card1 and card2"<<endl;
    temp=card2; card2=card1; card1=temp;

    cout<<"Tell the position of ace of diamonds(1,2,3) :"; cin>>position;
    switch(position)
    {
        case 1: 
        chosen=card1;
        break;
        case 2: 
        chosen=card2;
        break;
        case 3:
        chosen=card3;
        break;
        default:
        cout<<" Wrong choice entered";
        break;
    }
    if(chosen.number==prize.number && chosen.suit==prize.suit)
        cout<<"\n Congrats you won ";
        else
        cout<<"You lost";
     return 0;
}


