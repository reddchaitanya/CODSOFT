#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int guess;
	while(true){
		cout<<"Guess a number between 1 and 100."<<endl;
		cin>>guess;
		if(guess==number){
			cout<<"Wohoo!You guessed the number."<<endl;
			break;
		}else if(guess<number){
			cout<<"The number you guessed is 'Too Low',Try again."<<endl;
		}
		else{
			cout<<"The number you guessed is'Too High',Try again."<<endl;
		}
	}
	return 0;
}
