#include <stdio.h>

int racunaj22(int a, int b, int c, int d)
{
    return (a*d)-(b*c);
}

int racunaj33(int x11, int x12, int x13, int x21, int x22, int x23, int x31, int x32, int x33)
{
    return (x11*x22*x33)+(x12*x23*x31)+(x13*x21*x32)-((x31*x22*x13)+(x32*x23*x11)+(x33*x21*x12));
}

int unosmatricann(int x, int y)
{
    int i,j,matricann[x][y],rowsaver[x];
    for(i=0; i<x; i++)
    {
        printf("Unos %d. reda:\n",i+1);
        for(j=0; j<y; j++)
        {
            printf("Unos elementa [%d][%d]: ",(i+1),(j+1));
            scanf("%d",&matricann[i][j]);
            if(i==0)
            {
                rowsaver[j]=matricann[i][j];
            }
        }
    (i<10) ? printf("-------------\n") : printf("--------------\n");
    }

    for(i=1; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            // WORK IN PROGRESS
        }
    }
}

void newline()
{
    printf("\n");
}

void main()
{
    int PrviUnos, DrugiUnos, TreciUnos;
    printf("Kalkulator za materice i determinante by demkyy\n");
    do
    {
        printf("1. Start\n2. Exit\n\nOdabir: ");
        scanf("%d",&PrviUnos);
        switch(PrviUnos)
        {
            case 1:
                newline();
                do
                {
                    int i=0, j=0, provjera=0;
                    printf("Odaberite zeljeni racun:\n1. Determinanta matrice 2 x 2\n2. Determinanta matrice 3 x 3\n3. Determinanta matrice n x n\n4. Izlaz\n\nOdabir: ");
                    scanf("%d",&DrugiUnos);
                    switch(DrugiUnos)
                    {
                        int rezultat, matrica22[2][2]={{0,0},{0,0}}, matrica33[3][3]={{0,0,0},{0,0,0},{0,0,0}};
                        case 1:
                            newline();
                            printf("Odabrali ste matricu tipa 2 x 2\nUnos matrice je po redovima - pojedinacno\nMolimo unosite skalar jedan po jedan\n\n");
                            for(i=0; i<2; i++)
                            {
                                printf("Unos %d. reda:\n",i+1);
                                for(j=0; j<2; j++)
                                {
                                    printf("Unos elementa [%d][%d]: ",(i+1),(j+1));
                                    scanf("%d",&matrica22[i][j]);
                                }
                                printf("-------------\n");
                            }
                            newline();
                            rezultat = racunaj22(matrica22[0][0],matrica22[0][1],matrica22[1][0],matrica22[1][1]);
                            printf("Determinanta matrice 2 x 2 iznosi: %d\n\n",rezultat);
                            provjera=1;
                            break;
                        case 2:
                            newline();
                            printf("Odabrali ste matricu tipa 3 x 3\nUnos matrice je po redovima - pojedinacno\nMolimo unosite skalar jedan po jedan\n\n");
                            for(i=0; i<3; i++)
                            {
                                printf("Unos %d. reda:\n",i+1);
                                for(j=0; j<3; j++)
                                {
                                    printf("Unos elementa [%d][%d]: ",(i+1),(j+1));
                                    scanf("%d",&matrica33[i][j]);
                                }
                                printf("-------------\n");
                            }
                            newline();
                            rezultat = racunaj33(matrica33[0][0],matrica33[0][1],matrica33[0][2],matrica33[1][0],matrica33[1][1],matrica33[1][2],matrica33[2][0],matrica33[2][1],matrica33[2][2]);
                            printf("Determinanta matrice 3 x 3 iznosi: %d\n\n",rezultat);
                            provjera=1;
                            break;
                        case 3:
                            newline();
                            printf("Odabrali ste matricu tipa n x n\nMolimo unesite broj redova matrice: ");
                            scanf("%d",&matrica22[0][0]);
                            printf("Uredu, sada unesite broj kolona matrice: ");
                            scanf("%d",&matrica22[0][1]);
                            newline();
                            //unosmatricann(matrica22[0][0],matrica22[0][1]);
                            //printf(rez);
                            provjera=1;
                            break;
                        case 4:
                            printf("Hvala na koristenju aplikacije, pozdrav!\n");
                            PrviUnos=2;
                            break;
                        default:
                            printf("Pogresan unos!\n\n");
                            break;
                    }
                    do
                    {
                        printf("Zelite li ponovo izracunati?\n1. Da\n2. Ne\n\nOdabir: ");
                        scanf("%d",&TreciUnos);
                        switch(TreciUnos)
                        {
                            case 1:
                                newline();
                                provjera=0;
                                break;
                            case 2:
                                printf("Hvala na koristenju aplikacije, pozdrav!\n");
                                provjera=0;
                                DrugiUnos=4;
                                PrviUnos=2;
                                break;
                            default:
                                printf("Pogresan unos!\n\n");
                                break;
                        }
                    }
                    while(provjera!=0);
                }
                while(DrugiUnos!=4);
                break;
            case 2:
                printf("Hvala na koristenju aplikacije, pozdrav!\n");
                break;
            default:
                printf("Pogresan unos!\n\n");
                break;
        }
    }
    while(PrviUnos!=2);
}
