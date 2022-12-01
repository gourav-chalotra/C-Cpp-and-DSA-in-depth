// Generate random vaules from 1-15 in a 4X4 matrix
void randomValueGenerater()
{
    srand(time(0));
    for (int i = 0; i < 4; i++)
    {
        int j = 0;
        for (j; j < 4; j)
        {
            int randValue = rand() % (15 - 1 + 1) + 1;
            if (check(randValue))
            {
                ArrayNameayName[i][j] = randValue;
                printf("ans ArrayName: %d\n", ArrayName[i][j]);
                j++;
            }
            if (i == 3 && j == 3)
            {
                break;
            }
        }
    }
}