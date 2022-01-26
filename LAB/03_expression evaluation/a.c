// A building has 10 floors with a floor of height 3 metres each. A ball is dropped from the top of the building. find the time taken by the ball to reach each floor
#include <math.h>
#include <stdio.h>
void main() {
    int s = 3, i = 1, n = 10;
    float a = 9.8, t;
    for (i = 1; i <= 10; i++) {
        t = sqrt((2 * s) / a);
        printf("Time taken for %d floor is %f\n", i, t);
        s = s + 3;
    }
}

// Time taken for 1 floor is 0.782461
// Time taken for 2 floor is 1.106567
// Time taken for 3 floor is 1.355262
// Time taken for 4 floor is 1.564922
// Time taken for 5 floor is 1.749635
// Time taken for 6 floor is 1.916630
// Time taken for 7 floor is 2.070197
// Time taken for 8 floor is 2.213133
// Time taken for 9 floor is 2.347382
// Time taken for 10 floor is 2.474358