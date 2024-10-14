#include<stdio.h>
int main(){
    int customerID;
    char customername;
    int unitconsumed;
    float totalbill;
    
 printf("enter the value of customerID:");
 scanf("%d",& customerID);
 printf("the value is %d\n",customerID);
 printf("enter the value of customername:");
 scanf("%c",&customername);
 printf("the value is %c\n",customername);
 printf("enter the value of unitconsumed:");
 scanf("%d",&unitconsumed);
 printf("the value is %d",unitconsumed);
 if(unitconsumed<=199){
     printf("the charges per unit is 1.20\n ");
     totalbill=unitconsumed*1.20;
     scanf("%f",totalbill);
	 }
 return 0;
}