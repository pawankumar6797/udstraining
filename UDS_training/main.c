#include<stdio.h>
#include<string.h>
#include"main.h"
#include"main_branch.h"
#include"Functionfile_pawan.h"

  char RawData[10];
  //#2#0x10#0x01#0000
  message d1;
  int main()
  {
      printf("enter the length");
      fflush(stdout);
      scanf("%d",&d1.length);
     // printf("enter the function id");
      fflush(stdout);
     // scanf("%d",&d1.function_id);
      printf("enter the service id");
      fflush(stdout);
      scanf("%d",&d1.service_id);
      printf("enter the sub function id");
      fflush(stdout);
    scanf("%d",&d1.subfunction_id);
     service_id_functions();
 /* printf("please write the formate in the correct formate as given below\n\n");
  printf("Data_length#Service_ID#Sub_function#actual+data\n\n");
  scanf("%s",RawData);*/
  return 0;
}

