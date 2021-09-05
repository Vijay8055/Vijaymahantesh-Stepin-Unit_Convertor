#include "Weight_Con.h"

int GrainToMilligram(float *gr, float *mg)
{
  *mg = (*gr) * 64.7989;
  return(*mg);
}

int MilligramToGrain(float *mg, float *gr)
{
  *gr = (*mg) * 0.01543;
  return(*gr);
}

int OunceToGram(float *oz, float *gm)
{
  *gm = (*oz) * 28.3495;
  return(*gm);
}
int GramToOunce(float *gm, float *oz)
{
  *oz = (*gm) * 0.0353;
  return(*oz);
}

int PoundToKilogram(float *lb, float *kg)
{
  *kg = (*lb) * 0.453592;
  return(*kg);
}
int KilogramToPound(float *kg, float *lb)
{
  *lb = (*kg) * 2.2046;
  return(*lb);
}

int StoneToKilogram(float *st, float *kg)
{
  *kg = (*st) * 6.35029;
  return(*kg);
}

int KilogramToStone(float *kg, float *st)
{
  *st = (*kg) * 0.1575;
  return(*st);
}

int GramToKilogram(float *gm, float *kg)
{
  *kg = (*gm) * 0.001;
  return(*kg);
}

int KilogramToGram(float *kg, float *gm)
{
  *gm = (*kg) * 1000;
  return(*gm);
}

int HundredWeightToKilogram_US(float *cwt, float *kg)
{
  *kg = (*cwt) * 45.35924;
  return(*kg);
}

int KilogramToHundredWeight_US(float *kg, float *cwt)
{
  *cwt = (*kg) * 0.02205;
  return(*cwt);
}

int HundredWeightToKilogram_UK(float *cwt, float *kg)
{
  *kg = (*cwt) * 50.80235;
  return(*kg);
}

int KilogramToHundredWeight_UK(float *kg, float *cwt)
{
  *cwt = (*kg) * 0.01968;
  return(*cwt);
}



           //Weight conversion
void Weight_Conversion(void)
{
  int choice;
  float kg, oz, gm, lb, st, gr, mg, cwt;
  char ch;

  do
  {
    system("clear");
    printf("\n\t\t        Weight Converter        \n");
    printf("\n\t\t 0.Exit");

    printf("\n\t\t 1.Grain To Milligram ");
    printf("\n\t\t 2.Milligram To Gram  ");
    printf("\n\t\t 3.Ounce To Gram  ");
    printf("\n\t\t 4.Gram To Ounce  ");
    printf("\n\t\t 5.Pound To Kilogram ");
    printf("\n\t\t 6.Kilogram To Pound ");
    printf("\n\t\t 7.Stone To Kilogram ");
    printf("\n\t\t 8.Kilogram To Stone ");
    printf("\n\t\t 9.Gram To Kilogram  ");
    printf("\n\t\t 10.Kilogram To Gram ");


    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 0:
        printf("\n\n\tExit from Weight Converter....\n\n");
        return;
        break;

      case 1:
        printf("\n\t......Grain To Milligram Converter......\n");
        printf("\n\tEnter the value Grain : ");
        scanf("%f",&gr);
        GrainToMilligram(&gr, &mg);
        printf("\n\tWeight in Milligram : %f \n", mg);
        break;

      case 2:
        printf("\n\t......Milligram To Grain Converter......\n");
        printf("\n\tEnter the value Milligram : ");
        scanf("%f",&mg);
        MilligramToGrain(&mg, &gr);
        printf("\n\tWeight in Grain : %f \n", gr);
        break;

      case 3:
        printf("\n\t......Ounce To Gram Converter......\n");
        printf("\n\tEnter the value Ounce : ");
        scanf("%f",&oz);
        OunceToGram(&oz, &gm);
        printf("\n\tWeight in Gram : %f \n", gm);
        break;

      case 4:
        printf("\n\t......Gram To Ounce Converter......\n");
        printf("\n\tEnter the value Gram : ");
        scanf("%f",&gm);
        GramToOunce(&gm, &oz);
        printf("\n\tWeight in Ounce : %f \n", oz);
        break;

      case 5:
        printf("\n\t......Pound To Kilogram Converter......\n");
        printf("\n\tEnter the value Pound : ");
        scanf("%f",&lb);
        PoundToKilogram(&lb, &kg);
        printf("\n\tWeight in Kilogram : %f \n", kg);
        break;

      case 6:
        printf("\n\t......Kilogram To Pound Converter......\n");
        printf("\n\tEnter the value Kilogram : ");
        scanf("%f",&kg);
        KilogramToPound(&kg, &lb);
        printf("\n\tWeight in Pound : %f \n", lb);
        break;

      case 7:
        printf("\n\t......Stone To Kilogram Converter......\n");
        printf("\n\tEnter the value Stone : ");
        scanf("%f",&st);
        StoneToKilogram(&st, &kg);
        printf("\n\tWeight in Kilogram : %f \n", kg);
        break;

      case 8:
        printf("\n\t......Kilogram To Stone Converter......\n");
        printf("\n\tEnter the value Kilogram : ");
        scanf("%f",&kg);
        KilogramToStone(&kg, &st);
        printf("\n\tWeight in Stone : %f \n", st);
        break;

      case 9:
        printf("\n\t......Gram To Kilogram Converter......\n");
        printf("\n\tEnter the value Gram : ");
        scanf("%f",&gm);
        GramToKilogram(&gm, &kg);
        printf("\n\tWeight in Kilogram : %f \n", kg);
        break;

      case 10:
        printf("\n\t......Kilogram To Gram Converter......\n");
        printf("\n\tEnter the value Kilogram : ");
        scanf("%f",&kg);
        KilogramToGram(&kg, &gm);
        printf("\n\tWeight in Gram : %f \n", gm);
        break;



      default:
        printf("\n\t\tYou choose wrong option......\n\tPlease read the Menu carefully before enter your choice...\n");
        break;
    }
    getchar();
    printf("\n\n\tDo you want to continue Weight Converter??\n\tIf Yes,press 'y', else 'n'.\n");
    ch = getchar();
  }while(ch != 'n');

  return;
}
