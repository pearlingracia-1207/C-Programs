#include<iostream>
using namespace std;
int main(){
int n,marks;
int total=0;
int avg;
cout<<"Enter number of students:";
cin>>n;
try{
if(n==0)
throw "Number of subjects is zero";
for(int i=0;i<n;i++){
cout<<"Enter marks:"<<endl;
cin>>marks;
total+=marks;
}
avg=total/n;
cout<<"Average:"<<avg<<endl;
}
catch(const char *msg){
cout<<msg<<endl;}
return 0;
}
