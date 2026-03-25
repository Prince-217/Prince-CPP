#include<iostream>

using namespace std;

class Animal
{
	protected:
		string ani_name, ani_sound;
	public:
		virtual void setdata(){};
		virtual void getData(){
			cout << "Animal name is :- " << ani_name << endl;	
			cout << "Animal sound is :- " << ani_sound << endl << endl;	
		};
		
		virtual void displayDetails(){};
			
};


class Allanimals : public Animal
{
	public:
		void setdata(string nm, string aso)
		{
			ani_name = nm;
			ani_sound = aso;
		}
		
		void displayDetails(Allanimals &obj)
		{
			cout << "Animal name is :- " << obj.ani_name << endl;	
			cout << "Animal sound is :- " << obj.ani_sound << endl << endl;
		}			
};


int main()
{
	int n, i, temp = 1;
	string aninm, anisnd;
	
	cout << "Enter The number of animals you want to add :- ";
	cin >> n;
	
	Allanimals* anim = new Allanimals[n];
	
	for(i=0; i<n; i++)
	{
		cout << "Enter the name of animal " << temp << ":- ";
		cin >> aninm;
		cout << "Enter the sound of animal " << temp << ":- ";
		cin >> anisnd;
		cout << endl;
		
		anim[i].setdata(aninm,anisnd);
		temp++;
	}
	
	temp = 1;
	
	for(i=0; i<n; i++)
	{
		cout << "Animal " << temp << ":-" << endl;
		anim[i].displayDetails(anim[i]);
		temp++;
	}
	
	
	return 0;
}