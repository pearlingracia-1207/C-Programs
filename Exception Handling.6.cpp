#include<iostream>
using namespace std;
class ParkingFull{
    public:
void msg(){
cout<<"Parking is Full.";
}
};
class ParkingEmpty{
public:
void msg(){
cout<<"Parking is Empty.";
}
};
class ParkingLot{
private:
int capacity;
int vehicle;
public:
ParkingLot(int c){
capacity=c;
vehicle=0;
}
void parkvehicle(){
if(capacity==vehicle)
throw ParkingFull();
else{
    vehicle++;
    cout<<"Vehicle parked successfully"<<endl;
}
}
void removevehicle(){
if(vehicle==0)
    throw ParkingEmpty();
    else{
        vehicle--;
    cout<<"vehicle Removed successfully"<<endl;
    }
}
void display(){
cout<<"Available slots: "<<vehicle<<endl;
}
};
int main(){
ParkingLot p(5);
int choice;
while(true){
    cout<<"1.Park Vehicle\n2.Remove Vehicle\n3.Display\n4.exit"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    try{
    switch(choice){
case 1:
    p.parkvehicle();
    break;
case 2:
    p.removevehicle();
    break;
case 3:
    p.display();
    break;
case 4:
    return 0;
default:
    cout<<"Invalid choice:"<<endl;
    }
    }
    catch(ParkingFull e){
    e.msg();
    }
    catch(ParkingEmpty e){
    e.msg();
    }
    }
    }
