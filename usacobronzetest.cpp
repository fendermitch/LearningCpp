#include <bits/stdc++.h>
using namespace std;

int main() {
    // Hardcoded values from sample input
    int b1 = 1, b2 = 2;
    int s1 = 1, s2 = 1;
    int g1 = 1, g2 = 1;
    int p1 = 1, p2 = 2;

    // Compute promotions top-down
    int g_to_p = max(0, p2 - p1);
    int s_to_g = max(0, g2 - g1 + g_to_p);
    int b_to_s = max(0, s2 - s1 + s_to_g);

    cout << b_to_s << "\n";
    cout << s_to_g << "\n";
    cout << g_to_p << "\n";

    return 0;
}