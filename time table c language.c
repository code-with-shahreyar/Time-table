#include<stdio.h>
#include<unistd.h>
int main()
{
for(int h=0;h<12;h++)
{
for(int m=0;m<60;m++)
{
for(int s=0;s<60;s++)
{
printf("\r %d:%d:%d",h,m,s);
fflush(stdout);
sleep(1);
}
}
}
return 0;
}