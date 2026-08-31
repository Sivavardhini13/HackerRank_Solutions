#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int1, int2;
    float float1, float2;
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    int sumInt = int1 + int2;
    int diffInt = int1 - int2;
    float sumFloat = float1 + float2;
    float diffFloat = float1 - float2;
    printf("%d %d\n", sumInt, diffInt);
    printf("%.1f %.1f\n", sumFloat, diffFloat);
    
    return 0;
}