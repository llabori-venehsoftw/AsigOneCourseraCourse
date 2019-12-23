/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <Development of 8 functions for statistical data analysis of a Array>
 *
 * <Add Extended Description Here>
 *
 * @author <Luis Labori>
 * @date <22 Th, December 2019, 13:30 Hr.>
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* Main function */
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int count;
  int count1;
  count = SIZE/5;
  count1 = SIZE/8;

  /* Statistics and Printing Functions Go Here */

  /* Sort Array Function */
  void sort_array(unsigned char datos[], int length) {

      unsigned char auxiliar;
      int i,j;
      int indice;

      i = length - 1;

      while (i > 0) {
            indice = 0;
            for (j=0; j < i; j++) {
                if (datos[j+1] > datos[j]) {
                    auxiliar = datos[j];
                    datos[j] = datos[j+1];
                    datos[j+1] = auxiliar;
                    indice = j;
                }
            }
            i = indice;
      }
  }

  /* Print Statistics Function */
  void print_statistics(const unsigned char datos[], int length) {

      unsigned char Maximun = 0;
      unsigned char Minimun = 0;
      int Median = 0;
      char Mean = 0;

      Maximun = find_maximum(datos, length);
      Minimun = find_minimum(datos, length);
      Median = find_median(datos, length);
      Mean = find_mean(datos, length);
      printf("\n The Maximun value of the Array is: %d", Maximun);
      printf("\n The Minimun value of the Array is: %d", Minimun);
      printf("\n The Median value of the Array is: %d", Median);
      printf("\n The Mean value of the Array is: %d", Mean);
  }

 /* Print Array Function */
  void print_array(const unsigned char datos[], int length) {

      int i;
      int j;

      printf("test[%d] = {\n", length);
      for (i=0; i<count1; i++) {
            for (j=0; j<count; j++) {
                    if ((i == 0) && (j == 0)) {
                        printf(" %d", datos[j+(8*i)]);
                    }
                    else {
                            printf(", %d", datos[j+(8*i)]);
                            if (j == (count-1)) {
                                    printf("\n");
                                    }
                        }
                    }
      }
      printf("} \n");
  }

  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);

  return;
}

/* Add other Implementation File Code Here */

/* Find Maximun Array Function */
unsigned char find_maximum(const unsigned char datos[], int length) {

      unsigned char Max;
      int i;

      Max = datos[0] ;
      for (i=0; i<length; ++i) {
          if ((datos[i]) > Max) {
                Max = datos[i];
          }
      }
      return Max;
}

/* Find Minimum Array Function */
unsigned char find_minimum(const unsigned char datos[], int length) {

      unsigned char Min;
      int i;

      Min = datos[0];
      for (i=0; i<length; ++i) {
          if (datos[i] < Min) {
                Min = datos[i];
          }
      }
      return Min;
}

/* Find Median Array Function */
int find_median(const unsigned char datos[], int length) {

      int suma;
      int total;
      int i;

      suma = 0;
      for (i=0; i<length; i++) {
          suma = suma + datos[i];
      }
      total = suma/length;
      return total;
}

/* Find Mean Array Function */
char find_mean(const unsigned char datos[], int length) {

    int center;
    char mean;

    center = length/2;
    mean = datos[center-1];

    return mean;
}
