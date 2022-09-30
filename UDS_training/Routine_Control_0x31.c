#include"main.h"
#include<stdio.h>

void service_id_0x31(message d1)  //Routine Control
{
if (d1.length==4)
{
    if (d1.subfunction_id==1)
    {
  printf("start the routine\n");
      printf("#04#71#01#F1#90");
}
else if (d1.subfunction_id==2){
        printf("stop the routine\n");
    printf("data=#04#71#02#F1#90");
 }
 else if (d1.subfunction_id==3){
        printf("result\n");
    printf("data=#04#71#03#F1#90");
 }
else{
        printf("negative response\n");
     printf("data=#04#7F#31#12");
    }}
}
