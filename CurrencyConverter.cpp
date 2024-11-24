#include<iostream>
using namespace std;
float converter()
{
	char currname1;
	char currname2;
	float currency1,currency2;
	currlevel:
	cout<<"Enter currency 1 name "<<endl;
	cin>>currname1;
	cout<<"Enter currency 1 value"<<endl;
	cin>>currency1;
	switch(currname1)
	{
		case 'a' :
					currlab1:
					cout<<"Enter currency 2 name "<<endl;
					cin>>currname2;
					if(currname2=='a' || currname2=='A')
					{
						currency2=currency1*1;
					}
					else if(currname2=='b' || currname2=='B')
					{
						currency2=currency1*85.00;
					}
					else if(currname2=='c' || currname2=='C')
					{
						currency2=currency1*0.85;
					}
					else if(currname2=='d' || currname2=='D')
					{
						currency2=currency1*0.72;
					}
					else
					{
						cout<<"You have entered wrong value Please type again "<<endl;
						goto currlab1;
					}
					break;
		case 'b' :
					currlab2:
					cout<<"Enter currency 2 name "<<endl;
					cin>>currname2;
					if(currname2=='a' || currname2=='A')
					{
						currency2=currency1*0.01;
					}
					else if(currname2=='b' || currname2=='B')
					{
						currency2=currency1*1.00;
					}
					else if(currname2=='c' || currname2=='C')
					{
						currency2=currency1*0.01;
					}
					else if(currname2=='d' || currname2=='D')
					{
						currency2=currency1*0.009;
					}
					else
					{
						cout<<"You have entered wrong value Please type again "<<endl;
						goto currlab2;
					}
					break;
		case 'c' :
					currlab3:
					cout<<"Enter currency 2 name "<<endl;
					cin>>currname2;
					if(currname2=='a' || currname2=='A')
					{
						currency2=currency1*1.16;
					}
					else if(currname2=='b' || currname2=='B')
					{
						currency2=currency1*86.37;
					}
					else if(currname2=='c' || currname2=='C')
					{
						currency2=currency1*1;
					}
					else if(currname2=='d' || currname2=='D')
					{
						currency2=currency1*0.85;
					}
					else
					{
						cout<<"You have entered wrong value Please type again "<<endl;
						goto currlab3;
					}
					break;
		case 'd' :
					currlab4:
					cout<<"Enter currency 2 name "<<endl;
					cin>>currname2;
					if(currname2=='a' || currname2=='A')
					{
						currency2=currency1*1.37;
					}
					else if(currname2=='b' || currname2=='B')
					{
						currency2=currency1*101.20;
					}
					else if(currname2=='c' || currname2=='C')
					{
						currency2=currency1*1.17;
					}
					else if(currname2=='d' || currname2=='D')
					{
						currency2=currency1*1;
					}
					else
					{
						cout<<"You have entered wrong value Please type again "<<endl;
						goto currlab4;
					}
					break;
					
		default :
					cout<<"You have entered wrong value Please type again "<<endl;
					goto currlevel;
					break;
	}
	return currency2;
}
int main()
{
	char startvalue,selectagain;
	start:
	cout<<"Welcome to Currency Converter Application"<<endl;
	cout<<"Please follow Instructions "<<endl;
	cout<<"(a)Dollar"<<endl;
	cout<<"(b)Rupees"<<endl;
	cout<<"(c)Euro"<<endl;
	cout<<"(d)Pound"<<endl;
	cout<<"Enter currency 1 which you want to convert "<<endl;
	cout<<"Enter value for currency 1 "<<endl;
	cout<<"Enter currency 2 in which you want to convert currency 1 "<<endl;
	cout<<"(a)Dollar"<<endl;
	cout<<"(b)Rupees"<<endl;
	cout<<"(c)Euro"<<endl;
	cout<<"(d)Pound"<<endl;
	cout<<"Please press s to start"<<endl;
	selectchoice:
	cin>>startvalue;
	if(startvalue=='s' || startvalue=='S')
	{
		float finalvalue = converter();
		cout<<"Result is "<<finalvalue<<endl;
		cout<<"Do you want to use application again "<<endl;
		typeagain:
		cin>>selectagain;
		if(selectagain=='y' || selectagain=='Y')
		goto start;
		else if(selectagain=='n' || selectagain=='N')
		{
			cout<<"Thanks for using out application "<<endl;
		}
		else
		{
			cout<<"You have entered wrong value please enter again "<<endl;
			goto typeagain;
		}
	}
	else
	{
		cout<<"You have entered Wrong value please type s "<<endl;
		goto selectchoice;
	}
	return 0;
}
