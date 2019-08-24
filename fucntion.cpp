#include<iostream>
#include <time.h>

using namespace std;
void checknum(int,int);

int main(){
	srand(time(NULL));

	int num1; 
	int num2;
	int guess = 0; 
	cout<<"###Welcome to guessing number game###"<<endl;
    cout<<"Secret number has been chosen"<<endl;
	num1 =1+(rand()%10);

	do {
		cout<<"Guess the number (1 to 10) : ";
		cin>>num2;
		checknum(num1,num2);
		guess++;

	}while(num2!=num1);
	
	

	cout<<"The secret number is "<<num1<<endl;
	cout<<"You made "<<guess<<" guess"<<endl;

return (0);
}

void checknum(int num1,int num2) {

	if(num2>num1){
	cout<<"The secret number is lower"<<endl;
	}
	else if(num2<num1){
	cout<<"The secret number is higher"<<endl;
	}
	else if(num2==num1){
	cout<<" Congratulations "<<endl;
	}
	
}



