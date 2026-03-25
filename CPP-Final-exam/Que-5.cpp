#include<iostream>

using namespace std;

class Shape{
	
	public:
		
		virtual void area(){};
		virtual void draw(){};
		
	
};

class Circle : Shape{
	
	protected:
		double ara;
	
	public:
		Circle(){}
		
		void area(double ar)
		{
			ara = ar;
		}
		
		void draw(Circle &obj)
		{
			cout << "Circle with area " << obj.ara << " is created" << endl;
		}
	
	
};

class Rectangle : Shape{
	
	protected:
		double ara;
	
	public:
		Rectangle(){}
		
		void area(double ar)
		{
			ara = ar;
		}
		
		void draw(Rectangle &obj)
		{
			cout << "Reactangle with area " << obj.ara << " is created" << endl;
		}
	
	
};

int main()
{
	
	int i, cn, rn, temp = 1;
	double ar;
	
	cout << "How many circle you want to add :- ";
	cin >> cn;
	
	cout << "How many Rectangle you want to add :- ";
	cin >> rn;
	
	Circle* crl = new Circle[cn];
	Rectangle* rec = new Rectangle[rn];
	
	for(i=0; i<cn; i++)
	{
		cout << "Enter area of circle " << temp << " :-" << endl;
		cin >> ar;
		crl[i].area(ar); 
		temp++;
	}
	
	temp = 1;
	
	for(i=0; i<rn; i++)
	{
		cout << "Enter area of rectangle " << temp << " :-" << endl;
		cin >> ar;
		rec[i].area(ar); 
		temp++;
	}
	
	cout << endl << "Here is the result :- " << endl << endl;
	
	for(i=0; i<cn; i++)
	{
		crl[i].draw(crl[i]);
	}
	
	for(i=0; i<cn; i++)
	{
		rec[i].draw(rec[i]);
	}
	
	return 0;
	
}