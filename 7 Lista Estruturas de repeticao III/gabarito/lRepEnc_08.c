/*
c
m
d
b
f
h
e
k
g
i
j
l
a
n
*/
int main(){

    int digito, n, indicadora = 1;

    printf("Digite n: ");
    scanf("%d", &n);

    digito = n % 10;
    n /= 10;

    while (n > 0){

        if (n % 10 != digito)
            indicadora = 0;

        n /= 10;
    }

    if(indicadora == 1)
        printf("Os digitos sao todos iguais! ");

	return 0;
}

