#include <iostream>
#include <string.h>
#include <unordered_map>

using namespace std;

int main() {
    int n, a, b, i;
    string str;

    unordered_map<int, int> arr;

    cin >> n;

    while(n--) {
        cin >> str;

        if(str == "add") {
            cin >> a >> b;

            arr[a] = b;

        }
        else if(str == "remove") {
            cin >> a;

            arr.erase(a);
        }
        else {
            cin >> a;

            if(arr.find(a) == arr.end()) {
                cout << "None" << endl;
            }
            else {
                cout << arr[a] << endl;
            }
        }
    }

    return 0;
}