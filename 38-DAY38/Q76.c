//Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int a[10][10], r, i, j, flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &r);
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<r;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
        for(j=0;j<r;j++)
            if(a[i][j] != a[j][i])
                flag = 0;
    if(flag) printf("Matrix is Symmetric.\n");
    else printf("Matrix is Not Symmetric.\n");

    return 0;
}

