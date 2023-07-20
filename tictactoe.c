#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int count =0  ;
void gamename()
{
     printf("\t\t TIC TAC TOE GAME \n ");
}
void show()
{
    printf("\n\n\t\t\t|---|---|---|\n");
    printf("\t\t\t| %c | %c | %c |\n",a[0],a[1],a[2]);
    printf("\t\t\t|---|---|---|\n");
    printf("\t\t\t| %c | %c | %c |\n",a[3],a[4],a[5]);
    printf("\t\t\t|---|---|---|\n");
    printf("\t\t\t| %c | %c | %c |\n",a[6],a[7],a[8]);
    printf("\t\t\t|---|---|---|\n");

}
void symbol()
{
    printf("symbol for player 1 : x \n ");
    printf("symbol for player 2 : 0 \n ");
}
void start()
{
    char player;
    printf("enter who will start the game : \n player 1 or player 2 \n ");
    fflush(stdin);
    scanf("%c",&player);
}
void play()
{  
    char p,s;
    printf("enter the position and symbol : \n ");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    void check(char , char);
    check(p,s);
    count ++;
}
void check(char p , char s)
{
    int i;
    for(i=0;i<9;i++)
    {
        if(a[i]==p)
        {
            a[i]=s;
        }
    }
}
int end()
{
    if(a[0]=='x'&& a[1]=='x'&& a[2]=='x' || a[0]=='x' && a[3]=='x' && a[6]=='x' || a[0]=='x'&& a[4]=='x'&&a[8]=='x')
     return (1);
     else if(a[0]=='0'&& a[1]=='0'&& a[2]=='0' || a[0]=='0' && a[3]=='0' && a[6]=='0' || a[0]=='0'&& a[4]=='0'&&a[8]=='0')
     return (2);
    else if (a[1]=='x' && a[4]=='x'&& a[7]=='x')
     return (1);
    else if (a[1]=='0' && a[4]=='0'&& a[7]=='0')
    return (2);
    else if (a[2]=='x'&& a[5]=='x'&&a[8]=='x')
     return (1);
    else if (a[2]=='0'&& a[5]=='0'&&a[8]=='0')
     return (2);
    else if (a[3]=='x'&& a[4]=='x'&& a[5]=='x')
     return (1);
    else if (a[3]=='0'&& a[4]=='0'&& a[5]=='0')
    return (2);
    else if (a[2]=='x'&& a[4]=='x'&& a[6]=='x')
     return (1);
    else if (a[2]=='0'&& a[4]=='0'&& a[6]=='0')
    return (2);
    else if (a[6]=='x'&& a[7]=='x'&& a[8]=='x')
     return (1);
    else if (a[6]=='0'&& a[7]=='0'&& a[8]=='0')
     return (2);
    return (3);
}
void draw()
{
    if(count==9)
    {
        printf("match is draw \n ");
    }

}
void main()
{
    int e;
    char ch;
    labell:
    system("cls"); // clear screen function
    gamename(); 
    show();
    symbol();
    start();
    play();

    label:
    system("cls"); // all the above content will be erased 
    show();
    play();
    e=end();
    system("cls");
    show();  // end hone k bs last m dekhane k lie 
    if(count<9)
    {
    if (e==1)
    { 
        printf("player 1 won \n ");
    }
    else if (e==2)
    {
        printf("player 2 won ");
    }
    else 
    {
      goto label;
    }
    }
    else
    {
        printf("game is draw \n ");
    }
    printf("Do you want to play again \n if yes press Y OR y\n ");
    fflush(stdin);
    scanf("%c",&ch);

    if(ch=='Y' ||  ch=='y')
    {
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';

        goto labell;
    }
    else 
    {
        printf("enter any key to exit \n ");
        exit(0);
    }



}