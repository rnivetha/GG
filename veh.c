#include<stdio.h>
int hanoi(int dis,char from,char cache,char to)
{
if(dis==1)
{
printf("The %d disk moved from %c-->%c",dis,from,to);
return 0;
}
hanoi(dis-1,from,to,cache);
printf("\nthe %d disk moved from %c-->%c",dis,from,to);
hanoi(dis-1,cache,from,to);
}
int main()
{
int n;
char from='X',cache='Y',to='Z';
printf("enter nio of disk:");
scanf("%d",&n);
hanoi(n,from,cache,to);
return 0;
}
