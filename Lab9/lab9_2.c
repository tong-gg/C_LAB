#include <stdio.h>
typedef enum DayOfWeek {Sun = 6, Mon = 0, Tue = 1, Wed = 2, Thu = 3, Fri = 4, Sat = 5} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month) {
    int allMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0, result;
    for (int i = 0; i < month - 1; i++){
        sum += allMonth[i];
    }
    result = (sum + day) % 7;
    switch(result){
        case 1 : return Tue; break;
        case 2 : return Wed; break;
        case 3 : return Thu; break;
        case 4 : return Fri; break;
        case 5 : return Sat; break;
        case 6 : return Sun; break;
        case 0 : return Mon; break;
    }
}

int main()
{
	int day, month;
	DayOfWeek dow;

	printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
	printf("Enter Day and Month: ");
	scanf("%d %d", &day, &month);
	dow = findDayOfWeek(day, month);
	printf("Day:%d Month:%d of Year 2013 is ", day, month);
	switch(dow){
		case 6 : printf("Sunday.\n"); break;
		case 0 : printf("Monday.\n"); break;
		case 1 : printf("Tuesday.\n"); break;
		case 2 : printf("Wednesday.\n"); break;
		case 3 : printf("Thursday.\n"); break;
		case 4 : printf("Friday.\n"); break;
		case 5 : printf("Saturday.\n"); break;
	}
}