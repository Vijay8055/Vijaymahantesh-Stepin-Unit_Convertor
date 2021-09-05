#include "Length_Con.h"


int InchToCentimeter(float *inch, float *cm)
{
  *cm = (*inch) * 2.54;
  return(*cm);
}

int CentimeterToInch(float *cm, float *inch)
{
  *inch = (*cm) * 0.394;
  return(*inch);
}

int FeetToMeter(float *ft, float *m)
{
  *m = (*ft) * 0.3048;
  return(*m);
}

int MeterToFeet(float *m, float *ft)
{
  *ft = (*m) * 3.281;
  return(*m);
}

int FeetToInch(float *ft, float *inch)
{
  *inch = (*ft) * 12;
  return(*inch);
}

int InchToFeet(float *inch, float *ft)
{
  *ft = (*inch) * 0.0833;
  return(*ft);
}

int MileToKilometer(float *mile, float *km)
{
  *km = (*mile) * 1.609344;
  return(*km);
}

int KilometerToMile(float *km, float *mile)
{
  *mile = (*km) * 0.6214;
  return(*mile);
}

int MileToNauticalmile(float *mile, float *nm)
{
  *nm = (*mile) * 0.868976;
  return(*nm);
}

int NauticalmileToMile(float *nm, float *mile)
{
  *mile = (*nm) * 1.1508;
  return(*mile);
}

int NauticalmileToKilometer(float *nm, float *km)
{
  *km = (*nm) * 1.852;
  return(*km);
}

int KilometerToNauticalmile(float *km, float *nm)
{
  *nm = (*km) * 0.5310;
  return(*nm);
}

//////////////////////////////////////////////////////////////////////////////////////

void Length_Conversion(void)
{
  int choice;
  float inch, cm, m, ft, mile, km, nm;
  char ch;

  do
  {
    system("clear");
    printf("\n\t\t      Length Converter      \n");

    printf("\n\t\t 0.Exit                 ");

    printf("\n\t\t 1.Inch To Centimeter        ");
    printf("\n\t\t 2.Centimeter To Inch         ");
    printf("\n\t\t 3.Feet To Meter              ");
    printf("\n\t\t 4.Meter To Feet             ");
    printf("\n\t\t 5.Feet To Inch               ");
    printf("\n\t\t 6.Inch To Feet              ");
    printf("\n\t\t 7.Mile To Kilometer          ");
    printf("\n\t\t 8.Kilometer To Mile          ");
    printf("\n\t\t 9.Mile To Nauticalmile      ");
    printf("\n\t\t 10.Nauticalmile To Mile       ");
    printf("\n\t\t 11.Nauticalmile To Kilometer  ");
    printf("\n\t\t 12.Kilometer To Nauticalmile  ");


    printf("\n\n\tEnter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 0:
	printf("\n\n\tExit from Length Converter....\n\n");
        return;
        break;

      case 1:
        printf("\n\t......Inch To Centimeter Converter......\n");
        printf("\n\tEnter the value Inch : ");
        scanf("%f",&inch);
        InchToCentimeter(&inch, &cm);
        printf("\n\tLength in Centimeter : %f \n", cm);
        break;

      case 2:
        printf("\n\t......Centimeter To Inch Converter......\n");
        printf("\n\tEnter the value Centimeter : ");
        scanf("%f",&cm);
        CentimeterToInch(&cm, &inch);
        printf("\n\tLength in Inch : %f \n", inch);
        break;

      case 3:
        printf("\n\t......Feet To Meter Converter......\n");
        printf("\n\tEnter the value Feet : ");
        scanf("%f",&ft);
        FeetToMeter(&ft, &m);
        printf("\n\tLength in Meter : %f \n", m);
        break;

      case 4:
        printf("\n\t......Meter To Feet Converter......\n");
        printf("\n\tEnter the value Meter : ");
        scanf("%f",&m);
        MeterToFeet(&m, &ft);
        printf("\n\tLength in Feet : %f \n", ft);
        break;

      case 5:
        printf("\n\t......Feet To Inch Converter......\n");
        printf("\n\tEnter the value Feet : ");
        scanf("%f",&ft);
        FeetToInch(&ft, &inch);
        printf("\n\tLength in Inch : %f \n", inch);
        break;

      case 6:
        printf("\n\t......Inch To Feet Converter......\n");
        printf("\n\tEnter the value Inch : ");
        scanf("%f",&inch);
        InchToFeet(&inch, &ft);
        printf("\n\tLength in Feet : %f \n", ft);
        break;

      case 7:
        printf("\n\t......Mile To Kilometer Converter......\n");
        printf("\n\tEnter the value Mile : ");
        scanf("%f",&mile);
        MileToKilometer(&mile, &km);
        printf("\n\tLength in Kilometer : %f \n", km);
        break;

      case 8:
        printf("\n\t......Kilometer To Mile Converter......\n");
        printf("\n\tEnter the value Kilometer : ");
        scanf("%f",&km);
        KilometerToMile(&km, &mile);
        printf("\n\tLength in Mile : %f \n", mile);
        break;

      case 9:
        printf("\n\t......Mile To Nauticalmile Converter......\n");
        printf("\n\tEnter the value mile : ");
        scanf("%f",&mile);
        MileToNauticalmile(&mile, &nm);
        printf("\n\tLength in Nauticalmile : %f \n", nm);
        break;

      case 10:
        printf("\n\t......Nauticalmile To Mile Converter......\n");
        printf("\n\tEnter the value Nauticalmile : ");
        scanf("%f",&nm);
        NauticalmileToMile(&nm, &mile);
        printf("\n\tLength in Mile : %f \n", mile);
        break;

      case 11:
        printf("\n\t......Nauticalmile To Kilometer Converter......\n");
        printf("\n\tEnter the value Nauticalmile : ");
        scanf("%f",&nm);
        NauticalmileToKilometer(&nm, &km);
        printf("\n\tLength in Kilometer : %f \n", km);
        break;

      case 12:
        printf("\n\t......Kilometer To Nauticalmile Converter......\n");
        printf("\n\tEnter the value kilometer : ");
        scanf("%f",&km);
        KilometerToNauticalmile(&km, &nm);
        printf("\n\tLength in Nauticalmile : %f \n", nm);
        break;

      default:
        printf("\n\t\tYou choose wrong option...\n\t\tPlease read the Menu carefully before enter your choice...\n");
        break;
    }
    getchar();
    printf("\n\n\t\tDo you want to continue Length Converter??\n\t\tIf Yes,press 'y', else 'n'.\n");
    ch = getchar();
  }while(ch != 'n');

  return;
}

