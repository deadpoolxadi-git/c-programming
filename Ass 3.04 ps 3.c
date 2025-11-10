#include<stdio.h>
int main(){
int a;

printf("Enter the Value :");
scanf("%d",&a);

if(a==1){
    printf("January has 31 Days");

}
else if (a==2){

    printf("Febuary has 28 of 29 Days");

}
else if (a==3){

    printf("March has 31 Days");
}
else if (a==4){

    printf("April has 30 Days");

}
else if (a==5){

    printf("May has 31 Days");
}
else if (a==6){

    printf("June has 30 Days");
}
else if (a==7){

    printf("July has 31 Days");
}
else if (a==8){
    printf("August has 31 Days");

}
else if (a==9){

    printf("September has 30 Days");
}

else if (a==10){

    printf("October has 31 days");

}
else if (a==11){

    printf("November has 30 Days");

}
else if(a==12){

    printf("December has 31 Days");

}

else {
    printf("Invalid Number");
}


}

