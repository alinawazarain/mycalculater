void main()
{
int a,b,c,d;
clrscr();
printf("\n*** main menu***");
printf("\n1)addition");
printf("\n2)subtraction");
printf("\n3)multiplication");
printf("\n4)division");
       printf("\n5)square");
printf("\n6)exit");
printf("\n enter choice 1-5");
scanf("%d",&choice);
switch(choice);
{
case 1:printf("\n enter a first number");
       scanf("\n %d",&a);
       printf("\n enter a second number");
       scanf("\n %d",&b);
       printf("\n addition of two  numbers is %d",(a+b));
       break;
       
case 2:printf("\n enter a first number");
       scanf("\n %d",&a);
       printf("\n enter a second number");
       scanf("\n %d",&b);
       printf("\n subtraction of two  numbers is %d",(a-b));
       break;
case 3:printf("\n enter a first number");
       scanf("\n %d",&a);
       printf("\n enter a second number");
       scanf("\n %d",&b);
       printf("\n multiplication of two  numbers is %d",(a*b));
       printf("ahmed");
       break;

case 4:printf("\n enter a first number");
       scanf("\n %d",&a);
       printf("\n enter a second number");
       scanf("\n %d",&b);
       printf("\n division of two  numbers is %d",(a/b));
       break;
       
case 5:printf("\n enter a  number");
       scanf("\n %d",&a);
       printf("\n square of two  numbers is %d",(a*a));
       break;
case 6:exit(0);
default:printf("\n invalid choice program exit");  
} 
getch();
}
      
