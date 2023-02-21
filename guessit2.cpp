#include <iostream>
#include <cstdlib>
using namespace std;
int selectNumber (int low, int high) {
    return rand() % (high - low+1) + low;
}
char getHostAnswer(int X) {
    char answer;
    cout<< " Is " << X << " your number? \n";
    cin>>answer;
    return answer;
}
int main() {
    int X;
    char answer;
    int low = 1, high = 100;
    while (answer != '=') {
        X = selectNumber (low, high);
        answer = getHostAnswer(X);
        if (answer == '=') {
            cout << "Your number is " <<X<<"\n";
        }
        else if (answer == '>') {
            high = X-1;
        }
        else {
            low = X+1;
        }
    }
    return 0;

}
