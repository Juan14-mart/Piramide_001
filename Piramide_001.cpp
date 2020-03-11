#include<stdio.h>
#include<stdlib.h>

int main(){
int estr;
printf("Introduce la cantidad de asteriscos: ");
scanf("%d", &estr);
for(int i=1; i<=estr; i++){
	for(int j=0; j<=estr-i; j++)
	printf(" ");
	for(int j=0; j<=i-1; j++)
	printf("* ");
	printf("\n");
}
}
