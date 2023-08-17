#include <stdio.h>
void printboard(); 
int checkwin();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void main()
{
    int player=1,input,status=1;
    printboard();
    while(status<=9)
    {
if(player%2==0) 
{
    player=2;

}
else
{
player=1;
}
    char mark;
    if(player==1) //if player is 1 then mark x and if player is other then mark 0
    {
      mark='X';
    }
    else 
    {
        mark='O';
    }
    
    printf("player %d please enter your number \n",player);
    scanf("%d",&input);
    if(input<1 || input>9)
    {
        printf("invalid input");
        
    }
    else;
    board[input]=mark; //the input of user will be filled by the mark 
    printboard();
    int result=checkwin();
    {
        if (result==1)
        {
        printf("The winner is %d \n",player);
        return;
    }
        else if(result==0)
        {
            printf("draw");
            return;
            }

    player++;

    }
    }
}
void printboard()
{
    system("clear");
    printf("\n\n");
    printf("    <<TIC======TAC======TOE>>\n");
    printf("player 1 (X)--------plyaer 2 (O)");
    printf("          |          |          \n");
    printf("          |          |          \n");
    printf("    %c     |    %c     |    %c     \n",board[1],board[2],board[3]);
    printf("          |          |          \n");
    printf("__________|__________|__________\n");
    printf("          |          |          \n");
    printf("          |          |          \n");
    printf("   %c      |    %c     |     %c    \n",board[4],board[5],board[6]);
    printf("          |          |          \n");
    printf("__________|__________|__________\n");
    printf("          |          |          \n");
    printf("          |          |          \n");
    printf("  %c       |    %c     |     %c    \n",board[7],board[8],board[9]);
    printf("          |          |          \n");
    printf("          |          |          \n");
    printf("    <<TIC======TAC======TOE>>\n");



}
int checkwin()
{
    if (board[1]==board[2] && board[2]==board[3])
    {
    return 1;
    }
    if (board[1]==board[4] && board[4]==board[7])
    {
    return 1;
    }
    if (board[7]==board[8] && board[8]==board[9])
    {
    return 1;
    }
    if (board[3]==board[6] && board[6]==board[9])
    {
    return 1;
    }
    if (board[1]==board[5] && board[5]==board[9])
    {
    return 1;
    }
    if (board[3]==board[5] && board[5]==board[7])
    {
    return 1;
    }
    if (board[2]==board[5] && board[5]==board[8])
    {
    return 1;
    }
    if (board[4]==board[5] && board[5]==board[6])
    {
    return 1;
    }
    int count=0;
    for(int i=1;i<=9;i++)
    {
        if (board[i]=='X' || board[i]=='O')
        {
            count++;
        }
    }
    
    if (count==9)
    {
        return 0;
    }


        return -1;


}
