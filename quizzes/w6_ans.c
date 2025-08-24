#include <stdio.h>
#define N 4

int main()
{
    // int N = 4;

    int num = 1;
    int arr[N][N] = {0};
    int movements[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int row = 0, col = 0;
    int direction = 0;

    while (num <= N * N)
    {
        arr[row][col] = num++;

        int next_row = row + movements[direction][0];
        int next_col = col + movements[direction][1];

        // over the boundary or the next cell has been filled
        if (next_row < 0 || next_col < 0 || next_row >= N || next_col >= N || arr[next_row][next_col] != 0)
        {
            direction = (direction + 1) % 4;
            next_row = row + movements[direction][0];
            next_col = col + movements[direction][1];
        }
        row = next_row;
        col = next_col;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}
