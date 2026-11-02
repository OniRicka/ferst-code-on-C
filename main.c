#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main(){
	char name[20];
	char password[256];
	while (1){
		printf("Enter login: ");
		scanf("%19s", name);
		if(strcmp(name, "oniricka") == 0){
			break;
		}
		else{
			printf("Not correct\n");
		}
	}
	while (1){
		printf("Enter password: ");
		scanf("%255s", password);
		if(strcmp(password, "root") == 0){
			break;
		}
		else {
			printf("Not correct\n");
		}
	}
return 0;
}
