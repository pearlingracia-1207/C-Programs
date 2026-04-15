#include<iostream>
using namespace std;
template<class T>
class Calculator{
private:
T num1, num2;
public:
Calculator(T a,T b){
num1=a;
num2=b;
}
T add(){
return num1+num2;
}
T multiply(){
return num1*num2;
}
};
int main(){
Calculator<int>intcalc(5,3);
cout<<"Integer Addition:"<<intcalc.add()<<endl;
cout<<"Integer Multiplication:"<<intcalc.multiply()<<endl;
Calculator<double>doublecalc(2.3,5.5);
cout<<"Double Addition:"<<doublecalc.add()<<endl;
cout<<"Double Multiplication:"<<doublecalc.multiply()<<endl;
return 0;
}
