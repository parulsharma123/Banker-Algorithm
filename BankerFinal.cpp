#include<stdio.h>
#include<conio.h>
int main()
{
int k=0,output[10],d=0,t=0,ins[5],i,avail[5],allocated[10][5],need[10][5],MAX[10][5],pno,P[10],j,rz, count=0;

printf("\n Enter the number of resources : ");
scanf("%d", &rz);
printf("\n enter the Available of each resources\n");
for(i=0;i<rz;i++)
{  
printf("%c= ",(i+97));
scanf("%d",&avail[i]);
}
printf("\n Enter the number of processes : ");
scanf("%d", &pno);
printf("\n Enter the allocation matrix \n     ");

for(i=0;i<rz;i++)
printf(" %c",(i+97));
printf("\n");
for(i=0;i <pno;i++)
{           P[i]=i;
printf("P[%d]  ",P[i]);
for(j=0;j<rz;j++)
{
scanf("%d",&allocated[i][j]);

}
}

printf("\nEnter the MAX matrix \n     ");
printf("\n");
for(i=0;i <pno;i++)
{
printf("P[%d]  ",i);
 for(j=0;j<rz;j++)
 scanf("%d", &MAX[i][j]);
}

printf("\n");
A: d=-1;
for(i=0;i <pno;i++)
{ count=0; t=P[i];
 for(j=0;j<rz;j++)
 {
 need[t][j] = MAX[t][j]-allocated[t][j];
 if(need[t][j]<=avail[j])
 count++;
 }
if(count==rz)
{
output[k++]=P[i];
 for(j=0;j<rz;j++)
avail[j]+=allocated[t][j];
}
else
 P[++d]=P[i];
}

if(d!=-1)
{ pno=d+1;
goto A;
}

printf("System is in safe state\n");
printf("Safe sequence is \n");
printf("\t <");
for(i=0;i<k;i++)
printf(" P[%d] ",output[i]);
printf(">");
getch();
}
