#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter the number: ";
cin>>n;
try{
if(n%2!=0)
throw -1;
else
cout<<"Even Number";
}
catch(int e){
cout<<"Exception:"<<e<<endl;

}
return 0;
}
