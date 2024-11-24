#include<iostream>
using namespace std;
float onlineShopping()
{
	char choice,item;
	float billamount=0;
	int quantity;
	item:
	cout<<"Welcome to online shopping "<<endl;
	cout<<"Please follow the instructions "<<endl;
	cout<<"Please enter m to order mobile phones "<<endl;
	cout<<"Please enter l to order laptops "<<endl;
	cout<<"Please enter d to order desktop "<<endl;
	cout<<"Please enter s to order speaker "<<endl;
	cout<<"Please enter h to order headphones "<<endl;
	cin>>choice;
	startchoice:
	//Mobile Phones
	if(choice=='m' || choice=='M')
	{
		mobilelabel:
		cout<<"Mobile Details "<<endl;
		cout<<"(1)Apple : Price : 40000"<<endl;
		cout<<"(2)Vivo : Price : 25000"<<endl;
		cout<<"(3)Oppo : Price : 20000"<<endl;
		cout<<"(4)Redmi : Price : 30000"<<endl;
		cout<<"(5)Realme : Price : 25000"<<endl;
		cout<<"(6)Samsung : Price : 22000"<<endl;
		cout<<"Please enter your choice "<<endl;
		cin>>item;
		if(item=='1')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*40000);
		}
		else if(item=='2')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='3')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*20000);
		}
		else if(item=='4')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*30000);
		}
		else if(item=='5')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='6')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*22000);
		}
		else
		{
			cout<<"You have entered wrong choice ,please type again "<<endl;
			goto mobilelabel;
		}
	}
		//Desktop
	else if(choice=='d' || choice=='D')
	{
		desktoplabel:
		cout<<"Desktop Details "<<endl;
		cout<<"(1)Apple : Price : 40000"<<endl;
		cout<<"(2)Vivo : Price : 25000"<<endl;
		cout<<"(3)Oppo : Price : 20000"<<endl;
		cout<<"(4)Redmi : Price : 30000"<<endl;
		cout<<"(5)Realme : Price : 25000"<<endl;
		cout<<"(6)Samsung : Price : 22000"<<endl;
		cout<<"Please enter your choice "<<endl;
		cin>>item;
		if(item=='1')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*40000);
		}
		else if(item=='2')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='3')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*20000);
		}
		else if(item=='4')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*30000);
		}
		else if(item=='5')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='6')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*22000);
		}
		else
		{
			cout<<"You have entered wrong choice ,please type again "<<endl;
			goto desktoplabel;
		}
	}
	//Laptop
		else if(choice=='l' || choice=='L')
	{
		laptoplabel:
		cout<<"Laptop Details "<<endl;
		cout<<"(1)Apple : Price : 40000"<<endl;
		cout<<"(2)Vivo : Price : 25000"<<endl;
		cout<<"(3)Oppo : Price : 20000"<<endl;
		cout<<"(4)Redmi : Price : 30000"<<endl;
		cout<<"(5)Realme : Price : 25000"<<endl;
		cout<<"(6)Samsung : Price : 22000"<<endl;
		cout<<"Please enter your choice "<<endl;
		cin>>item;
		if(item=='1')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*40000);
		}
		else if(item=='2')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='3')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*20000);
		}
		else if(item=='4')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*30000);
		}
		else if(item=='5')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='6')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*22000);
		}
		else
		{
			cout<<"You have entered wrong choice ,please type again "<<endl;
			goto laptoplabel;
		}
	}
	//Speaker
		else if(choice=='s' || choice=='S')
	{
		speakerlabel:
		cout<<"Speaker Details "<<endl;
		cout<<"(1)Apple : Price : 40000"<<endl;
		cout<<"(2)Vivo : Price : 25000"<<endl;
		cout<<"(3)Oppo : Price : 20000"<<endl;
		cout<<"(4)Redmi : Price : 30000"<<endl;
		cout<<"(5)Realme : Price : 25000"<<endl;
		cout<<"(6)Samsung : Price : 22000"<<endl;
		cout<<"Please enter your choice "<<endl;
		cin>>item;
		if(item=='1')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*40000);
		}
		else if(item=='2')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='3')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*20000);
		}
		else if(item=='4')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*30000);
		}
		else if(item=='5')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='6')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*22000);
		}
		else
		{
			cout<<"You have entered wrong choice ,please type again "<<endl;
			goto speakerlabel;
		}
	}
	//Headphone
		else if(choice=='h' || choice=='H')
	{
		headphonelabel:
		cout<<"Desktop Details "<<endl;
		cout<<"(1)Apple : Price : 40000"<<endl;
		cout<<"(2)Vivo : Price : 25000"<<endl;
		cout<<"(3)Oppo : Price : 20000"<<endl;
		cout<<"(4)Redmi : Price : 30000"<<endl;
		cout<<"(5)Realme : Price : 25000"<<endl;
		cout<<"(6)Samsung : Price : 22000"<<endl;
		cout<<"Please enter your choice "<<endl;
		cin>>item;
		if(item=='1')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*40000);
		}
		else if(item=='2')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='3')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*20000);
		}
		else if(item=='4')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*30000);
		}
		else if(item=='5')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*25000);
		}
		else if(item=='6')
		{
			cout<<"Enter Quantity "<<endl;
			cin>>quantity;
			billamount=billamount+(quantity*22000);
		}
		else
		{
			cout<<"You have entered wrong choice ,please type again "<<endl;
			goto headphonelabel;
		}
	}
		else
		{
			cout<<"You have entered wrong choice ,please type again "<<endl;
			goto item;
		}
	
	return billamount;
}
int main()
{
	char startvalue,choiceagain;
	startlabel:
	cout<<"Please press s to start "<<endl;
	cin>>startvalue;
	start:
	if(startvalue=='s'||startvalue=='S')
	{
	float totalAmount=onlineShopping();
	cout<<"Total bill amount : "<<totalAmount<<endl;
	shopagain:
	cout<<"Do you want to shop again y or n "<<endl;
	cin>>choiceagain;	
	if(choiceagain=='y'||choiceagain=='Y')
	goto startlabel;
	else if(choiceagain=='n'||choiceagain=='N')
	cout<<"Thanks for shopping "<<endl;
	else
		{
			cout<<"You have entered wrong choice ,please type again "<<endl;
			goto shopagain;
		}
	}
	else
	{
		cout<<"You have entered wrong value please type s ";
		goto startlabel;
	}
}

