#include<stdio.h>
#include<string.h>
#include"main.h"
#include"Functionfile_pawan.h"
message d1;

void rawdata2frame(char RawData[]){
d1.length=(RawData+0);
d1.function_id=(RawData+1);
d1.service_id=(RawData+4);
d1.subfunction_id=(RawData+6);
/*
d1.recieved_data[0] = RawData[6];
21 d1.recieved_data[1] = RawData[7];
22 d1.recieved_data[2] = RawData[8];
23 d1.recieved_data[3] = RawData[9];*/
}
void service_id_functions(void)
{
 switch(d1.service_id)
 {
case  10:
   service_id_0x10(d1);
    break;
case  62:   //3E-service id
   service_id_0x3E(d1);
    break;
case  27:
   service_id_0x27(d1);
    break;
case  31:
   service_id_0x31(d1);
    break;
case  85:
   service_id_0x85(d1);
    break;
    default:
        printf("\n\nEntered function ID is Invalid\n\n");
 }
}
/*void response(char resdata[])
{
    printf("The Response from the server is :");
    char finalData[10];

}*/
