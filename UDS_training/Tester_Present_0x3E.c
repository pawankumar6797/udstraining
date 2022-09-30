#include"main.h"
#include<stdio.h>
void service_id_0x3E(message d1)  //Tester Present
{
    if (d1.length==2)
    {
  if (d1.subfunction_id==0){
    printf("Generates a request for TesterPresent ON");
    printf("#03#7E#00");
  }
  else{
        printf("negative response");
    printf("#03#7F#3E#12");
  }}
  else{
      printf("negative response");
    printf("#03#7F#3E#13");
  }
}
