#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter your age:";
cin>>age;
try{
if(age>18)
cout<<"Eligible to vote";
else
throw "Not eligible to vote";
}
catch(const char *msg){
cout<<"Exception:"<<msg<<endl;
}
return 0;
}
