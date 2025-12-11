//p10

#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *fptr;
char name[50];
int roll;
float marks;
printf("\nEnter student name:");
scanf("%s",name);
printf("\nEnter student roll no:");
scanf("%d",&roll);
printf("\nEnter student marks:");
scanf("%f",&marks);
//writing data to file using fprintf()
fptr=fopen("student_data.txt","w"); //open in write mode
if(fptr==NULL)
{
printf("\nEnter in opening file");
exit(1);
}fprintf(fptr,"Name=%s \nRoll_No=%d \nMarks=%.2f",name,roll,marks);
printf("\nData written sucessfully!!!");
fclose(fptr); //close file
//reading data program from a file
fptr = fopen("student_data.txt","r");
if (fptr==NULL)
{
printf("Error opeaning file for reading !!!");
exit(1);
}
printf("\n Reading Data from our Text file \n");
char label1[20],label2[20],label3[20];
fscanf(fptr,"%s\n",label1);
fscanf(fptr,"%s\n",label2);
fscanf(fptr,"%s\n",label3);
printf("%s\n",label1);
printf("%s\n",label2);
printf("%s\n",label3);
fclose(fptr); //close file
}

//p8
#include<stdio.h>
void main()
{
int a[20],size,i;
int *ptr;
ptr=a;
printf("Enter Size of Array:");
scanf("%d",&size);
printf("\n Enter element of Array:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
//Increment pointer
ptr++;
printf("\n After using ptr++:");
printf("\n Now content of *ptr is=%d",*ptr);
//Decrement pointer
ptr--;
printf("\n After using ptr--:");
printf("\n Now content of *ptr is=%d",*ptr);
//Add interger pointer
ptr=ptr+3;
printf("\n After using ptr+3:");
printf("\n Now content of *ptr is=%d",*ptr);
//Substracte ineteger to pointer
ptr=ptr-2;
printf("\n After using ptr-2:");
printf("\n Now content of *ptr is=%d",*ptr);
//Pointers with Array
ptr=a;
for(i=0;i<size;i++)
{
printf("\n Using *(ptr+%d)=%d",i,*(ptr+i));
}
}


//p7
#include <stdio.h>
#include <string.h>
void main()
{
char str1[50], str2[50], str3[100];
printf("Enter first string = ");
scanf("%s", str1);
printf("\nEnter second string = ");
scanf("%s", str2);
//finnding length
printf("\nLength of string1 is = %d", strlen(str1));
printf("\nLength of string2 is = %d", strlen(str2));
// copy string1
strcpy(str3 , str1);
printf("\nCopied string is = %s", str3);
strcat(str3 , str2);
printf("\nConcatenated string is (str1 + str2)= %s", str3);
//comapre 1 and 2
int result = strcmp(str1,str2);
if(result==0)
printf("\nBoth strings are equal");
else if (result<0)
printf("\nString 1 is smaller than string2");
else
printf("\nString 1 is greater than string2");
}


//10
#include <stdio.h>
#include <stdlib.h>
void main()
{
FILE *fptr;
char name[50];
int roll;
float marks;
printf("\nEnter student name:");
scanf("%s",name);
printf("\nEnter student roll no:");
scanf("%d",&roll);
printf("\nEnter student marks:");
scanf("%f",&marks);
//writing data to file using fprintf()
fptr=fopen("student_data.txt","w"); //open in write mode
if(fptr==NULL)
{
printf("\nEnter in opening file");
exit(1);
}
fprintf(fptr,"Name=%s \nRoll_No=%d \nMarks=%.2f",name,roll,marks);
printf("\nData written sucessfully!!!");
fclose(fptr); //close file
//reading data program from a file
fptr = fopen("student_data.txt","r");
if (fptr==NULL)
{
printf("Error opeaning file for reading !!!");
exit(1);
}
printf("\n Reading Data from our Text file \n");
char label1[20],label2[20],label3[20];
fscanf(fptr,"%s\n",label1);
fscanf(fptr,"%s\n",label2);
fscanf(fptr,"%s\n",label3);
printf("%s\n",label1);
printf("%s\n",label2);
printf("%s\n",label3);
fclose(fptr); //close file
}



//p6
//1
#include <stdio.h>
void main()
{
char str[100];
int length=0,i;
printf("\nEnter the string:");
scanf("%s" ,str);
for(i=0;str[i]!='\0';i++)
{
length++;
}
printf("/n Length of string is %d",length);
}

//2
#include <stdio.h>
void main()
{
char source[100],dest[100];
int i=0;
printf("\nEnter the string to copy:");
scanf("%s",source);
while(source[i]!='\0')
{
dest[i]=source[i];
i++;
}
dest[i]='\0';
printf("\n Copied string is: %s",dest);
}


//3
#include <stdio.h>
void main()
{
 int i, flag = 0;
 char str1[100], str2[100];
 printf("Enter string 1 to compare:");
 scanf("%s", str1);
 printf("Enter string 2 to compare:");
 scanf("%s", str2);
 for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
 {
 if (str1[i] != str2[i])
 {
 flag = 1;
 break;
 }
 }
 if (flag == 1)
 {
 printf("The strings are not equal");
 }
else
 {
 printf("The strings are equal");
 }
}

//p4

