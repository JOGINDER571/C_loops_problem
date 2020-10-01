#include<stdio.h>

// program to print fst N natural no. taken by user
/*
int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	i=1;
	do{
		printf("\n%d",i);
		i++;		
	}while(i<=n);
	
	
	return 0;
}*/


// program to print fst N natural no. in reverse order taken by user
/*int main()
{
	int n,i;
	printf("Enter the number:");
	scanf("%d",&n);
	i=n;
	do{
		printf("\n%d",i);
		i--;		
	}while(i>=1);
	
	
	return 0;
}*/
//program to print fst 10 even natural number.
/*
int main()
{
	int i,n;
	printf("fst 10 natural even no.");
	scanf("%d",&n);
    i=1;
    while(i<=n){
    	printf("\n%d",i*2);
    	i++;
	}
	return 0;
}*/
//program to print fst 10 odd natural number.
/*
int main()
{
	int i,n;
	printf("fst 10 natural odd no.");
	scanf("%d",&n);
	i=1;
	do{
		printf("\n%d",(i*2)-1);
		i++;
	}while(i<=n);
	
   return 0; 	
}*/
//program to print fst 10 even natural number in reverse order.
/*
int main()
{
	int i,n;
	printf("fst 10 natural even no.");
	scanf("%d",&n);
    i=10;
    while(i>=1){
    	printf("\n%d",i*2);
    	i--;
	}
	return 0;
}*/
//program to print fst 10 odd natural number in reverse order.
/*
int main()
{
	int i,n;
	printf("fst 10 natural odd no.");
	scanf("%d",&n);
	i=15;
	do{
		printf("\n%d",(i*2)-1);
		i--;
	}while(i>=1);
	
	
	return 0; 	
}*/
// program to print table of users choice
/*
int main()
{
	int n,i;
	printf("Table of:");
	scanf("%d",&n);
	i=1;
	while(i<=10){
		printf("\n%d*%d=%d",n,i,n*i);
		i++;
	}
	return 0;
}*/
//program to calculate sum of fst N natural no. 
/*
int main()
{
	int i,n,s=0;
	printf("Enter a no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+i;
	
	}
		printf("sum is equal to:%d",s);
	
	return 0;
}*/
//program to calculate product of fst N natural no.
 /*
int main()
{
	int i,n,s=1;
	printf("Rnter a no:");
	scanf("%d",&n);
	i=1;
	do{
		s=s*i;
		
		i++;
	}while(i<=n);
	printf("\nproduct is %d:",s);
	
	
	return 0;
}*/
//program to calculate factorial of any no.
/*
int main()
{
	int n,f=1;
	printf("Enter any number:");
	 scanf("%d",&n);
	 do{
	 	f=f*n;
	 	n--;
	 }while(n>=1);
    printf("factorial  is %d",f);
	return 0;
}
*/
//program to calculate sum of fst N even no.
/*
int main()
{
	int i,n,s=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+(i*2);
		
		
	}
	printf("sum of fst %d even number  is = %d ",n,s);
	return 0;
}
*/
//program to calculate sum of fst N odd no.
/*
int main()
{
	int i,n,s=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+((i*2)-1);
		
		
	}
	printf("sum of fst %d odd number  is = %d ",n,s);
	return 0;
}
*/
//program to calculate x power y;
/*
int main()
{
	 
	int x,y,p=1,i;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("And its power:");
	scanf("%d",&y);
	i=1;
	while(i<=y){
		p=p*x;
		i++;
	}
	
	printf("product is %d",p);
	return 0;
}*/
//program to calculate no. of digit in a given number
/*
int main()
{
	int x;
	int count;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x!=0){
	x=x/10;
	count++;	
	}

	
	printf(" total digit is %d",count);
	return 0;
}*/
//program to calculate sum of digit in a given number 
/*
int main()
{
	int x,r,s=0;
	printf("Enter a number:");
	scanf("%d",&x);
	while(x!=0){
    r=x%10;
    s=s+r;
    x=x/10;
		
	}
	
	printf("sum of digit is %d",s);  
	return 0;
}*/
//program to reverse a number
/*
int main()
{
	int n,r=0,s;
	printf("Enter a number :");
	scanf("%d",&n);
	while(n!=0){
	s=n%10;
	r=(r*10)+s;
	n=n/10;		
		
	}
		printf("reverse number is %d",r);
	return 0;
}*/
//	WAP to print all armstrong no. under 1000
/*
int main()
{
	int n,s,r,x;
	printf("Armstrong numbers are:\n");
	 for(n=1;n<=1000;n++){
	s=0; 	
	x=n; 
	
	while(x!=0){
	r=x%10;
	s=s+r*r*r;
	x=x/10;
}
    if(s==n)
            printf("%d\n",n);
	 
}
	
	return 0;
}*/
//program to calculate LCM of two no.
/*
int main()
{
	int x,y,L;
	printf("Enter the value of x & y\n");
	scanf("%d%d",&x,&y);
	//for(L=x>y?x:y;L<=x*y;L=L+(x>y?x:y)) more efficient
	for(L=1;L<=x*y;L++)
	if(L%x==0&&L%y==0)
	   break;
	printf("LCM of %d and %d is %d\n",x,y,L);
	
	
	return 0;
}*/
//program to calculate HCF of two no
/*
int main(){
int x,y,H;
	printf("Enter the value of x & y\n");
	scanf("%d%d",&x,&y);
	for(H=x<y?x:y;H>=1;H--)
    if(x%H==0&&y%H==0)
    break;
    printf("HCF is %d\n",H);
    
 return 0;
}*/
// program to check a given no. is prime or not(bad)
/*
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
    //for(i=1;i<=n;i++)
    if(n=2)
    printf("%d is the prime no.",n);
    break; 
      if(n=3)
    printf("%d is the prime no.",n);
    if(n%2==0)
    printf("%d not a prime no.",n);
    //break;
    else if(n%3==0)
    printf("%dnot a prime no.",n);
    //break;
    else
    printf("%d is the prime no.",n);
    
	return 0;	
} */   //     or   
/*           
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	    if(n%i==0)
	    break;
 
    if(n==i)
    printf("%d is a prime no.",n);
    else
    printf("%d is not a prime no.",n);
    
	return 0;	
}*/
// print all prime number b|n two number
/*
int main()
{
	int l,u,x,i;
    printf("Enter the value of l & u:");
	scanf("%d%d",&l,&u);
	for(x=l+1;x<=u-1;x++)
	{
		for(i=2;i<x;i++)
		    if(x%i==0)
		    break;
        if(i==x)
            printf("%d \n",x);
	}
	    
	return 0;
}*/
// program to print all prime factor of A given number
/*
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n ;i++)
	   while(n%i==0){
	   	     printf("%d\n",i);
	   	   n=n/i;  
	   }
	   i++;
	return 0;
}*/
//program to print fst N term of fibonacci series
/*
 int main()
 {
 	int i,n,a=-1,b=1,c;
 	printf("Enter a number:");
    scanf("%D",&n);  
    for(i=1;i<=n;i++){
    	c=a+b;
    	printf("%d\t",c);
    	a=b;
    	b=c;
	}
 	return 0;
}*/
//  






