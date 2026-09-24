#include <stdio.h>

int main () {
int a;
float b;
double c;
char ch; 
char name[50];

printf("Enter an integer:");
scanf("%d",&a);

printf("Enter an float value:");
scanf("%f",&b);

printf("Enter a double value:");
scanf("%lf",&c);

printf("Enter an single character:");
scanf("%c",&ch);

printf("Enter a string (name):");
scanf("%s",name);

printf("\n---Output---\n");
printf("Integer enter  :%d\n",a);
printf("float entered  :%.2f\n",b);
printf("double entered :%.2lf\n",c);
printf("Character entered :%c\n",ch);
printf("String entered  :%s\n",name);

return 0;

}