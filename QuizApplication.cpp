#include<iostream>
using namespace std;
int playQuiz()
{
	char c;
	char option;
	int score=0;
	cout<<"Welcome to Quiz game"<<endl;
	cout<<"Please follow the instructions"<<endl;
	cout<<"Step 1 : Quiz Contains total 10 Questions "<<endl;
	cout<<"Step 2 : You will be given 1 marks for each correct answer  "<<endl;
	cout<<"Step 3 : There will be no negative marking  "<<endl;
	cout<<"Step 4 : Please press s to start the quiz "<<endl;
	cout<<"Step 5 : Please select option a,b,c,d "<<endl;
	cout<<"Step 6 : If your final score is greater than or equal to 3 then you will be pass "<<endl;
	cin>>c;
	if(c=='s' || c=='S')
	{
		cout<<"Q1. What is the capital of India ?"<<endl;
		cout<<"(a) Delhi (b) Mumbai (c) Kolkata (d) Chennai"<<endl;
		cin>>option;
		if(option=='a' || option=='A')
		score=score+1;
		else
		score=score+0;
		cout<<"Q2. Who is the Prime Minister of India ?"<<endl;
		cout<<"(a) Amit Shah (b) Narendra Modi (c) Rahul Dravid (d) Akshay Kumar"<<endl;
		cin>>option;
		if(option=='b' || option=='B')
		score=score+1;
		else
		score=score+0;
		cout<<"Q3. What is the national bird of India ?"<<endl;
		cout<<"(a) Sparrow (b) Pegion (c) Peacock (d) Crow"<<endl;
		cin>>option;
		if(option=='c' || option=='C')
		score=score+1;
		else
		score=score+0;
		cout<<"Q4. What is the national Animal of India ?"<<endl;
		cout<<"(a) Lion (b) Tiger (c) Elephant (d) Zebra"<<endl;
		cin>>option;
		if(option=='b' || option=='B')
		score=score+1;
		else
		score=score+0;
		cout<<"Q5. What is the national flower of India ?"<<endl;
		cout<<"(a) Lotus (b) Marie Gold (c) Rose (d) Hibiscus"<<endl;
		cin>>option;
		if(option=='a' || option=='A')
		score=score+1;
		else
		score=score+0;
	}
	else
	{
		cout<<"You have entered wrong character ,please enter s"<<ends;
		//return -1;
		playQuiz();
	}
	return score;
}
int main()
{
	int finalresult=playQuiz();
	char playagain;
	if(finalresult>=3){
		cout<<"Your total score is "<<finalresult<<ends;
		cout<<"You are pass "<<endl;	
	}
	else 
	{
		cout<<"Your total score is "<<finalresult<<ends;
		cout<<"You are fail"<<endl;
	}
	cout<<"Do you want to play again ? Y or N"<<endl;
	cin>>playagain;
	if(playagain=='y' || playagain=='Y')
	playQuiz();
	else
	cout<<"Thank you for playing the quiz";
	return 0;
}


