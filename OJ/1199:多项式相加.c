//不是我写的😁,然后还是错了，真的有被无语到诶😓
#include <stdio.h>

#define MAX_DEGREE 101  // Maximum degree is 100, but we use 101 to include degree 0

void addPolynomials(int poly1[], int poly2[], int result[], int maxDegree) {
    for (int i = 0; i <= maxDegree; i++) {
        result[i] = poly1[i] + poly2[i];
    }
}

void printPolynomial(int poly[], int maxDegree) {
    int first = 1;
    for (int i = maxDegree; i >= 0; i--) {
        if (poly[i] != 0) {
            if (!first) {
                printf("+");
            }
            if (i == 0) {
                printf("%d", poly[i]);
            } else if (i == 1) {
                printf("%dx", poly[i]);
            } else {
                printf("%dx%d", poly[i], i);
            }
            first = 0;
        }
    }
    printf("\n");
}

int main() {
    int t, degree, coefficient, maxDegree;
    int poly1[MAX_DEGREE] = {0}, poly2[MAX_DEGREE] = {0}, result[MAX_DEGREE] = {0};

    scanf("%d", &t);  // Read the number of test cases

    while (t--) {
        maxDegree = 0;
        // Reset the arrays for each test case
        for (int i = 0; i < MAX_DEGREE; i++) {
            poly1[i] = poly2[i] = result[i] = 0;
        }

        // Read the first polynomial
        while (1) {
            scanf("%d %d", &degree, &coefficient);
            if (degree == -1 && coefficient == -1) break;
            poly1[degree] = coefficient;
            if (degree > maxDegree) maxDegree = degree;
        }

        // Read the second polynomial
        while (1) {
            scanf("%d %d", &degree, &coefficient);
            if (degree == -1 && coefficient == -1) break;
            poly2[degree] = coefficient;
            if (degree > maxDegree) maxDegree = degree;
        }

        // Add the polynomials
        addPolynomials(poly1, poly2, result, maxDegree);

        // Print the result
        printPolynomial(result, maxDegree);
    }

    return 0;
}