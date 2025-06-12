#include <stdio.h>

int main()
 {
int a = 1;
int b = 3;

printf("antes da troca:\n");
printf("valor de 'a': %d\n", a);
printf("valor de 'b': %d\n", b);
printf("\n");

int temp;
temp = a;
a = b; 
b = temp;

printf("depois da troca:\n");
printf("valor de 'a': %d\n", a);
printf("valor de 'b': %d\n", b);

return 0;
}