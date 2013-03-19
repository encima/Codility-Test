#include <vector>
#include <algorithm>
#include <stdint.h>
#include <iostream>

#define heavy 7

using namespace std;


// Problem: With a range of numbers from A to B, iterate through 
// each number and sum the digits, dividing by the length of the integer
// If that value is > 7, the number is heavy.
// For a given range, find the number of heavy numbers.

int is_heavy(int a, int& length) {
	int sum = 0;
	while (a) {
      sum += a % 10;
      a /= 10;
      length++;
    }

    return sum;
}

// Sum all individal integers for a given int, it is 
// heavy if the average of the ints exceeds 7
int heavy_decimal_count(int A, int B) {
	int heavy_count = 0;

	for(int i = A; i <= B; i++) {
		int length = 0;
		float heavy_res = is_heavy(i, length)/(float)length;
		cout << i << endl;
		printf("%.3f\n", heavy_res);
		if(heavy_res > heavy) {
			heavy_count++;
		}
	}
	return heavy_count;
}

int main(int argc, char const *argv[]) {
	cout << heavy_decimal_count(8675, 8689) << endl;
}
