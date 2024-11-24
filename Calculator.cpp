#include<iostream>
using namespace std;
//Addition
int addition()
{
	int a,total=0;
	char choice;
	add:
	cout<<"Enter a number"<<endl;
	cin>>a;
	total=total+a;
	cout<<"Do you want to add more numbers y ot n ? "<<endl;
	addagain:
	cin>>choice;
	if(choice=='y' || choice=='Y')
	{
	goto add;
	}
	else if(choice=='n' || choice=='N')
	{
		return total;
	}
	else
	{
		cout<<"you have enetered wrong choice please select y or n "<<endl;
		goto addagain;
	}
	return total;
}

//Multiplication
int multiplication()
{
	int a,total=1;
	char choice;
	mul:
	cout<<"Enter a number"<<endl;
	cin>>a;
	total=total*a;
	cout<<"Do you want to multiply more numbers y ot n ? "<<endl;
	mulagain:
	cin>>choice;
	if(choice=='y' || choice=='Y')
	{
	goto mul;
	}
	else if(choice=='n' || choice=='N')
	{
		return total;
	}
	else
	{
		cout<<"you have enetered wrong choice please select y or n "<<endl;
		goto mulagain;
	}
	return total;
}
//Subtraction
int subtraction()
{
	int a,b,total;
	char choice;
	sub:
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(a>b)
	{
	total=a-b;	
	}
	else
	{
	total=b-a;	
	}
	return total;
}
//Division
int division()
{
	int a,b,total;
	char choice;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(a>b)
	{
	total=a/b;	
	}
	else
	{
	total=b/a;	
	}
	return total;
}


//Modulo
int modulo()
{
	int a,b,total;
	char choice;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(a>b)
	{
	total=a%b;	
	}
	else
	{
	total=b%a;	
	}
	return total;
}

int main()
{
	char value,again;
	start:
	cout<<"Welcome to Calculator app "<<endl;
	cout<<"Please follow the instructions "<<endl;
	cout<<"Press a for Addition"<<endl;
	cout<<"Press s for Subtraction"<<endl;
	cout<<"Press m for Multiplication"<<endl;
	cout<<"Press d for Division"<<endl;
	cout<<"Press o for Modulo"<<endl;
	cin>>value;
	if(value=='a' || value=='A')
	{	
	int addvalue=addition();
	cout<<"Addition is "<<addvalue<<endl;
	cout<<"Do you want to run the application again ? y or N"<<endl;
	addagain:
	cin>>again;
	if(again=='y' || again=='Y')
	goto start;
	else if(again=='n' || again=='N')
	cout<<"Thank you for using our application "<<endl;
	else
	{
		cout<<"You have entered wrong choice please enter y or n "<<endl;
		goto addagain;
	}
	}
	else if(value=='m' || value=='M')
	{	
	int mulvalue=multiplication();
	cout<<"Multiplication is "<<mulvalue<<endl;
	cout<<"Do you want to run the application again ? y or N"<<endl;
	mulagain:
	cin>>again;
	if(again=='y' || again=='Y')
	goto start;
	else if(again=='n' || again=='N')
	cout<<"Thank you for using our application "<<endl;
	else
	{
		cout<<"You have entered wrong choice please enter y or n "<<endl;
		goto mulagain;
	}
	}
	
	else if(value=='s' || value=='S')
	{	
	int subvalue=subtraction();
	cout<<"Subtraction is "<<subvalue<<endl;
	cout<<"Do you want to run the application again ? y or N"<<endl;
	subagain:
	cin>>again;
	if(again=='y' || again=='Y')
	goto start;
	else if(again=='n' || again=='N')
	cout<<"Thank you for using our application "<<endl;
	else
	{
		cout<<"You have entered wrong choice please enter y or n "<<endl;
		goto subagain;
	}
	}
	else if(value=='d' || value=='D')
	{	
	int divvalue=division();
	cout<<"Division is "<<divvalue<<endl;
	cout<<"Do you want to run the application again ? y or N"<<endl;
	divagain:
	cin>>again;
	if(again=='y' || again=='Y')
	goto start;
	else if(again=='n' || again=='N')
	cout<<"Thank you for using our application "<<endl;
	else
	{
		cout<<"You have entered wrong choice please enter y or n "<<endl;
		goto divagain;
	}
	}
	else if(value=='o' || value=='O')
	{	
	int modvalue=modulo();
	cout<<"Modulo is "<<modvalue<<endl;
	cout<<"Do you want to run the application again ? y or N"<<endl;
	modagain:
	cin>>again;
	if(again=='y' || again=='Y')
	goto start;
	else if(again=='n' || again=='N')
	cout<<"Thank you for using our application "<<endl;
	else
	{
		cout<<"You have entered wrong choice please enter y or n "<<endl;
		goto modagain;
	}
	}
	else
	{
		cout<<"You have entered wrong choice ,please enter again "<<endl;
		goto start;
	}
	return 0;
}


