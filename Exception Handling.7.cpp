#include<iostream>
using namespace std;
class InsufficientBalanceException{
string msg;
public:
InsufficientBalanceException(string m){
msg=m;}
void displayMessage(){
cout<<msg<<endl;
}};
class BankAccount{
private:
int balance;
public:
BankAccount(int b){
balance=b;
}
void withdrawal(int amount){
if(amount>balance){
throw InsufficientBalanceException("Error: Insufficient balance!");
}else{
balance-=amount;
cout<<"Withdrawal successfull"<<endl;
cout<<"Remaining balance: "<<balance<<endl;
}}};
int main(){
int availableBalance,withdrawalAmount;
cin>>availableBalance;
cin>>withdrawalAmount;
BankAccount acc(availableBalance);
try{
acc.withdrawal(withdrawalAmount);
}
catch(InsufficientBalanceException e){
e.displayMessage();
}
return 0;
}
