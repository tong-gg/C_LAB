#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int prisoners;
    cin >> prisoners;
    int allPrisoners[prisoners], max;
    for (int i = 0; i < prisoners; i++){
        cin >> allPrisoners[i];
    }
    max = allPrisoners[0];
    for (int i = 0; i < prisoners; i++){
        if (allPrisoners[i] > max){
            max = allPrisoners[i];
        }
    }
    /* for (int i = 0; i < prisoners; i++){
        cout << allPrisoners[i] << " ";
    } 15 doesn't exist*/

    int allPrisonersSorted[max];
    for (int i = 0; i < max; i++){
        allPrisonersSorted[i] = -1;
    }
    for (int i = 0; i < max; i++){
        if (i < prisoners){ //solved !! 15 is still on the old memory.
            allPrisonersSorted[allPrisoners[i] - 1] = allPrisoners[i];
        }
    }

    // check if the sorted nums are all correct

    /* for (int i = 0; i < max; i++){
        cout << allPrisonersSorted[i] << " ";
    } */
    for (int i = 0; i < max; i++){
        if (allPrisonersSorted[i] == -1 && i % 2 == 0){
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < max; i++){
        if (allPrisonersSorted[i] == -1 && i % 2 != 0){
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}