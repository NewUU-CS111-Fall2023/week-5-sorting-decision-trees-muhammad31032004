#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void rearrangeSoldiers(vector<string>& soldiers) {
    const size_t soldierCount = soldiers.size();

    for (size_t i = 0; i < soldierCount - 1; i += 2) {
        string temp = soldiers[i];
        soldiers[i] = soldiers[i + 1];
        soldiers[i + 1] = temp;
    }
    for (const string& soldier : soldiers) {
        cout << soldier << " ";
    }
}

int main() {
    vector<string>vector;
    for (int i=0; i<5; i++) {
        string c;
        vector.push_back(c);
    }
    rearrangeSoldiers(vector);
}