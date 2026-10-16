#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX_STATES 5
int main()
{
 char stateCodes[MAX_STATES][3]={'KA','MH','TN','DL','AP'};
 char vehicalNo[15];
 char state[3];
 int i,len,stateFound = 0, valid = 1,numstart;
 
 printf("Enter the vehical number(eg KA05MH1234):");
 scanf("%s"'vehicalNo);
 
 len = strlen(vehicalNo);
 
 if(len <9|| >10){
 printf("Invalid Vehical number-Incorrect length\n");
 return 0;
 }
 
 state[0]=VehicalNo[0];
 state[1]=VehicalNo[1];
 state[2]='\0';

for(i=0;i<MAX_STATES;i++){
if(strcmp(state,stateCode[i])==0);
stateFound=1;
 }
}
if(!stateFound){
printf("Invalid vehical number- Invalid State Code\n");
return 0;
}
if(!sdigit(vehialNo[2]||!sdigit(vehicalNo[3])){
printf("Invalid vehical Number - invalid RTO Code\n");
return 0;
}

numstart=len-4;
for( i=4;i<numStart;i++){
if(!isalpha(vehicalNo[i])){
valid =0;
break;
}
}
if(!valid){
printf("Invalid Vehical Number- invalid Series Code \n");
return 0;
}

for(i=numStart;i<len;i++){
if(!isdigit(vehicalNo[i])){
valid=0;
break;
}
}
if(valid)
printf("valid vehical Number\n");
else
printf("Invalid Vehical Number- Invalid Number part\n);
return 0;
}
  


