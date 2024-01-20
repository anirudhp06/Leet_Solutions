double myPow(double x, int n) {
    // Base case: x^0 = 1
    if (n == 0) {
        return 1.0;
    }

    // Recursive case: divide the problem into subproblems
    double half = myPow(x, n / 2);

    // Combine the results based on the parity of n
    if (n % 2 == 0) {
        return half * half;
    } else {
        // If n is odd, include an extra factor of x
        return (n > 0) ? x * half * half : (1.0 / x) * half * half;
    }
}