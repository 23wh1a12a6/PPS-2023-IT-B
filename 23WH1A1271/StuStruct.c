//To read and print structs in diff ways
#include<stdio.h>
#include<string.h>
struct student
{ 
char gen;
long int PhNo;
char name[20];
int marks;
}s1;
void main ()
{ 
s1.gen='F';
s1.PhNo=987654321;
strcpy(s1.name,"Ram");
s1.marks=77;
struct student s2={'F',78787878,"Sita",87};
struct student s3;
// print the details
printf("\n Enter details of S1\n");
printf("%c %ld %s %d", s1.gen, s1.PhNo, s1.name, s1.marks);
// print second student details
printf("\n Enter details of S2 \n");
printf("%c %ld %s %d", s2.gen, s2.PhNo, s2.name, s2.marks);
// print third student details
printf("\n Enter details of student s3\n");
scanf("%c%ld%s%d",&s3.gen,&s3.PhNo,s3.name,&s3.marks);
printf("\n Enter details of S3\n");
printf("%c %ld %s %d", s3.gen, s3.PhNo, s3.name, s3.marks);
}