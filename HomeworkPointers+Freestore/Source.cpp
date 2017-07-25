#include <iostream>
#include <time.h>

struct NPC{
	int strength = 0;
	int health = 0;
	int tiredness = 0;
	int positionX = 0;
	int positionY = 0;
	bool isNPCAlive = false;
};

NPC CreateNPC();
void PrintNPCDetails(NPC* npc);

int main(){
	srand(time(NULL));

	NPC npcArray[10];
	for (int i = 0; i < 10; i++) {
		npcArray[i] = CreateNPC();
	}
	for (int i = 0; i < 10; i++) {
		PrintNPCDetails(&npcArray[i]);
	}
	system("PAUSE");
	return 0;
}

NPC CreateNPC(){
	NPC* npc = new NPC();
	npc->strength = ((rand() % 17) + 3);
	npc->health = ((rand() % 150) + 50);
	npc->tiredness = ((rand() % 14) + 1);
	npc->positionX = (rand() % 100);
	npc->positionY = (rand() % 100);
	npc->isNPCAlive = true;
	
	return *npc;
}

void PrintNPCDetails(NPC* npc){
	std::cout << "NPC's Current State: " << std::endl;
	std::cout << "  - Position:  (" << npc->positionX << ", " << npc->positionY << ")" << std::endl;
	std::cout << "  - Health:  " << npc->health << std::endl;
	std::cout << "  - Strength:  " << npc->strength << std::endl;
	std::cout << "  - Tiredness: " << npc->tiredness << std::endl;
	std::cout << "  - Alive:  " << npc->isNPCAlive << std::endl;
}