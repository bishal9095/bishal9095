#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int compare(char person,char comp)
{
    // For draw cases
    // s s 
    // p p 
    // sc sc  
    if(person==comp)
    return 0;
    // For non-draw cases 
    // s p 
    // s sc 
    // p sc

    if(person=='s' && comp=='p' )
    return -1;
    else if(person=='p' && comp=='s')
    return 1;
    if(person=='s' && comp=='c' )
    return 1;
    else if(person=='c' && comp=='s')
    return -1;
    if(person=='c' && comp=='p' )
    return 1;
    else if(person=='p' && comp=='c')
    return -1;
}
int main()
{
    int store;
    char comp,person;
    srand(time(0));
    store=rand()%100 + 1;
    if(store<33)
    comp='s';
    else if(store>33 && store<66)
    comp='p';
    else
    comp='c';
   
    printf("Enter 's' for Stone 'p' for Paper 'c' for Scissors : ");
    scanf("%c",&person);
    int result= compare(person,comp);
    if(person=='s')
    printf("\nYou chose Stone.");
    else if(person=='p')
    printf("\nYou chose Paper.");
    else
    printf("\nYou chose Scissors.");
    if(comp=='s')
    printf("\nComputer chose Stone.");
    else if(comp=='p')
    printf("\nComputer chose Paper.");
    else
    printf("\nComputer chose Scissors.");

    // printf("You chose %c & Computer chose %c .",person,comp);
    if(result==0)
    printf("\nThe match is draw.");
    else if(result==-1)
    printf("\nYou loose.");
    else
    printf("\nYou win");


    return 0;
}