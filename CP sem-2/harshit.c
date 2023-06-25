// #include <stdio.h>
// int main()
// {
//     return 0;
// } 

// // wap average of three number
// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     float average;
//     printf("Enter three Number \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     average = (a+b+c)/3;
//     printf("Average is :- %f",average);
//     return 0;
// } 



// // compare three number using conditional (ternary) operator 
// #include <stdio.h>
// int main()
// {
//     int a=8 , b=6 ,c=7 , max ;
//     max = (a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
//     printf("MAX = %d ", max);
//     return 0;
// } 



// // write a menu driven program to perform following operations 1:- add , 2:- sub , 3:- mult , 4:- div
// #include <stdio.h>
// int main()
// {
//     int a,b ,ch;
//     float ans;
//     printf("Menu \n");
//     printf(" 1 :- Add \n 2 :- sub \n 3 :- mult \n 4 :- div \n");
//     printf("Enter your choice");
//     scanf("%d",&ch);
//     printf("Enter two Numbers");
//     scanf("%d,%d",&a ,&b);
//     switch (ch)
//     {
//     case 1:
//         ans = a+b ;
//         printf("Additiion is :- %f " ,ans);
//         break;
    
//     case 2:
//         ans = a-b ;
//         printf("Substraction is :- %f " ,ans);
//         break;
    
//     case 3:
//         ans = a*b ;
//         printf("Multiplication is :- %f " ,ans);
//         break;

//     case 4:
//         ans = a/b ;
//         printf("Division is :- %f " ,ans);
//         break;

//     default: printf("Enter correct Number");  
//         break;
//     }
//     return 0;
// } 



// // wirte a programe to find Sum of the Digits
// #include <stdio.h>
// int main()
// {
//     int n , sum =0 ,r;
//     printf("Enter a Number");
//     scanf("%d",&n);

//     while (n>0)
//     {
//         r = n%10;
//         sum = sum+r;
//         n = n/10;
//     }
//     printf("Sum of the Digits is %d \n", sum); 
//     return 0;
// } 



// // wirte a programe to find the sum of first n number
// #include <stdio.h>
// int main()
// {
//     int n,i,sum = 0;
//     printf("Enter a Number");
//     scanf("%d",&n);
//     for (i = 1; i<=n; i++)
//     {
//         sum = sum + i;
//     }
//     printf("Sum of N number is :- %d ", sum);
//     return 0;
// } 



// // Write a program to print the following pattern. Accept number of rows from user and
// display that much number of rows in output.
// 1
// 01
// 101
// 0101
// #include <stdio.h>
// int main() {
//     int rows, i, j;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= i; j++) {
//             if ((i + j) % 2 == 0)
//                 printf("1");
//             else
//                 printf("0");
//         }
//         printf("\n");
//     }

//     return 0;
// }




//    1
//   11
//  111
// 1111 
// #include <stdio.h>

// int main() {
//     int rows, i, j, spaces;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     spaces = rows - 1;

//     for (i = 1; i <= rows; i++) {
//         for (j = 1; j <= spaces; j++) {
//             printf(" ");
//         }

//         for (j = 1; j <= i; j++) {
//             printf("1");
//         }

//         printf("\n");
//         spaces-- ;
//     }
//     return 0;
// }



// // check the number is palindrome or not
// #include <stdio.h>
// int main()
// {
//     int n , rev=0 ,n1 , rem;
//     printf("Enter a number");
//     scanf("%d",&n);
//     n1=n;
//     while(n>0){
//         rem = n%10;
//         rev = rev*10 + rem;
//         n = n/10;
//     }
//      if (n1 == rev){
//         printf("Palindrome");
//      }
//      else{
//         printf("Not Palindrome");
//      }
//      return 0;
// } 



// // ascci value wala triangle 
// #include <stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter a number");;
//     scanf("%d",&n);
//     for(i=1 ; i<=n ; i++){
//         for(j=1 ; j<=i ; j++){
//             printf("%c",64+i);
//         }
//         printf("\n");
//     }
//     return 0;
// } 



// // ulta star triangle 
// #include <stdio.h>
// int main()
// {
//     int n , i, j, space;
//     printf("enter a number");
//     scanf("%d",&n);
//     space = n -1 ;
//     for (i=1; i<=n; i++)
//     {
//         for (j=1 ; j<=space; j++)
//         {
//             printf(" ");
//         }
        
