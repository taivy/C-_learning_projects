void swap_min(int *m[], unsigned rows, unsigned cols)
{
    
    int min = m[0][0];
    int row_num;
    
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            if (m[i][j] < min) {
                min = m[i][j];
                row_num = i;
            }
        }
    }
    
    int *temp = m[0];
    m[0] = m[row_num];
    m[row_num] = temp;
    
}




