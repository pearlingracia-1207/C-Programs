#include<iostream>
using namespace std;
class OutofStockException{
public:
void displayMsg(){
cout<<"Error: Requested quantity exceeds available Stock.";
}};
class Product{
private:
int stock;
public:
Product(int s){
stock=s;}
void purchase(int quantity){
if(quantity>stock){
throw OutofStockException();
}else{
stock-=quantity;
cout<<"Purchase successfull"<<endl;
}}};
int main(){
int availableStock,requestedQty;
cin>>availableStock;
cin>>requestedQty;
Product p(availableStock);
try{
p.purchase(requestedQty);
}
catch(OutofStockException e){
e.displayMsg();
}
return 0;}
