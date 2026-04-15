#include<iostream>
#include<string>
using namespace std;
template<class T>
T minimum(T a,T b){
if(a<b)
return a;
else
return b;
}
int main(){
int x=10,y=5;
string s1="Apple";
string s2="Banana";
cout<<"Minimum integer:"<<minimum(x,y)<<endl;
cout<<"Minimum string: "<<minimum(s1,s2)<<endl;
return 0;
}
