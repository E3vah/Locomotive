#include <stdio.h>
#include <stdlib.h>

int compterRoues(int code)//fonction de comptage
{
    int calcul;
int e1,e2,e3;//3 variables locales symbolisant un essieu chacune

e1=code/100; //extraction du nombre des centraines
e2=(code-e1*100)/10; //extraction du nombre des dizaines
e3=(code-(e1*100+e2*10)); //extraction du nombre des unités

if(e1>3||e3>3||e2<1||e2>7)// cas pour lesquels le calcul ne sera pas cohérent, réinitialise la boucle d'acquisition contrôlée
    {
    calcul = 0;//valeur arbitraire non comprise dans l'interval de résultats possibles
    }
else
    {
  calcul = 2*(e1+e2+e3);//multiplication par le nombre de roues par essieu
    }
return calcul;
}

int main()
{
int entree;
int sortie=0;
        do//acquisition contrôlée
        {
            printf("Entrer le code a trois chiffre de la locomotive.\n");
            scanf("%d",&entree);
            sortie = compterRoues(entree);
            if(sortie!=0)
            {
                printf("le nombre de roues de cette locomotive est %d.",sortie);
            }
            else
            {
                printf("Locomotive non existante.");
            }
        }while(sortie=0);


    return (0);
}


