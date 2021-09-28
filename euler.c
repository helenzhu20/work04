int sum_of_multiples_of_3_and_5(int iterations) {
    int x;
    int sum = 0;

    for (x = 3; x < iterations; x = x + 3) {
        sum = sum + x;
    }

    for (x = 5; x < iterations; x = x + 5) {
        if (!(x%3 == 0)) {
            sum = sum + x;
        }
    }

    return sum;
}

int is_palindrome(int n) {
    int ori = n;
    int reversed = 0;

    while (n) { //110
        reversed = reversed * 10 + n%10;
        n = n/10;
    }

    if (ori == reversed) {
        return 1;
    } else {
        return 0;
    }
}

int largest_palindrome_product() {
    int palindrome = 0, a, b;

    for (a = 100; a < 1000; a = a + 1) {
        for (b = 100; b < 1000; b = b + 1) {
            int m = a * b;
            if (is_palindrome(m) == 1 && m > palindrome) {
                palindrome = m;
            }
        }
    }

    return palindrome;
}
