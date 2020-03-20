#include <stdio.h>
#include <stdlib.h>
#define PI 22.0/7
int main(){
	float radius = 1.5;
	float volume;
	volume = ((4/3.0f)*PI*(radius*radius*radius));
	printf("The volume of this sphere is %.2f", volume);
	return 0;
}
