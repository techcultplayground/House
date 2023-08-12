 /*Write a recursive function to obtain the first 25 numbers of a 
Fibonacci sequence. In a Fibonacci sequence the sum of two 
successive terms gives the third term. Following are the first few 
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89... */ 

 #include<stdio.h> 
 int fib(int i);
 int main() 
 { 
    int num,a;
    printf("Enter the No: ");
    scanf("%d",&num);
    for(a=0;a<=num;a++) 
    { 
        printf("%d\n",fib(a));
        //c++;
    }
 } 
 int fib(int i) 
 { 
    if(i==0)
    { 
        return 0;
    } 
    else if(i==1) 
    { 
        return 1;
    } 
    else 
    { 
        return(fib(i-1)+fib(i-2));
    }
 }