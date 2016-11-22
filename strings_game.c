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

int main(void){
	//think about what pieces of information we need to represent as variables:
	char monsterName[] = "ULI101 Monster";
	//have enough space for the maximum hero name length + 1 for the terminating null
	const int heroNameArrayLength =  MAX_HERO_NAME_LENGTH + 1;
	char heroName[heroNameArrayLength] = "DEFAULT NAME";	

	enterHeroName(heroName, heroNameArrayLength);

	//debug statement to determine whether the name was entered correctly
	printf("DEBUG: user entered: %s number of characters in the name: %d\n", heroName, strlen(heroName) );

	return 0;
}

void enterHeroName(char name[], int maxLength){
	//eventually use the maxLength to limit the number of characters entered
	//for now, we will hard-code a literal format
	printf("What is your name, brave hero? ");
	scanf("%12[^\n]", name);
	
}
