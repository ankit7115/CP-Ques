#include <iostream>

using namespace std;

bool is_prime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;

  if (n % 2 == 0 || n % 3 == 0) return false;

  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }

  return true;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    // Check if N is prime. If it is, there is no solution.
    if (is_prime(n)) {
      cout << -1 << endl;
      continue;
    }

    // Find the first three distinct positive integers that are divisors of N and their product is a multiple of N.
    int a = 1, b = 2, c = n;
    bool found = false;
    while (!found) {
      if (a * b * c % n == 0 && a != b && b != c && a != c) {
        found = true;
      } else {
        if (a < b && a < c) {
          a++;
        } else if (b < c) {
          b++;
        } else {
          c--;
        }

        if (a > b || b > c) {
          cout << -1 << endl;
          break;
        }
      }
    }

    if (found) {
      cout << a << " " << b << " " << c << endl;
    }
  }

  return 0;
}
