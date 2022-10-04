#include <iostream>
using namespace std;
class EMPLOYEE
{
	int Employee_Number;
	char Employee_Name[50];
	int Basic;
	int DA;
	int IT;
	int Net_Sal;
	int Gross_Salary;
	public:
	void read()
	{
		cout<<"enter employee number:";
		cin>>Employee_Number;
		cout<<"enter employee name:";
		cin>>Employee_Name;
		cout<<"enter basic:";
		cin>>Basic;
		DA=0.12*Basic;
	}
	void grosssalary()
	{
		Gross_Salary=Basic+DA;
	}
	void netsalary()
	{
	  IT=0.18*Gross_Salary;
      Net_Sal=Gross_Salary-IT;	
	}
	void print()
	{
		cout<<"gross salary of"<<" "<<Employee_Name<<":"<<Gross_Salary<<"\n";
		cout<<"net salary of"<<" "<<Employee_Name<<":"<<Net_Sal;
		
	}
};
int main()
{
	int n,i;
	cout<<"enter the number of employees:";
	cin>>n;
	EMPLOYEE E[n];
	for(i=0;i<n;i++)
	{
		E[i].read();
		E[i].grosssalary();
		E[i].netsalary();
		E[i].print();
		cout<<"\n";
	}
	return 0;
	
}

