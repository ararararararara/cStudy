#include "mainGame.h"
#include "player.h"
#include "enemy.h"

int main()
{
	
	player* pl = new player;			//<-- 동적할당 할땐 new 
	enemy* em = new enemy;

	pl->printPlayer();
	em->printEnemy();

	em->setEnemyHP(em->getEnemyHP() - pl->getPlayerAtk());

	em->printEnemy();

	delete pl;				//동적할당한 메모리 반환하려면 delete
	delete em;
	

	const char* star = "******";

	for (int i = 0; i < 5; i++) {
		cout << star + 4 -i << endl;
	}

	for (int i = 0; i < 5; i++) {
		cout << star + i << endl;
	}



	return 0;
}