#include<stdio.h>
int main(){
    printf("HELLO WORLD");
}



// 2 --> Write a program to read two numbers and print their sum.

#include<stdio.h>
int main(){
    int a=5,b=7,sum=0;
    printf("when i read first number the first number is %d\n",a);
    printf("when i read seconde number the seconde number is %d\n",b);
    sum=a+b;
    printf("Sum of Two number %d",sum);
}



// *3 ---->Write a c programm to print two numbers and print their sum ,diffrence,product.

#include<stdio.h>
int main(){
    int a=7,b=5,sum,diff,prd;
    printf("First Number is %d\n",a);
    printf("Seconde Number is %d\n",b);
    sum=a+b;
    printf("Sum of two numbers %d\n",sum);
    diff=a-b;
    printf("diffrence is %d\n",diff);
    prd=a*b;
    printf("product is %d\n",prd);
}




// *4 Write a program to print redius of a circle and print their area . redius given by user.

#include<stdio.h>
int main(){
int redius;
float area;
printf("Enter the redius of a circle\n");
scanf("%d",&redius);
area=2*3.14*redius;
printf("the area of given circle is %f\n",area);
}


// *5 ---> Write a program to print length and breadth of a rectangle and print its area:


#include<stdio.h>
int main(){
    int len,brt,area;
    printf("Enter the length\n");
    scanf("%d",&len);
    printf("Enter the breadth\n");
    scanf("%d",&brt);
    area=len*brt;
    printf("Area of given rectangle = %d",area);
}


// *6 --->. Write a program to swap two numbers using third variable;


#include<stdio.h>
int main(){
    int a=4,b=2,temp;
    printf("Before swap a is %d\n",a);
    printf("Before swap b is %d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("After swap a is %d\n",a);
    printf("After swap b is %d",b);

}


// *7 ----> Write a program to swap two numbers without using third variable:

#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("Before swap valuse a = %d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap values is a=%d,b=%d",a,b);
    
}



// * Write a program to print a temperature in ceisus and convert into fahreheit.


    #include<stdio.h>
    int main(){
        int cel;
        float feh=0.00;
        printf("Enter the temperature in ceisus\n");
        scanf("%d",&cel);
        feh=(cel*1.8)+32;
        printf("Temperature in fahreheit %f",feh);
    }


    // * Write a program to insert marks of 5 subject and print their sum ,average.


    #include<stdio.h>
    int main(){
        int eng,hin,math,chem,phy;
        int total;
        float average;
        printf("Enter the marks of eng\n");
        scanf("%d",&eng);
        printf("Enter the marks of hin\n");
        scanf("%d",&hin);
        printf("Enter the marks of math\n");
        scanf("%d",&math);
        printf("Enter the marks of chem \n");
        scanf("%d",&chem);
        printf("Enter the marks of phy\n");
        scanf("%d",&phy);
        total=eng+hin+math+chem+phy;
        printf("Total number =%d\n",total);
        average=total/5;
        printf("AVERAGE IS = %f",average);
    return 0;
    }


    // * Write a c program to read secondes and convert them into hours,minutes and seconde.

    #include<stdio.h>
    int main(){


    }
    