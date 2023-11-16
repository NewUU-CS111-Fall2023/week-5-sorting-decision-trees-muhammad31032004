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
