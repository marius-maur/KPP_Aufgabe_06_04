#include <stdio.h>

  void befuelle_array(int array[n]){
    int size = sizeof(array[n]) / sizeof(array[0]);
    for(int i; i <= size; i++){
    array[i] = 1+i;
    }
    
  void gib_primzahlen(int array[n]){
    int size = sizeof(array[n]) / sizeof(array[0]);
    
    for(int i; i<= size/2; i++){
      if(%array[i]/i+1 != 0){
      printf(" %i ", array[i]);
      }
    }

  int main(){
    int zahlen[300];
    befuelle_array(zahlen[300]);
    gib_primzahlen(zahlen[300]);
  }
