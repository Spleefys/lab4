#include <stdio.h>

int sum_array(int *a, int N)
{
    int i, sum=0;
    for (i=0; i<N; i++)
    {
	    sum = sum + a[i];
    }
    return sum;
}

void print_array(int *a, int N)
{
     int i;
     for(i=0; i<N; i++)
     {
	      printf("%d ", a[i]);
     }
     printf("\n");
}

int fib(int n)
{
    if (n == 0) { return 1; }
    else
    {
        if ((n == -1) || (n == 1)) { return 1; }
        else
        {
            if (n > 0) { return fib(n - 1) + fib(n - 2); }
            else { return fib(n + 2) - fib(n + 1); }
        }
    }
}

int fibb(int n) {
   int i, a = 1, b = 1, c;
   for ( i = 1; i < n; i++ ) {
      c = a + b;
      a = b;
      b = c;
   }
   return b;
}

int main(){
    int N;
    printf("Введите число чисел Фибоначчи:");
    scanf("%d", &N);
    int arr[N], ar[N];
    char c[N];

    for (int i=0; i<N; i++){
        ar[i]=fibb(i);
    }

    for (int i=0; i<N; i++){
        arr[i]=fib(i);
    }

    sprintf(c, "%d", *arr);
    for (int i; i<N; i++)
    printf("%c", c[i]);

    printf("Сумма: %d\n", sum_array(arr, N));
    print_array(arr, N);

    printf("Сумма: %d\n", sum_array(ar, N));
    print_array(ar, N);
}
