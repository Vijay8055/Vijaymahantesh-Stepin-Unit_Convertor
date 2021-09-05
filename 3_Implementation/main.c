/**
 * @file main.c
 * @author Vijaymahantesh 
 * @brief Unit Convertor
 * @version 0.1
 * @date 2021-09-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#include "stdio.h"
#include "stdlib.h"
#include "Temprature_Con.h"
#include "Length_Con.h"
#include "Weight_Con.h"

int main(void)
{
  int choice;
  char ch;

  do
  {
    system("clear");
    printf("\n\n\n\n\n\n\t\t Welcome to UNIT CONVERTER\n\n\n");
    printf("\n\t\t         M E N U    ");

    printf("\n\t\t 0.Exit");
    printf("\n\t\t 1.Temperature Converter");
    printf("\n\t\t 2.Weight Converter");
    printf("\n\t\t 3.Length Converter\n ");


    printf("\n\n\t\tEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 0:
        printf("\n\n\t\tYou choose Exit from UNIT CONVERTER...\n\n");
        break;

      case 1:
        Temperature_Conversion();
        break;

      case 2:
        Weight_Conversion();
        break;

     case 3:
        Length_Conversion();
        break;

      default:
        printf("\n\t\tSorry!!\n\n\t\tPlease read the Menu carefully before enter choice...\n");
        break;
    }
    getchar();
    printf("\n\n\n\n\n\n\n\t\tDo you want to continue UNIT CONVERTER ??\n\t\tIf Yes,press 'y', else 'n'.\n");
    ch = getchar();
  }while(ch != 'n');

  system ("clear");
  printf("\n\n\n\n\n\t\t\n\n\n\t\tThank you for using UNIT CONVERTER...\n\n\n\t\t\tGood Bye...\n\n\n\n\n");
  return(1);
}

