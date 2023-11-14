#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

int main() {
    int n, a, b, i;
    char str[10];

    vector<pair<int, int> > arr;

    cin >> n;

    while(n--) {
        cin >> str;

        if(strcmp(str, "add") == 0) {
            scanf("%d %d", &a, &b);

            for(i = 0; i < arr.size(); i++) {
                if(arr[i].first == a) {
                    arr[i].second = b;
                }
            }

            if(i >= arr.size()) {
                arr.push_back({a, b});
            }
        }
        else if(strcmp(str, "find") == 0) {
            scanf("%d", &a);
            
            for(i = 0; i < arr.size(); i++) {
                if(arr[i].first == a) {
                    cout << arr[i].second << endl;
                    break;
                }
            }
            
            if(i >= arr.size()) {
                cout << "None" << endl;
            }
        }
        else {
            scanf("%d", &a);

            for(i = 0; i < arr.size(); i++) {
                if(arr[i].first == a) {
                    arr.erase(arr.begin() + i);
                    break;
                }
            }
        }
    }

    return 0;
}