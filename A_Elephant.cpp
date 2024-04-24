#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

  
    int fullSteps = x / 5;
    int remainingDistance = x % 5;

    
    int minSteps = fullSteps + (remainingDistance > 0 ? 1 : 0);

    cout << minSteps << endl;

    return 0;
}
