#include<iostream>

using namespace std;

class Book{
	
	private:
		int book_yr;
		string book_title, book_author;
		
		
	public:
		Book(){};
		
		void setData(string bt, string ba, int yr)
		{
			book_yr = yr;
			book_title = bt;
			book_author = ba;
		}
		
		void displayData(Book &obj)
		{
			cout << "Book Name is :- " << obj.book_title << endl;
			cout << "Book's author is :- " << obj.book_title << endl;
			cout << "Book release year is :- " << obj.book_yr << endl << endl;
		}
		
		
};

int main()
{
	int n, i, yr;
	string bt, ba;
	
	cout << "Enter The number of books you want to add :- ";
	cin >> n;
	
	Book bk[n];
	
	for(i=0; i<n; i++)
	{
			cout << "Enter Book's Name(Title) :- ";
			cin >> bt;
			cout << "Enter Book's author :- ";
			cin >> ba;
			cout << "Enter Book's release year :- ";
			cin >> yr;
			cout << endl << endl;
			
			bk[i].setData(bt,ba,yr);
	}
	
	cout << endl << "Here is the all books." << endl < endl;
	
	for(i=0; i<n; i++)
	{
		bk[i].displayData(bk[i]);
	}
	
	return 0;
}