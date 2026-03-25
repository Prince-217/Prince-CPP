#include<iostream>

using namespace std;

class Animal
{
	protected:
		string ani_name, ani_sound;
	public:
		virtual void setdata(){};
		virtual void displayData(){};
			
};


class Dog : public Animal
{
	public:
		void setdata(string nm, string aso)
		{
			ani_name = nm;
			ani_sound = aso;
		}
		
		void displayData()
		{
			cout << "Animal name is :- " << ani_name << endl;	
			cout << "Animal sound is :- " << ani_sound << endl << endl;	
		}	
};

class Cat : public Animal
{
	public:
		void setdata(string nm, string aso)
		{
			ani_name = nm;
			ani_sound = aso;
		}
		
		void displayData()
		{
			cout << "Animal name is :- " << ani_name << endl;	
			cout << "Animal sound is :- " << ani_sound << endl << endl;	
		}	
};

int main()
{
	Dog dg;
	Cat ct;
	
	dg.setdata("Dog","Woof woof");
	ct.setdata("Cat","Meow meow");
	
	dg.displayData();
	ct.displayData();
	
	
	return 0;
}