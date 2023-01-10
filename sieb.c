#include <stdio.h>

  void befuelle_array(int array[]){
    int size = sizeof(array) / sizeof(array[0]);
    for(int i; i <= size; i++){
    array[i] = 1+i;
    }
  } 

  void gib_primzahlen(int array[]){
    int size = sizeof(array) / sizeof(array[0]);
    for(int i; i < size;i++){
      if(array[i]%i+2 == 0){
        array[i] = 0;
      }
    }
    for(int z; z < size; z++){
      if(array[z] =! 0){
      printf(" %i ", array[z]);
      }
    }
  }

  int main(){
    int zahlen[300];
    befuelle_array(zahlen);
    gib_primzahlen(zahlen);
  }
