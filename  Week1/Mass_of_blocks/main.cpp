#include <iostream>

using namespace std;

int main() {
    uint64_t countBloks;
    uint64_t densityBloks;
    uint64_t Width;
    uint64_t height;
    uint64_t length;
    uint64_t volumeSumBloks = 0;


    cin >> countBloks >> densityBloks;
    while (countBloks-- > 0) {
        cin >> Width >> height >> length;
        volumeSumBloks += (Width * height * length);
    }
    volumeSumBloks *= densityBloks;
    cout << volumeSumBloks << endl;
}
