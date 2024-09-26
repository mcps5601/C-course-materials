int main(){
    int unsorted[5] = {26, 5, 81, 7, 63};
    int temp = 0;

    // start bubble sort
    for (int i = 1; i < 5; i++){
        for (int j = 0; j < 5 - i; j++){
            if (unsorted[j] > unsorted[j+1]){
                // swap
                temp = unsorted[j];
                unsorted[j] = unsorted[j+1];
                unsorted[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++){
        printf("%d\n", unsorted[i]);
    }
}