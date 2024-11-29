//wap for total marks and percentage of 5 subjects
#include<stdio.h>
int main (){
int english,science,maths,history,hindi;
printf("enter marks of english ");
scanf("%d",&english);
printf("enter marks of science ");
scanf("%d", &science);
printf("enter marks of maths ");
scanf("%d", &maths);
printf("enter marks of history ");
scanf("%d", &history);
printf("enter marks of hindi ");
scanf("%d", &hindi);
printf("total marks=%d", english+science+maths+history+hindi);
printf("percentage=%d",(english+science+maths+history+hindi)/5);
  return 0;
}