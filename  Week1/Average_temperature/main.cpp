#include <iostream>
#include <vector>

using namespace std;

int main() {
    int32_t numberDays;
    vector<int32_t> temperatureDays;
    int32_t temperature;
    int64_t sum = 0;
    int32_t countTemp = 0;

    cin >> numberDays;
    while (numberDays-- > 0) {
        cin >> temperature;
        temperatureDays.push_back(temperature);
        sum += temperature;
    }
    sum /= static_cast<int64_t>(temperatureDays.size());
    for (auto temp : temperatureDays) {
        if (temp > sum)
            ++countTemp;
    }
    cout << countTemp << endl;
    for (size_t i = 0; i < temperatureDays.size(); i++) {
        if (temperatureDays[i] > sum) {
            cout << i;
            if (--countTemp == 0)
                cout << endl;
            else
                cout << " ";
        }
    }
}
