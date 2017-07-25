#include <iostream>
#include <math.h>
#include <time.h>

void RollTwoDice(int& die, int& die2);

int main(){
	int diceOne = 0;
	int diceTwo = 0;
	srand(time(NULL));


	std::cout << "First round: " << diceOne << " and " << diceTwo << std::endl;
	
	RollTwoDice(diceOne, diceTwo);
	std::cout << "Testing github" << std::endl;
	std::cout << "Second round: " << diceOne << " and " << diceTwo << std::endl;
	system("PAUSE");
	return 0;
}

void RollTwoDice(int& die, int& die2){
	die = ((rand() % 6) + 1);
	die2 = ((rand() % 6) + 1);
}