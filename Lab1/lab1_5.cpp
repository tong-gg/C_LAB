#include <stdio.h>
int main(){
	int amount = 50;
	int fifty_banknote, twenty_banknote, five_banknote, one_banknote;
	fifty_banknote = amount/50;
	amount = amount - (fifty_banknote*50);
	twenty_banknote = amount/20;
	amount = amount - (twenty_banknote*20);
	five_banknote = amount/5;
	amount = amount - (five_banknote*5);
	printf("1: %d\n", amount);
	printf("5: %d\n", five_banknote);
	printf("20: %d\n", twenty_banknote);
	printf("50: %d", fifty_banknote);
	return 0;	
}
