#include<stdio.h>
void main()
{
      int date;
int month,m;
int century,c,g,f,d;
int day;
printf("Enter the date");
scanf("%d",&date);
printf("Enter the month");
scanf("%d",&month);
printf("Enter century");
scanf("%d",&century);
if(month==1)
m=1;
else if(month==2)
m=4;
else if(month==3)
m=4;
else if(month==4)
m=0;
else if(month==5)
m=2;
else if(month==6)
m=5;
else if(month==7)
m=0;
else if(month==8)
m=3;
else if(month==9)
m=6;
else if(month==10)
m=1;
else if(m==11)
m=4;
else if(m==12)
m=6;
else
printf("you have entered a wrong value");
if((century>=1500)&&(century<=1599))
c=0;
else if((century>=1600)&&(century<=1699))
c=6;
else if((century>=1700)&&(century<=1799))
c=4;
else if((century>=1800)&&(century<=1899))
c=2;
else if((century>=1900)&&(century<=1999))
c=0;
else if((century>=2000)&&(century<=2099))
c=6;
else
printf("you have entered a wrong value");
g=century%100;
f=g/4;
d=date+m+c+g+f;
day=d%7;
if(day==1)
printf("Sunday");
else if(day==2)
printf("Monday");
else if(day==3)
printf("Tuesday");
else if(day==4)
printf("Wednesday");
else if(day==5)
printf("Thursday");
else if(day==6)
printf("Friday");
else if(day==0)
printf("Saturday");
else
printf("Wrong Quantity");
}
