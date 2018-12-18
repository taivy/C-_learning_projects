#include <cstdlib>

int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int **res = new int *[cols];
    res[0] = new int[rows*cols];
    for (unsigned s=1; s !=cols; s++) {
        res[s] = res[s-1] + rows;
    }
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            res[j][i]=m[i][j];
        }
    }
    return res;
}




