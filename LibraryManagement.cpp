#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Library
{
	public:
	int	id;
	char name[100];
	char author[100];
	char student[100];
	int price;
	int pages;
};
int main()
{
	Library lib[20];
	int input=0;
	int count=0;
	while(input!=3)
	{
		cout<<"Enter 1 to enter details like id ,name ,author ,student ,price ,pages "<<endl;
		cout<<"Enter 2 to display details "<<endl;
		cout<<"Enter 3 to Quit "<<endl;
		start:
		cin>>input;
		switch(input)
		{
			case 1:
				cout<<"Enter book id "<<endl;
				cin>>lib[count].id;
				cout<<"Enter book name "<<endl;
				cin.getline(lib[count].name,100,'$');
				cout<<"Enter book author name "<<endl;
				cin.getline(lib[count].author,100,'$');
				cout<<"Enter student name "<<endl;
				cin.getline(lib[count].student,100,'$');
				cout<<"Enter book price "<<endl;
				cin>>lib[count].price;
				cout<<"Enter book pages "<<endl;
				cin>>lib[count].pages;
				count++;
				break;
			case 2:
				int i;
				for(i=0;i<count;i++)
				{
				cout<<"Book id : "<<lib[i].id;
				cout<<"Book name : "<<lib[i].name;
				cout<<"Book author name "<<lib[i].author;
				cout<<"Student name "<<lib[i].student;
				cout<<"Book price "<<lib[i].price;
				cout<<"Book pages "<<lib[i].pages;
				}
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"You have entered value please try again "<<endl;
				goto start;
		}
	}
	return 0;
}