//         for (j = 1; j<=i ; j++)
//         {
//             printf("*");
//         }
//           printf("\n");
//           space--;
//     }
    
//     return 0;
// } 



// // ulta number triangle 
// #include <stdio.h>
// int main()
// {
//     int n , i, j, space ;
//     int num =1;
//     printf("enter a number");
//     scanf("%d",&n);
//     space = n -1 ;
//     for (i=1; i<=n; i++)
//     {
//         for (j=1 ; j<=space; j++)
//         {
//             printf(" ");
//         }
        
//         for (j = 1; j<=i ; j++)
//         {
//             printf("%d",num);
//             num++;

//         }
//           printf("\n");
//           space--;
//     }
    
//     return 0;
// } 



// s
// st
// stud
// study

// #include <stdio.h>
// #include <string.h>
// int main() {
//     int rows, i, j;
//     char word[] = "study";

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for (j = 0; j < i; j++) {
//             printf("%c", word[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// // structure for 5 student with name , rollno , marks 
// #include <stdio.h>
// struct student
// {
//     char sName[20];
//     int sRollno;
//     int marks;
// };

// int main()
// {
//     int i;
//     struct student s[5];
//     for ( i = 0; i<3 ; i++)
//     {
//         printf("Enter Student Name \n");
//         scanf("%s",&s[i].sName);
//         printf("Enter student Roll-No \n");
//         scanf("%d",&s[i].sRollno);
//         printf("Enter Student Marks \n");
//         scanf("%d",&s[i].marks);
//     }
//     printf("Name\t Roll-No\t Marks\n");
//     for (i = 0; i<3; i++)
//     {
//         printf("%s\t %d\t %d\n",s[i].sName, s[i].sRollno, s[i].marks);
//     }
    
//     return 0;
// } 



// // strings
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[20], s2[20], s3[20], s4[20];
//     printf("enter s1");
//     gets(s1);
//     printf("%s \n",s1);
//     strcpy(s2,s1);
//     printf("%s \n",s2);
//     printf("enter s3");
//     gets(s3);
//     strcat(s1,s3);
//     printf("%s \n",s1);
//     printf("%s",strcmp(s1,s2));
//     printf("%d \n",strlen(s2));
//     return 0;
// } 



// // palindrome using strings
// #include <stdio.h>
// #include <string.h>
// void main(){
//     int i,flag=0, len;
//     char str[20];
//     printf("enter string\n");
//     gets(str);
//     len = strlen(str);
//     for(i=0;i<=len/2;i++)
//     {
//         if(str[i]!= str[len-1-i]){
//             flag=1;
//             break;
//         }
//     }
//         if(flag==0){
//             printf("palindrome");

//             }
//             else{
//                 printf("not palindrome");

//             }
// }



// // Fibonacci series
// #include <stdio.h>
// int main(){
//     int n ,n1 ,n2 ,ans ,i;
//     printf("Enter a number");
//     scanf("%d",&n);
//     n1=0;
//     n2=1;
//     printf("%d\t %d\t",n1,n2);
//     for (i = 3; i<=n ; i++)
//     {
//         ans = n1+n2;
//         printf("%d \t",ans);
//         n1=n2;
//         n2=ans;
//     }
//     return 0;
// }



// // program for factorial using function
// int fact (int x)
// {
//     int i ,f ;
//     for (i=x ; i>=1 ; i--)
//     {
//         f=f*i;
//     }
//     return(f);
// }
// #include <stdio.h>
// int main(){
//     int ans , n;
//     printf("Enter the Number");
//     scanf("%d",&n);
//     ans = fact(n);
//     printf("%d",ans);
//     return 0;
// }




// // write fibonacci series using function
// #include <stdio.h>
// int fibonacci( int n){
//     int n1 =0 , n2=1 ,i ,ans;
//     printf("%d\t %d\t",n1,n2);
//     for (i=3 ; i<=n ; i++)
//     {
//         ans= n1+n2;
//         printf("%d\t",ans);
//         n1=n2;
//         n2=ans;
//     }
//     return(ans);
// }
// int main(){
//     int num , ans2 ;
//     printf("Enter the Number ");
//     scanf("%d",&num);
//     ans2 = fibonacci(num);
//     // printf("%d\t",ans2);
// }