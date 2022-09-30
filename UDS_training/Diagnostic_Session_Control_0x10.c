#include<stdio.h>
#include"main.h"
void service_id_0x10(message d1)  //Diagnostic Session Control
{

     if (d1.length ==2)
     {
 if (d1.subfunction_id==1)
 {
     printf("positive response");
     printf("data=#06#50#01#22#24#50#56");
 }
 else if (d1.subfunction_id==2){
        printf("positive response");
    printf("data=#06#50#02#35#42#49#56");
 }
    else if (d1.subfunction_id==3)
        {
        printf("positive response");
        printf("data=#06#50#03#08#16#21#56");
    }
    else{
        printf("negative response");
     printf("data=#03#7F#10#12");
    }}
    else{
        printf("negative response");
     printf("data=#03#7F#10#13");
    }

 }
