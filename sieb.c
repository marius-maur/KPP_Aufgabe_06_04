#include <stdio.h>

  void befuelle_array(int array[n]){
    int size = sizeof(array[n]) / sizeof(array[0]);
    for(int i; i <= size; i++){
      array[i] = 1+i;
    }
  } 

  void gib_primzahlen(int array[]){
    int size = sizeof(array) / sizeof(array[0]);
    for(int i; i < size/2;i++){
        for(int y; y < size; y++){
          if(array[y] % i+2 == 0){
        }
          else{
          printf(" %d ", array[y]);
          }
       }
    }
  }

  int main(){
    int zahlen[300];
    befuelle_array(zahlen[300]);
    for(int i; i < 300; i++){
    printf(" %i ", zahlen[i]);
    }
  }
