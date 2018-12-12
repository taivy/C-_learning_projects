void rotate(int a[], unsigned size, int shift)
{
    int i, j;
    for (i=0; i<shift; i++) {
        int temp;
        temp = a[0];
        for (j=1; j<size; j++) {
            a[j-1] = a[j];
        }
        a[size-1] = temp;
    }

}




