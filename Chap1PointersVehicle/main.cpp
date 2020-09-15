#include <iostream>
/*Create a Vehicle Class with a private variable as gear (integer - indicates the number of gears in a vehicle) 
- Make a vehicle object using pointer and new keyword in the main function
create functions in the gear class to set & get the value of gear 

Create a function - "ModifyGear" (outside the Vehicle class) to accept the pointer of a vehicle type as argument 
- display the value of gears in this function when its called 
- change the value of the gear to a different value inside the function 

*In main function 
- create a object of vehicle class 
- set the value of gear to 4 (using the Vehicle function) 
- call ModifyGear function and pass in the pointer to this object 
- after returning from the function, print the value of gear for this object in main function
- Before the end of the main function. delete the memory allocated by the object of Vehicle */


using namespace std;

class Vehicle{
 private:
 int gear; 

  public:
  int GetGear()
  {
    
  return gear;
  }

  void SetGear(int value)
  {
  gear = value; 
  }

};

void ModifyGear(Vehicle *v)
{
int g;   
cout<<"Current Gear Value is: "<<v->GetGear();
cout<<"\nEnter a new gear value\n";
cin>>g;
v->SetGear(g); 
}

int main() {
 Vehicle *vehicle = new Vehicle(); 
 ModifyGear(vehicle);
cout<<"gear value has been changed to: "<<vehicle->GetGear();
delete vehicle; 
}