#include<iostream>
using namespace std;
int returnTotalBill()
{
	char c,item,vegitems,selectagain,nonvegitems;
	int billamount=0;
	cout<<"Welcome to Food Billing "<<endl;
	cout<<"Please follow below instructions"<<endl;
	cout<<"Step 1. Please press s to start your order "<<endl;
	cout<<"Step 2. You can oreder both veg and nonveg items  "<<endl;
	cout<<"Step 3. Please press a to select veg items "<<endl;
	cout<<"Step 4. Please press b to select nonveg items "<<endl;
	cout<<"Step 5. You will get your final bill after your order"<<endl;
	start:
	cin>>c;
	if(c=='s'||c=='S')
	{
		items:
		cout<<"Please select your choice "<<endl;
		cout<<"(a)Veg items"<<endl<<"(b)Non veg items"<<endl;
		cin>>item;
		if(item=='a' ||item=='A')
		{
		vegitemlist:
		cout<<"Please select 1,2,3,4,5"<<endl;
		cout<<"(1) Paneer : Price : Rs 500"<<endl;
		cout<<"(2) Burger : Price : Rs 300"<<endl;
		cout<<"(3) Roll : Price : Rs 100"<<endl;
		cout<<"(4) Noodles : Price : Rs 200"<<endl;
		cout<<"(5) Dal : Price : Rs 150"<<endl;
		cin>>vegitems;
		if(vegitems=='1')
		{
			billamount=billamount+500;
		}
		else if(vegitems=='2')
		{
			billamount=billamount+300;
		}
		else if(vegitems=='3')
		{
			billamount=billamount+100;
		}
		else if(vegitems=='4')
		{
			billamount=billamount+200;
		}
		else if(vegitems=='5')
		{
			billamount=billamount+150;
		}
		else
		{
			cout<<"You have entered wrong option ";
			goto vegitemlist;
		}
		cout<<"Do you wnat to add more items ? y or n"<<endl;
		cin>>selectagain;
		if(selectagain=='y' || selectagain=='Y')
		goto items;
		else
		return billamount;
		
		}
		else if(item=='b' ||item=='B')
		{
		nonvegitemlist:
		cout<<"Please select 1,2,3,4,5"<<endl;
		cout<<"(1) Mutton : Price : Rs 500"<<endl;
		cout<<"(2) Chicken : Price : Rs 300"<<endl;
		cout<<"(3) Egg : Price : Rs 100"<<endl;
		cout<<"(4) Fish : Price : Rs 200"<<endl;
		cout<<"(5) Crab : Price : Rs 150"<<endl;
		cin>>nonvegitems;
		if(nonvegitems=='1')
		{
			billamount=billamount+500;
		}
		else if(nonvegitems=='2')
		{
			billamount=billamount+300;
		}
		else if(nonvegitems=='3')
		{
			billamount=billamount+100;
		}
		else if(nonvegitems=='4')
		{
			billamount=billamount+200;
		}
		else if(nonvegitems=='5')
		{
			billamount=billamount+150;
		}
		else
		{
			cout<<"You have entered wrong option "<<endl;
			goto nonvegitemlist;
		}
		cout<<"Do you wnat to add more items ? y or n"<<endl;
		cin>>selectagain;
		if(selectagain=='y' || selectagain=='Y')
		goto items;
		else
		return billamount;
		}
		else
		{
			cout<<"You have entered wrong value .."<<endl;
			goto items;
		}
	}
	else
	{
		cout<<"You have entered wrong value please press s"<<endl;
		goto start;
	}
	return billamount;
}

int main()
{
int totalbill=returnTotalBill();
cout<<"Your total bill amount = "<<totalbill<<endl;
cout<<"Thanks for your order ";
}
