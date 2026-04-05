#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the number:";
cin>>num;
try{
if(num>0)
cout<<"Greater than Zero";
else if(num==0)
throw "The num is zero";
else
throw "Less than one";
}
catch(const char * msg){
cout<<msg<<endl;
}
return 0;
}
