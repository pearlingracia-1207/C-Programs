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
T sub(){
return num1-num2;
}
T div(){
if(num2==0)
cout<<"Division by 0 is not possible";
else
return num1/num2;
}
};
int main(){
Calculator<int>intcalc(5,3);
cout<<"Integer Subtraction:"<<intcalc.sub()<<endl;
cout<<"Integer Division:"<<intcalc.div()<<endl;
Calculator<double>doublecalc(2.3,5.5);
cout<<"Double Subtraction:"<<doublecalc.sub()<<endl;
cout<<"Double division:"<<doublecalc.div()<<endl;
return 0;
}
