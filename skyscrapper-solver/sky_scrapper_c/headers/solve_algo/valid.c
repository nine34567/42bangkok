int num=1;
int valid(unsigned int *clues, unsigned int **board,int num, unsigned int *pos)
{
    int *row;
    int i = 0;
    while (i < 4)
    {
        if (i == pos[1])
        {
            row = num;
        }
        else
        {
            row = board[pos[0]][i];
        }
        i++;
    }
    return 0;
}