#include <stdio.h>
int main()
{
    int christine; // cree une bboite avec
    christine = 99;
    int *KiprendQueDeSBoiteDentier;
    KiprendQueDeSBoiteDentier = &christine;
    int name = 3;
    KiprendQueDeSBoiteDentier = &name;
    *KiprendQueDeSBoiteDentier = 1996;
    printf("%d\n", *KiprendQueDeSBoiteDentier);
    return 0;
}
