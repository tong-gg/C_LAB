#include <stdio.h>
int main(){
	int computer_time = 785;
	int minutes, hours, days;
	days = computer_time/1440;
	minutes = computer_time - ((computer_time/60)*60);
	hours = (computer_time - (1440 * days))/60;
	printf("It is %d days %d hours and %d minutes.", days, hours, minutes);
}
