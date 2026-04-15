#include<iostream>
using namespace std;
template<typename T>
T mymax(T x,T y){
return (x>y)?x:y;
}
int main(){
cout<<"Max of 3 and 7 is:"<<mymax<int>(3,7)<<endl;
cout<<"Max of 3.4 and 4.5 is:"<<mymax<double>(3.4,4.5)<<endl;
cout<<"Max of 'g' and 'e' is:"<<mymax<char>('g','e')<<endl;
return 0;}
