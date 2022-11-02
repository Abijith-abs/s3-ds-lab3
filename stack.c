#include<stdio.h>
#define maxsize 100
int stack[maxsize],top=-1,element,i,d;
void push( int element)
{
if(top==maxsize-1)
printf("Stack overflow");
else 
stack[++top]=element;
}
void pop()
{
if(top=-1)
printf("Stack empty");
else
d=stack[top--];
}
void display()
{
for(i=0;i<=top;i++)
printf("%d \n",stack[i]);
}
int main()
{
int i,ch;
do
{
printf("Choose an option");
printf("\n 1.Push");
printf("\n 2.Pop");
printf("\n 3.Display");
printf("\n 4.Exit");
printf("\nEnter the choice");
scanf("\n %d",&ch);
switch(ch)
{
case 1:
{
printf("\nEnter the element to push");
scanf("\n %d",&element);
push(element);
break;
}
case 2:
{
pop();
printf("\nElement poped is:%d",d);
break;
}
case 3:
{
display();
break;
}

}
} while(ch<4);
}
