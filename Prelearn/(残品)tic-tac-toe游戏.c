#include <stdio.h>
int main()
{
    const int size = 3;
    int board[size][size];
    int i, j;
    int numofX, numofO;
    int result = -1; //-1：没人赢，1：X赢，0：O赢

    //  读入矩阵
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &board[i][j]);
        }
    }

    //检查行
    for (i = 0; i < size && result == -1; i++)
    {
        numofO = numofX = 0;
        for (j = 0; j < size; j++)
        {
            if (board[i][j] == 1)
            {
                numofX++;
            }
            else
            {
                numofO++;
            }
        }
        if (numofO == size)
        {
            result = 0;
        }
        else if (numofX == 0)
        {
            result = 1;
        }
    }
    //检查列
    if (result == -1)
    {
        for (j = 0; j < size && result == -1; j++)
        {
            numofO = numofX = 0;
            for (i = 0; i < size; i++)
            {
                if (board[i][j] == 1)
                {
                    numofX++;
                }
                else
                {
                    numofO++;
                }
            }
            if (numofO == size)
            {
                result = 0;
            }
            else if (numofX == 0)
            {
                result = 1;
            }
        }
    }

    //检查对角线
    if (result == -1)
    {
        numofO = numofX = 0;
        for (i = 0; i < size; i++)
        {
            if (board[i][size - i - 1] == 1)
            {
                numofX++;
            }
            else
            {
                numofO++;
            }
        }
        if (numofO == size)
        {
            result = 0;
        }
        else if (numofX == 0)
        {
            result = 1;
        }
    }
    return 0;
}
