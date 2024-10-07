int main(){
    int score[2][4] = {
        {80, 85, 90, 100}, 
        {80, 85, 90, 100}
    };
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 4; col++){
            printf("%d at (%d, %d)\n", score[row][col], row, col);
        }
    }
}