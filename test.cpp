#include <iostream>

void sort(int array[], int size);

int main(){

    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }    

    return 0;
}

void sort(int array[], int size){

    int temp;

    for(int i = 0; i < size - 1; i++){ // size = 9, i = 1
        for(int j = 0; j < size - i - 1; j++){ //size = 8, j = 1
            if(array[j] > array[j + 1]){
                temp = array[j];          // 10
                array[j] = array[j + 1];  // 5
                array[j + 1] = temp;      // 10
            }
        }
    }

}//      1 9  2  8 3 7  4 6  5 10

// index 0 1  2  3 4 5  6 7  8 9