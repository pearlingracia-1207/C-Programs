#include<iostream>
using namespace std;
template <class T>
T sumArray(T arr[],int n){
T sum=0;
for(int i=0;i<n;i++){
sum=sum+arr[i];
}
return sum;
}
int main(){
int a[5]={1,2,3,4,5};
double b[5]={1.2,4.5,4.5,6.7,8.9};
cout<<"Sum of integer array: "<<sumArray(a,5)<<endl;
cout<<"Sum of double array: "<<sumArray(b,5)<<endl;
return 0;}
