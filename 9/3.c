#include <stdio.h>
#include <math.h>

struct Point
{
    double x;
    double y;
};

int main()
{
    int n;

    printf("Number of Points: ");
    scanf("%d", &n);

    struct Point points[n];

    for (int i = 0; i < n; i++)
    {
        printf("P%d.X: ", i + 1);
        scanf("%lf", &points[i].x);
        printf("P%d.Y: ", i + 1);
        scanf("%lf", &points[i].y);
    }

    printf("Lenght:\n");

    double dX, dY, distance;

    for (int i = 0; i < n - 1; i++)
    {
        dX = points[i + 1].x - points[i].x;
        dY = points[i + 1].y - points[i].y;
        distance = sqrt(dX * dX + dY * dY);

        printf("Length from P%d(%.2lf, %.2lf) to P%d(%.2lf, %.2lf) is %.2lf\n",
               i + 1, points[i].x, points[i].y,
               i + 2, points[i + 1].x, points[i + 1].y,
               distance);
    }

    return 0;
}