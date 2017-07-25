#include <iostream>

struct Player{
	int positionX = 0;
	int positionY = 0;
	int health = 0;
	bool isPlayerAlive = false;
};

void SetupPlayer(Player& player);
void PrintPlayerDetails(const Player player);

int main(){
	Player player1;
	Player player2;

	PrintPlayerDetails(player1);
	PrintPlayerDetails(player2);

	SetupPlayer(player1);
	SetupPlayer(player2);

	PrintPlayerDetails(player1);
	PrintPlayerDetails(player2);

	system("PAUSE");
	return 0;
}

void SetupPlayer(Player& player){
	player.positionX = 0;
	player.positionY = 0;
	player.health = 100;
	player.isPlayerAlive = true;
}
void PrintPlayerDetails(const Player player){
	std::cout << "Player's Current State: " << std::endl;
	std::cout << "  - Position:  (" << player.positionX << ", " << player.positionY << ")" << std::endl;
	std::cout << "  - Health:  " << player.health << std::endl;
	if (player.isPlayerAlive){
		std::cout << "  - Alive:  Yes" << std::endl;
	}
	else{
		std::cout << "  - Alive: No " << std::endl;
	}
	
}