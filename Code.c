#include <stdio.h>

int main()
{
int basic;
float da, hra, gross;
printf("Enter basic salary");
scanf("%d", &basic);
da = 0.5*basic;
hra = 0.4*basic;
gross = da + hra + basic;
printf("The gross salary is %f", gross);
return 0;
}
//to calc gross salary

#include<stdio.h>
void main()
{
int marks, total;
float percentage, percent;
printf("Enter marks");
scanf("%d", &marks);
printf("Enter total marks");
scanf("%d", &total);
percent = (float) marks / total;
percentage = (float) percent*100;
printf("\n The percentage is %f", percentage);
if(percentage>=70 && percentage<=100){
printf("\n Distinction");
}else if(percentage>=60 && percentage<70){
printf("\n First class");
}else if(percentage>=40 && percentage<60){
printf("\n Second class");
}else{
printf("\n Fail");
}
}

//to check class of student


#include<stdio.h>
#include<math.h>
void main()
{
int rem, num, temp, n=0;
float result = 0.0;
printf("Enter a number");
scanf("%d", &num);
temp = num;
for(temp=num; temp!=0; ++n){
temp/=10;
}
for(temp=num; temp!=0; temp/=10){
rem = temp%10;
result+= pow(rem, n);
}
if((int)result==num){
printf("Armstrong number");
}else {
printf("Not an Armstrong number");
}
}


//Armstrong Number


#include<stdio.h>
#include<math.h>
void main()
{
int num, square, fact=1, i, choice;
float square_root;
printf("Enter a number");
scanf("%d", &num);
printf("Enter your choice");
scanf("%d", &choice);
switch(choice){
case 1:
square = num**num;
printf("The square of this number is %d", square);
break;
case 2:
square_root = (float) sqrt(num);
printf("The square_root of this number is %f", square_root);
break;
case 3:
for(i=1; i<=num; i++){
fact = fact*i;
}
printf("the factorial of this number is %d", fact);
break;
default:
printf("Error");
}
}


//Switch case practice


#include<stdio.h>
#include<math.h>
void main()
{
int row, i, j;
printf("enter number of rows");
scanf("%d", &row);
for(i=1; i<=row; i++){
for(j=i; j<=row; j++){
printf("%d", j);
}
printf("\n");
}
}


//reverse number pattern


#include<stdio.h>
#include<math.h>
void main()
{
int row, i, j;
printf("enter number of rows");
scanf("%d", &row);
for(i=1; i<=row; i++){
for(j=1; j<=i; j++){
printf("%d", j);
}
printf("\n");
}
}


//number pattern


#include <stdio.h>
int search(int a[100], int element, int n){
int i;
for(i=0; i<n; i++){
if(a[i] == element){
return 1;
}
}
return 0;
}
int main()
{
int n, i, a[100], element;

```
//the line below is for user to enter total number of elements
printf("Enter number of elements in array a");
scanf("%d", &n);

//the loop below is for taking the elements and storing in array
for(i=0; i<n; i++){
    scanf("%d", &a[i]);
}

//the line below is for user to enter what he/she wants to search
printf("\\n Enter element to be searched");
scanf("%d", &element);

if(search(a, element, n)) printf("found"); else printf("not found");
return 0;

```

}


//linear search in C



#include <stdio.h>
int main(){
int a=0, b=1, c, n=10, i;
printf("%d\n ", a);
printf("%d \n", b);
for(i=2; i<n; i++){
c = a+b;
printf("%d \n", c);
a=b;
b=c;
}
}


//fibonacci


//b)

#include<stdio.h>
int main(){
int i, j, row;
printf("Enter number of rows");
scanf("%d", &row);
char ch;
for(i=1; i<row; i++){
ch='A';
for(j=i; j<row; j++){
printf("%c", ch);
ch++;
}
printf("\n");
}
}

//a)

#include<stdio.h>
int main(){
int i, j, row;
printf("Enter number of rows");
scanf("%d", &row);
char ch;
for(i=1; i<row; i++){
ch='A';
for(j=1; j<=i; j++){
printf("%c", ch);
ch++;
}
printf("\n");
}
  
  
 //character pattern
  
  
  
  #include <stdio.h>

int main()
{
int m, n, c, d, first[10][10], second[10][10], sum[10][10];

printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d", &m, &n);
printf("Enter the elements of first matrix\n");

for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
scanf("%d", &first[c][d]);

printf("Enter the elements of second matrix\n");

for (c = 0; c < m; c++)
for (d = 0 ; d < n; d++)
scanf("%d", &second[c][d]);

printf("Sum of entered matrices:-\n");

for (c = 0; c < m; c++) {
for (d = 0 ; d < n; d++) {
sum[c][d] = first[c][d] - second[c][d];
printf("%d\t", sum[c][d]);
}
printf("\n");
}

return 0;
}
  
  
 //matrix additon
  
  
  include<stdio.h>
int main()
{
    int a[3][3],t[3][3],i,j;

    printf("enter the first matrix \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n enter matrix elements [%d] [%d] \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n the matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[j][i]=a[i][j];
        }
    }

    printf("\n transpose of a matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",t[i][j]);
        }
        printf("\n");
    }

    return 0;



   //transpose of matrix
