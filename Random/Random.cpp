// Random.cpp : Defines the entry point for the application.
//

#include "framework.h"
#include "Random.h"

using namespace std;
int main() {
    int i;
    for (i = 0; i < 5; i++) {
        cout << rand() << endl;
    }
    return 0;
}