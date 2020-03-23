#include <stdio.h>


typedef struct {
    char id[13];
    int score;
} studentRecord;

void init(studentRecord list[], int size) {
	for (int i = 0; i < size; i++){
		sprintf(list[i].id, "%d%05d", 551,i + 1);
		list[i].score = 0;
	}
}

void enterScore(studentRecord list[], int size){
	char id[10];
	int score;
	scanf("%s %d",id, &score);
	for (int i = 0; i < size; i++){
		if (strstr(list[i].id, id) != NULL){
			list[i].score = score;
			break;
		}
	}
}
void printRecords(studentRecord list[], int size) {
	int i;

	printf("   ID        Score\n");
	for (i = 0; i < size; i++) {
		printf("%s       %d\n", list[i].id, list[i].score);
	}
}

int main() {
	int enter;
	studentRecord list[3];

	init(list, 3);
    enterScore(list, 3);
	printRecords(list, 3);

}