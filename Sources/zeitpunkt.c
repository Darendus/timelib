#include <stdio.h>

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
