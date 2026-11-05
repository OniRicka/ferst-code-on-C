#include <stdio.h>
#include <string.h>
int main(){
	double num1, num2, res;
	char op;
	printf("Enter one number: ");
	scanf("%lf", &num1);
	printf("Enter operation: ");
	scanf(" %c", &op);
	printf("Enter two number: ");
	scanf("%lf", &num2);

	if(op == '+'){
		res = num1 + num2;
		printf("Resultat: %lf\n", res);
	}
	else if(op == '-'){
		res = num1 - num2;
		printf("Resultat: %lf\n", res);
	}
	else if(op == '*'){
		res = num1 * num2;
		printf("Resultat: %lf\n", res);
	}
	else if(op == '/'){
		res = num1 / num2;
		if(num2 == 0){
			printf("Not correct operation\n");
		}
		printf("Resultat: %lf\n", res);
	}
	else{
		printf("Not correct\n");
	}
	return 0;
}
