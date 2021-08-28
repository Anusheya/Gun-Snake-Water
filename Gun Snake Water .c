#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
int usrScore=0, compScore=0;
void checkOptions(int usr, int comp){
	if(usr == comp)
	{
		printf("___________________\n");
		printf("|     Its a tie    |\n");
		printf("___________________\n");		
	}
	else if(usr == 1){
		if(comp == 2){
			printf("_________________\n");
			printf("|    You Won:)    |\n");
			printf("|   You: Gun      |\n");
			printf("|  Computer: Snake |\n");
			printf("_________________\n");
			usrScore++;
		}
		else{
			printf("_________________\n");
			printf("|    You Lose:(    |\n");
			printf("|   You: Gun      |\n");
			printf("|  Computer: Water |\n");
			printf("_________________\n");
			compScore++;
		}
	}
	else if(usr == 2){
		if(comp == 1){
			printf("_________________\n");
			printf("|    You Lose:(    |\n");
			printf("|   You: Snake      |\n");
			printf("|  Computer: Gun   |\n");
			printf("_________________\n");
			compScore++;			
		}
		else{
			printf("_________________\n");
			printf("|    You Won:)    |\n");
			printf("|   You: Snake     |\n");
			printf("|  Computer: Water |\n");
			printf("_________________\n");
			usrScore++;
		}
	}
	else if(usr == 3){
		if(comp == 1){
			printf("_________________\n");
			printf("|    You Won:)    |\n");
			printf("|   You: Water    |\n");
			printf("|  Computer: Gun  |\n");
			printf("_________________\n");
			usrScore++;
		}
		else{
			printf("_________________\n");
			printf("|    You Lose:(    |\n");
			printf("|   You: Water      |\n");
			printf("|  Computer: Snake  |\n");
			printf("_________________\n");
			compScore++;	
		}
	}
	else if(usr == 4){
		printf("________________\n");
		if(usrScore > compScore)
		printf("|    You Won :)  |\n");
		else if(usrScore < compScore)
		printf("|    You Lose :(  |\n");
		else
		printf("|    Its a tie   |\n");
		printf("|    Final Score |\n");
		printf("|  You : %d      |\n",usrScore);
		printf("|  Computer: %d  |\n",compScore);
		printf("_______________\n");
		printf("\a");
	}
	else{
		Beep(750,500);
		printf("\n Invaild Option");
	}
}
int main(){
	int userChoice,compChoice;
	srand(time(0));
	printf("\t\t\t\t===========*Welcome to Snake, Water & Gun Game*=============");
	while(userChoice != 4){
		printf("\n please select the option:");
		printf("\n1.Gun");
		printf("\n2.Snake");
		printf("\n3.Water");
		printf("\n4.Quit\n");
		scanf("%d",&userChoice);
		compChoice = (rand()%3)+1;
		checkOptions(userChoice, compChoice);
	}
}
