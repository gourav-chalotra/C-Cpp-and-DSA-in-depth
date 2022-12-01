// Function to find the location of 0 in a matrix of 4X4

int currentLocationColoum()
{
    int count_j = 0;
    for (int i = 0; i < 4; i++)
    {
        count_j = 0;
        for (int j = 0; j < 4; j++)
        {
            if (Arr[i][j] == 0)
            {
                return count_j;
                break;
            }
        }
    }
}
int currentLocationRow()
{
    int count_r = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Arr[i][j] == 0)
            {
                return count_r;
            }
        }
        count_r++;
    }
}