#include"main.h"
#include<stdio.h>
void service_id_0x27(message d1)  //Security Access
{
 if (d1.length==2)
 {
    if (d1.subfunction_id==1)
    {
      printf("positive response");
      printf("#04#67#01#14#16");
    }
    else{
        printf("negative response");
    printf("#03#7F#27#12");
      }

    }
else if (d1.length==4)
    {
     if (d1.subfunction_id==2)
      {
        printf("positive response");
      printf("#02#67#02");
      }
      else{
        printf("negative response");
    printf("#03#7F#27#12");
      }}
      else{
        printf("negative response");
    printf("#03#7F#27#13");
      }}
