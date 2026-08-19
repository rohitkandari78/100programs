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
    
        int min,hours,seconde;


printf("Enter the seconde\n");

scanf("%d",&seconde);
min=seconde/60;
hours=min/60;
min=min-hours*60;
seconde=seconde%60; // % it is module operater used for print or find reminder;

printf("The time is %d hours %d minutes %d secondes",hours,min,seconde);

    }



//--->                                      LEVEL 2--CONDITIONS(if/else)


    

//. Program 11  -->  Write a program to read anumber and cheak Whether it is even or odd.



#include<stdio.h>
int main(){
int num;
printf("Enter a Number\n");
scanf("%d",&num);
if(num%2==0){
    printf("Given number is even");
}
else{
    printf("Given number is odd");
}


}


//program 12. ----->   Write a program to cheak the given number is positive negitive or zero.


#include<stdio.h>
int main(){
int num;
printf("Enter a number \n");
scanf("%d",&num);
if(num<0){
    printf("Given number is Negitive\n");
}
else if(num>0)
{
    printf("Given Number is Positive\n");
}
else {
    printf("Given Number is Zero");
}
return 0;
}


 //program 13. -----> Write a program to read three numbers and find the largest among them.

#include<stdio.h>
int main(){
    int lar,num1,num2,num3;
printf("Enter the first Number \n");
scanf("%d",&num1);
printf("Enter the secone Nuber \n");
scanf("%d",&num2);
printf("ENter the third Number\n");
scanf("%d",&num3);
if(num1>num2)    {
    lar=num1;
}
else{
    lar=num2;
}
if(num3>lar) {
   printf("the largest number is %d\n",num3);
}
else{
    printf("largest number is %d\n",lar);
}
}


 //Program 14. ---> Write a program to read three numbers and find the smallest among them.

#include<stdio.h>
int main(){
    int smallest,num1,num2,num3;
    printf("Enter first number\n");
    scanf("%d",&num1);
     printf("Enter first number\n");
    scanf("%d",&num2);
     printf("Enter first number\n");
    scanf("%d",&num3);
    if(num1>num2){
        smallest=num2;
    }
    else{
        smallest=num1;
    
    }
    if(num3<smallest){
        printf("Smallest number is %d\n",num3);
    }
    else{
        printf("Smallest Number is %d",smallest);
    }
}

     // program 15. ---> write a program to cheak leap year or not.

     #include<stdio.h>
     int main(){
        int year,rem;
        printf("Enter the year");
        scanf("%d",&year);
        if(year%4==0){
            printf("year is leap year ");
        }
        else if (year%400==0){
        printf("year is Leap year");
        }
        else{
            printf("Not leapyear");
        }
     }


  program 16.  -----> Write a program to read a character and cheak whether it is vowel or consonant.

  #include<stdio.h>
  int main(){
    char ch;
    
    printf("Enter a character");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U' ){
      printf("%c is a vowel",ch);
    }
    else{
      printf("%c is a consonant");
    }

  }