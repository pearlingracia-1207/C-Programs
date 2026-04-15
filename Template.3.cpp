#include<iostream>
using namespace std;
template<class T>
int arrMin(T arr[],int n){
T m=arr[0];
for(int i=0;i<n;i++){
if(arr[i]<m){
m=arr[i];
}
}
return m;
}
int main(){
int arr1[]={10,20,15,12};
int n1=sizeof(arr1)/sizeof(arr1[0]);
char arr2[]={'a','b','c'};
int n2=sizeof(arr2)/sizeof(arr2[0]);
cout<<arrMin(arr1,n1)<<endl;
cout<<arrMin(arr2,n2)<<endl;
return 0;
}
