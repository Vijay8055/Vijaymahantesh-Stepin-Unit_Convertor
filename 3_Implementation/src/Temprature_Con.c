/**
 * @file Length_Con.h
 * @author Vijaymahantesh
 * @brief Unit convertor
 * @version 0.1
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "Temprature_Con.h"

int CelciustoFahrenheit(float *celcius, float *fahrenheit)
{
  *fahrenheit = (*celcius * 1.8) + 32;
  return(*fahrenheit);
}

int CelciustoKelvin(float *celcius, float *kelvin)
{
  *kelvin = *celcius + 273.15;
  return(*kelvin);
}

int CelciustoRankine(float *celcius, float *rankine)
{
  *rankine = (*celcius + 273.15) * 1.8;
  return(*rankine);
}




//Fahrenheit
int FahrenheittoCelcius(float *fahrenheit, float *celcius)
{
  *celcius = ((*fahrenheit - 32) * 5) / 9;
  return(*celcius);
}

int FahrenheittoKelvin(float *fahrenheit, float *kelvin)
{
  *kelvin = ((*fahrenheit + 459.67) * 5) / 9;
  return(*kelvin);
}

int FahrenheittoRankine(float *fahrenheit, float *rankine)
{
  *rankine = *fahrenheit + 459.67;
  return(*rankine);
}


//Kelvin
int KelvintoCelcius(float *kelvin, float *celcius)
{
  *celcius = *kelvin - 273.15;
  return(*celcius);
}

int KelvintoFahrenheit(float *kelvin, float *fahrenheit)
{
  *fahrenheit = ((*kelvin * 1.8) - 459.67);
  return(*fahrenheit);
}

int KelvintoRankine(float *kelvin, float *rankine)
{
  *rankine = (*kelvin) * 1.8;
  return(*rankine);
}


//Rankine

int RankinetoCelcius(float *rankine, float *celcius)
{
  *celcius = ((*rankine - 491.67) * 5 ) / 9;
  return(*celcius);
}

int RankinetoFahrenheit(float *rankine, float *fahrenheit)
{
  *fahrenheit = *rankine - 459.67;
  return(*fahrenheit);
}

int RankinetoKelvin(float *rankine, float *kelvin)
{
  *kelvin = (*rankine * 5) / 9;
  return(*kelvin);
}

/////////////////////////////////

void Temperature_Conversion(void)
{
  int choice;
  char ch;
  float fahrenheit, celcius, kelvin, rankine;
  do
  {
    system("clear");
    printf("\n\t\t * Temperature Converter *  \n");

    printf("\n\t\t 0.Exit            ");

    printf("\n\t\t 1.Celcius to Fahrenheit   ");
    printf("\n\t\t 2.Celcius to Kelvin       ");
    printf("\n\t\t 3.Celcius to Rankine     ");

    printf("\n\t\t 4.Fahrenheit to Celcius   ");
    printf("\n\t\t 5.Fahrenheit to Kelvin    ");
    printf("\n\t\t 6.Fahrenheit to Rankine   ");

    printf("\n\t\t 7.Kelvin to Celcius       ");
    printf("\n\t\t 8.Kelvin to Fahrenheit    ");
    printf("\n\t\t 9.Kelvin to Rankine       ");

    printf("\n\t\t 10.Rankine to Celcius     ");
    printf("\n\t\t 11.Rankine to Fahrenheit   ");
    printf("\n\t\t 12.Rankine to Kelvin       ");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
	 case 0:
	   printf("\n\n\t\tExit from Temperature Converter...\n\n");
           return;
         break;

      //Celcius
      case 1:
         printf("\n\t......Celcius to Fahrenheit Converter......\n");
         printf("\n\tEnter the value of celcius: ");
         scanf("%f",&celcius);
         if (celcius < (-273.15)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Celcius is -273.15...\n"); }
         else {
           CelciustoFahrenheit(&celcius, &fahrenheit);
           printf("\n\tTemperature in Fahrenheit : %f \n", fahrenheit); }
         break;

      case 2:
         printf("\n\t......Celcius to Kelvin Converter......\n");
         printf("\n\tEnter the value of Celcius: ");
         scanf("%f",&celcius);
         if(celcius < (-273.15)) {
           printf("\n\tThis conversion is not possible, because Absolute Tempareture in Celcius is -273.15...\n"); }
         else {
           CelciustoKelvin(&celcius, &kelvin);
           printf("\n\tTemperature in Kelvin : %f \n",kelvin); }
         break;

      case 3:
         printf("\n\t......Celcius to Rankine Converter......\n");
         printf("\n\tEnter the value of Celcius: ");
         scanf("%f",&celcius);
         if(celcius < (-273.15)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Celcius is -273.15....\n"); }
         else {
           CelciustoRankine(&celcius, &rankine);
           printf("\n\tTemperature in Rankine : %f \n",rankine); }
         break;

      //Fahrenheit
      case 4:
         printf("\n\t......Fahrenheit to Celcius Converter......\n");
         printf("\n\tEnter the value of Fahrenheit: ");
         scanf("%f",&fahrenheit);
         if(fahrenheit < (-458)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Fahrenheit is -459.67....\n"); }
         else {
           FahrenheittoCelcius(&fahrenheit, &celcius);
           printf("\n\tTemperature in Celcius : %f \n",celcius); }
         break;

      case 5:
         printf("\n\t......Fahrenheit to Kelvin Converter......\n");
         printf("\n\tEnter the value of Fahrenheit: ");
         scanf("%f",&fahrenheit);
         if(fahrenheit < (-458)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Fahrenheit is -459.67....\n"); }
         else {
           FahrenheittoKelvin(&fahrenheit, &kelvin);
           printf("\n\tTemperature in Kelvin : %f \n",kelvin); }
         break;

      case 6:
         printf("\n\t......Fahrenheit to Rankine Converter......\n");
         printf("\n\tEnter the value of Fahrenheit: ");
         scanf("%f",&fahrenheit);
         if(fahrenheit < (-458)) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Fahrenheit is -459.67....\n"); }
         else {
           FahrenheittoRankine(&fahrenheit, &rankine);
           printf("\n\tTemperature in Rankine : %f \n",rankine); }
         break;

     //Kelvin
      case 7:
         printf("\n\t......Kelvin to Celcius Converter......\n");
         printf("\n\tEnter the value of Kelvin: ");
         scanf("%f",&kelvin);
         if(kelvin < 0) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Kelvin is zero....\n"); }
         else {
           KelvintoCelcius(&kelvin, &celcius);
           printf("\n\tTemperature in Celcius : %f \n",celcius); }
         break;

      case 8:
         printf("\n\t......Kelvin to Fahrenheit Converter......\n");
         printf("\n\tEnter the value of Kelvin: ");
         scanf("%f",&kelvin);
         if(kelvin < 0) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Kelvin is zero....\n"); }
         else {
           KelvintoFahrenheit(&kelvin, &fahrenheit);
           printf("\n\tTemperature in Fahrenheit : %f \n",fahrenheit); }
         break;

      case 9:
         printf("\n\t......Kelvin to Rankine Converter......\n");
         printf("\n\tEnter the value of Kelvin: ");
         scanf("%f",&kelvin);
         if(kelvin < 0) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Kelvin is zero....\n"); }
         else {
           KelvintoRankine(&kelvin, &rankine);
           printf("\n\tTemperature in Rankine : %f \n",rankine); }
         break;

      //Rankine
      case 10:
         printf("\n\t......Rankine to Celcius Converter......\n");
         printf("\n\tEnter the value of Rankine: ");
         scanf("%f",&rankine);
         if(rankine < 0) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Rankine is zero....\n"); }
         else {
           RankinetoCelcius(&rankine, &celcius);
           printf("\n\tTemperature in Celcius : %f \n",celcius); }
         break;

      case 11:
         printf("\n\t......Rankine to Fahrenheit Converter......\n");
         printf("\n\tEnter the value of Rankine: ");
         scanf("%f",&rankine);
         if(rankine < 0) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Rankine is zero...\n"); }
         else {
           RankinetoFahrenheit(&rankine, &fahrenheit);
           printf("\n\tTemperature in Fahrenheit : %f \n",fahrenheit); }
         break;

      case 12:
         printf("\n\tRankine to Kelvin Converter...\n");
         printf("\n\tEnter the value of Rankine: ");
         scanf("%f",&rankine);
         if(rankine < 0) {
           printf("\n\tThis conversion is not possible because Absolute Tempareture in Rankine is zero...\n"); }
         else {
           RankinetoKelvin(&rankine, &kelvin);
           printf("\n\tTemperature in Kelvin : %f \n",kelvin); }
         break;

      default:
         printf("\n\t\tYou choose wrong option...\n\tPlease read the Menu carefully before enter your choice...\n");
         break;
    }
    getchar();
    printf("\n\n\tDo you want to continue Temperature Converter???\n\tIf Yes,press 'y', else 'n'.\n");
   ch = getchar();
  }while(ch!='n');

  return;
}


