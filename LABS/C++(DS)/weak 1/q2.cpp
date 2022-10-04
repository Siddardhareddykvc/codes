#include <iostream>
using namespace std;
class flight
{
	float fuel;
	int flight_number;
	char destination[50];
	float distance;
	float calculate_fuel(float dis)
	     {
		   if(dis<=1000)
		    {
			  fuel=fuel+500;
		    }
		   else if(dis>1000 && dis<=2000)
		    {
			  fuel=fuel+1100;
		    }
		   else if(dis>2000)
		    {
			  fuel=fuel+2200;
		    }
		   return fuel;
	     }
	     
    public:
    	flight(){
             fuel=13.2;		
		}
	void details()
	{
		cout<<"enter the flight number:";
		cin>>flight_number;
		cout<<"entger the destination:";
		cin>>destination;
		cout<<"enter the distnce:";
		cin>>distance;
		fuel=calculate_fuel(distance);
		cout<<"\n";
	}
	void display()
	{
		cout<<"the flight"<<" "<<flight_number<<"\n";
		cout<<destination<<"\n";
		cout<<distance<<"\n";
		cout<<"requires of "<<fuel<<" "<<"of fuel";
	}
	
};
int main()
{
	flight f;
	f.details();
	f.display();
	return 0;
}
