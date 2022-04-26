/**
 *
 *
 *
 **/

#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 **/
int day_of_the_year(int day, int month, int year)
{
{
  int year, month, day;
  year,month,day=0;
  int day_of_the_year;
  day_of_the_year=0;

  if (month == 2)
  {
    // Februar: Schaltjahr unterscheiden
    if (schaltjahr(year))
      return 29;
    else
      return 28;
  }

do
 {
  printf("\nGeben Sie das Jahr ein:");
  scanf("%d", &year);
 }while(year<0);
do{
  printf("\nGeben Sie den Monat ein:");
  scanf("%d", &month);
  //printf("Guter Versuch, beim nächsten Mal vielleicht.");
  } while (month>12 || month<1);
 do
 {
  printf("\nGeben Sie den Tag ein:");
  scanf("%d", &day);
  //printf("Gib ein richtiges Datum ein.");
  }while(day>31 || day < 1); 

int ans = 0;
for (int i = 1; i < month; ++ i) {
            switch (i) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    ans += 31;
                    break;
                case 2:
                    if (schaltjahr(year)) {
                        ans += 29;
                    } else {
                        ans += 28;
                    }
                    break;
                default:
                    ans += 30;
            }
        }
        return ans + day;
    }
}
int main()
{
    printf("Tag des Jahres: %i\n", day_of_the_year(31, 12, 2018));
    return 0;
}

int schaltjahr(int year)
{
    if((year%4)==0){ 
        if ((year%100)==0){
            if ((year%400)==0){
                return 1;
                //Das Jahr ist durch 4,10,400 teilbar.
            }
            else
            {
                return 0;
            }
            //Das Jahr ist durch 4,100 aber nicht 400 teilbar
        }
        else{
            return 1;
        }
        //Jahr ist durch 4 aber nicht durch 100 teilbar
    }
    else {
        return 0;
    }
    //Jahr ist nicht durch 4 tielbar
}
