// Преподаватели Geek Brains создали набор, 
// содержащий N (1 ≤ N ≤ 1 000 000) натуральных чисел,
// не превосходящих 1 000 000. Известно, что ровно одно число
//  в этом наборе встречается один раз,
//  а остальные — ровно по два раза. Помогите им найти это число.
// Входные данные: в первой входной строке вводится число N,
// затем по одному числу в строке вводятся N натуральных чисел,
// не превосходящих 2 000 000 000. Выходные данные: ваша программа
// должна определить число, встречающееся один раз,
// и вывести его на экран.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, num, res = 0;
    printf("Enter N = ");
    scanf("%d", &N);
    printf("Еnter %d values :\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        res ^= num;
    }
    printf("%d\n", res);
    return 0;
}

