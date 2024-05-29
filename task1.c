// На стандартном потоке ввода задается натуральное число N (N > 0),
// после которого следует последовательность из N целых чисел.
// На стандартный поток вывода напечатайте,
// сколько раз в этой последовательности встречается максимум.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N;
    int temp, count, max = 0;
    printf("Enter number: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &temp);

        if (temp > max)
        {
            max = temp;
            count = 1;
        }
        else if (temp == max)
        {
            count++;
        }
    }
    printf("Number of maxima = %d\n", count);

    return 0;
}
