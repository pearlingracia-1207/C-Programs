#include<iostream>
using namespace std;
class SeatsFull{
    public:
void message(){
cout<<"Seats are fulled";
}
};
class SeatsEmpty{
    public:
void message(){
cout<<"Seats are empty";
}
};
class Movie{
int capacity;
int seats;
public:
Movie(int c){
capacity=c;
seats=0;}
void bookTicket(){
if(capacity==seats){
throw SeatsFull();
}
seats++;
cout<<"Ticket Booked.No of Tickets<<seats<<endl";
}
void removeTicket(){
if(seats==0){
throw SeatsEmpty();
}
seats--;
cout<<"Tickets not Booked.No of Tickets"<<seats<<endl;
}
void display(){
cout<<"Available Seats:"<<(capacity-seats)<<endl;
}};
int main()
{
Movie p(5);
int choice;
while(true){
cout<<"\n1.Book Ticket\n2.Remove Ticket\n3.Display Ticket\n4.Exit"<<endl;
cout<<"enter choice(1-4):";
cin>>choice;
try{
switch(choice){
case 1:
p.bookTicket();
break;
case 2:
p.removeTicket();
break;
case 3:
p.display();
break;
case 4:
return 0;
default:
cout<<"invalid choice";
}}
catch(SeatsFull s){
s.message();
}
catch(SeatsEmpty s){
s.message();
}}}
