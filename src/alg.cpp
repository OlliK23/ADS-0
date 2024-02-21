// Copyright 2021 NNTU-CS
#include <math.h>
int gcd(int a, int b) {
    if (b == 0) {
    return a;}
return gcd(b, abs(a % b));
}
