#include<iostream>

using namespace std;

class Person{
	
	private:
		int person_age;
		string person_name, person_address;
		
		
	public:
		Person(){};
		
		void setData(string person_name, string person_address, int person_age)
		{
			this->person_age = person_age;
			this->person_name = person_name;
			this->person_address = person_address;
		}
		
		void displayData(Person &obj)
		{
			cout << "Person Name is :- " << obj.person_name << endl;
			cout << "Person's address :- " << obj.person_address << endl;
			cout << "Person's age :- " << obj.person_age << endl << endl;
		}
		
		
};

int main()
{
	int n, i, ag;
	string pn, pa;
	
	cout << "Enter The number of persons you want to add :- ";
	cin >> n;
	
	Person pr[n];
	
	for(i=0; i<n; i++)
	{
			cout << "Enter Person's Name :- ";
			cin >> pn;
			cout << "Enter Person's address :- ";
			cin >> pa;
			cout << "Enter Person's age :- ";
			cin >> ag;
			cout << endl << endl;
			
			pr[i].setData(pn,pa,ag);
	}
	
	cout << endl << "Here is the all Persons." << endl << endl;
	
	for(i=0; i<n; i++)
	{
		pr[i].displayData(pr[i]);
	}
	
	return 0;
}