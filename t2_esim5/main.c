#include <stdio.h>

int main()
{
    //yksiulotteinen taulukko
    int ages[5]={21,45,12,6,32};
    printf("Eka alkio on %d\n", ages[0]);
    printf("Vika alkio on %d\n",ages[4]);
    printf("Anna eka alkio\n");
    scanf("%d",&ages[0]);
    printf("Eka alkio on %d\n", ages[0]);
    //huom! alkiota ages[5] ei ole määritelty
    printf("alkio ages[5] on %d\n",ages[5]);

    //T5
    //Kolmiulotteinen taulukko
    int myArray[3][3]={
        {4,5,6},
        {7,8,9},
        {4,5,1}
    };
    printf("Eka rivin kolmas alkio = %d\n",myArray[0][2]);
    printf("Tokan rivin toka alkio = %d\n",myArray[1][1]);
    printf("Kolmosrivin eka alkio = %d\n",myArray[2][0]);

    return 0;
}
