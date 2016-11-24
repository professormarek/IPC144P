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
as a class we decided to give the hero extra health as the cheat
feel free to do your own thing at home!

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_HERO_NAME_LENGTH 12

//function prototypes (headers)
void enterHeroName(char name[], int maxLength);
void displayWelcomeScreen(char monsterName[]);
void clrBuf(void);

int main(void){
	//call the srand() function and seed the random number genrator with the time
	//that way each time we run the program, the numbers popping out will be different
	srand(time(NULL));
	//think about what pieces of information we need to represent as variables:
	char monsterName[] = "ULI101 Monster";
	//have enough space for the maximum hero name length + 1 for the terminating null
	const int heroNameArrayLength =  MAX_HERO_NAME_LENGTH + 1;
	char heroName[heroNameArrayLength] = "DEFAULT NAME";	
	//stores the secret cheat code name
	char cheatCode[]= "Google";
	//variables to store the hero's HP and the monster's HP
	int heroHP = 15;
	int monsterHP = 24;

	//variables to store the amount of damage the hero and monster do each hit
	int heroDamage = 7;
	int monsterDamage = 4;

	int randomNumber = 0;
	int computedDamage = 0;
	//display a welcome screen before asking for the hero name
	displayWelcomeScreen(monsterName);

	enterHeroName(heroName, heroNameArrayLength);
	//check to see if the player has entered the secret code
	//if so, boost the player's health	
	if(strcmp(heroName,cheatCode) == 0){
		printf("CHEAT CODE ACTIVATED!!!\n");
		heroHP += 10;
	}

	//debug statement to determine whether the name was entered correctly
	//printf("DEBUG: user entered: %s number of characters in the name: %d\n", heroName, strlen(heroName) );
	printf("PREPARE TO DO BATTLE WITH THE EXAM\n\n");
	printf("Press enter to begin\n");
	clrBuf();
	//a loop to run the battle until one character runs out of HP
	while (heroHP > 0 && monsterHP > 0) {
		//the hero hits the monster
		randomNumber = rand () % 3;
		computedDamage = (heroDamage + randomNumber);
		monsterHP = monsterHP - computedDamage; 
		printf("%s hit the %s for %d damage!!!\n",heroName, monsterName, computedDamage);
		printf("The %s's remaining HP is: %d\n",monsterName, monsterHP);
		printf("Press enter to continue.\n");
		clrBuf();
		//if the monster still alive the monster hits the hero
		if(monsterHP > 0){
			randomNumber = rand() % 5;
			computedDamage = (monsterDamage + randomNumber);
			heroHP = heroHP - computedDamage;
			printf("The %s hit %s for %d damage!!!!\n", monsterName, heroName, computedDamage);
			printf("%s's remaining HP is: %d\n", heroName, heroHP);
			printf("Press enter to continue.\n");
			clrBuf();
		}
	}

	//announce a winner!
	if(heroHP > 0){
		//the hero won
		printf( "%s lives to see another day!!!\n\n", heroName );
		//TODO: insert treasure code
	} else {
		//the monster won
		printf("%s has slain %s. %s died with honor!!!\n\n", monsterName, heroName, heroName);
	}
	
	printf("\n\nGAME OVER\n");
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
	clrBuf();
	
}

void clrBuf(void){
	while(getchar() != '\n') /*do nothing */ ;

}
