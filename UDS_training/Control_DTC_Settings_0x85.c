#include"main.h"
#include<stdio.h>
void service_id_0x85(message d1) //Control DTC Settings
{
 if (d1.length==2)
 {
      if (d1.subfunction_id==1)
      {
         printf("DTC settings ON\n");
      printf("#02#C5#01");
      }
     else if (d1.subfunction_id==2)
      {
        printf("DTC settings OFF\n");
      printf("#02#C5#02");
      }
       else{
        printf("negative response");
    printf("#03#7F#85#12");
      }}
    else{
        printf("negative response");
    printf("#03#7F#85#13");
      }}
