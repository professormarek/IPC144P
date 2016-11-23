/* 
this program is a game that simulates a battle between a hero and a monster 
in this game the monster name is hard-coded as a literal string 
the user (player) will enter the name for the hero
both the hero and monster will have Health Points (HP)
the battle will continue until either the hero or monster has HP <= 0
to simulate the battle between hero and monster:
the characters take turns hitting each other
each character has a certain amount of damage they do to the other
damage is subtracted from the appropriate character's HP
the winner will be the character with HP > 0

cheat: by entering a secret character name, the hero will get a lot stronger!
*/

#include <stdio.h>
#include <string.h>

#define MAX_HERO_NAME_LENGTH 12

//function prototypes (headers)
void enterHeroName(char name[], int maxLength);
void displayWelcomeScreen(char monsterName[]);

int main(void){
	//think about what pieces of information we need to represent as variables:
	char monsterName[] = "ULI101 Monster";
	//have enough space for the maximum hero name length + 1 for the terminating null
	const int heroNameArrayLength =  MAX_HERO_NAME_LENGTH + 1;
	char heroName[heroNameArrayLength] = "DEFAULT NAME";	

	//variables to store the hero's HP and the monster's HP
	int heroHP = 15;
	int monsterHP = 20;

	//variables to store the amount of damage the hero and monster do each hit
	int heroDamage = 7;
	int monsterDamage = 5;

	//display a welcome screen before asking for the hero name
	displayWelcomeScreen(monsterName);

	enterHeroName(heroName, heroNameArrayLength);

	//debug statement to determine whether the name was entered correctly
	printf("DEBUG: user entered: %s number of characters in the name: %d\n", heroName, strlen(heroName) );

	//a loop to run the battle until one character runs out of HP
	while (heroHP > 0 && monsterHP > 0) {
		//the hero hits the monster
		monsterHP = monsterHP - heroDamage;
		printf("%s hit the %s for %d damage!!!\n",heroName, monsterName, heroDamage);
		printf("The %s's remaining HP is: %d\n",monsterName, monsterHP);
		//if the monster still alive the monster hits the hero
		if(monsterHP > 0){
			heroHP = heroHP - monsterDamage;
			printf("The %s hit %s for %d damage!!!!\n", monsterName, heroName, monsterDamage);
			printf("%s's remaining HP is: %d\n", heroName, heroHP);
		}
	}


	return 0;
}

void displayWelcomeScreen(char monsterName[]){
	printf("Welcome. It's 8 AM on Thursday. It's time to do battle with %s\n", monsterName);

}


void enterHeroName(char name[], int maxLength){
	//eventually use the maxLength to limit the number of characters entered
	//for now, we will hard-code a literal format
	printf("What is your name, brave hero? ");
	scanf("%12[^\n]", name);
	
}
