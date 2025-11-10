#include<stdio.h>
int main(){
int a;
float add;
float sub;
float multi;
float div;
float b;
float c;

printf("Which type of Calculation you wants:");
scanf("%d",&a);

if(a==1){
    printf("Addition\n");

    printf("Enter the First Number:");
    scanf("%f",&b);
    printf("Enter the Second Number:");
    scanf("%f",&c);

    printf("%f",add=b+c);




}   else if(a==2){
    printf("Subtraction\n");

    printf("Enter the First Number:");
    scanf("%f",&b);
    printf("Enter the Second Number:");
    scanf("%f",&c);

    printf("%f",sub=b-c);



}
else if(a==3){
    printf("Multiplication\n");

    printf("Enter the First Number:");
    scanf("%f",&b);
    printf("Enter the Second Number:");
    scanf("%f",&c);

    printf("%f",multi=b*c);



}
if(a==4){
    printf("Division\n");

    printf("Enter the First Number:");
    scanf("%f",&b);
    printf("Enter the Second Number:");
    scanf("%f",&c);

    printf("%f",div=b/c);



}
else{
    printf("Invalid Number");
}





}
