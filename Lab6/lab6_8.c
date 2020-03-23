#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m , i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];
	// printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	// printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
		for (int j = 1; j < m; j++){
			if (*killerPtr == 0){
				killerPtr = &prisoners[0];
			}
			killerPtr++;
			if (*killerPtr == 0 && *(killerPtr + 1) == 0){
				killerPtr = &prisoners[0];
			}
    	}
		killed[i] = *killerPtr;
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);
	}
	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
}
void removeKilled(int *array, int size, int killedPrisoner)
{
	int i = 0;
    int *sec, *first;
    first = &array[0];
    sec = &array[1];
    for (i = 0; i <= size; i++ && array++){
        if (*array == killedPrisoner){
            *array = 0;
        }
    }
    for (i = 0; i < size; i++ && first++ && sec++){
        if (*first == 0){
            *first = *sec;
            *sec = 0;
        }
    }
}