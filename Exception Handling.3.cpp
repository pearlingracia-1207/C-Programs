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
throw 0;
else
throw "Less than one";
}
catch(int e){
cout<<e<<endl;
}
catch(const char * msg){
cout<<msg<<endl;
}
return 0;
}
