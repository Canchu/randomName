#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MEMBERS_NUMBER 17

char *randomSelect();

char *members[MEMBERS_NUMBER] = 
{
	"Ookubo",
	"Chinen",
	"Endo",
	"Saito",
	"Umeda",
	"Minagawa",
	"Hirai",
	"Okano",
	"Tsutsui",
	"Yoshida",
	"Setsu",
	"Masaki",
	"Yabe",
	"Umezu",
	"Tochihara",
	"Kadri",
	"Imai"
 };


int main(){
	int i;

	for(i=0; i<MEMBERS_NUMBER; i++){
		printf("%s\n",randomSelect());
	}
}

char *randomSelect(){

	char *selectedMember;
	int randomNumber;

	selectedMember = "selected";

	while(strcmp(selectedMember,"selected")==0){
		srand((unsigned)time(NULL));
		randomNumber = (int)(rand() % MEMBERS_NUMBER);
		selectedMember = members[randomNumber];
		members[randomNumber] = "selected";
	}

	return selectedMember;
}