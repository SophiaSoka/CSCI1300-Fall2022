#include <iostream>
using namespace std;

int main(){
    int floz;
    cout << "How much water have you drank?" << endl;
    cin >> floz;

    if (floz <= 32){
        cout << "You’re very, very dehydrated! Get that water in! You have" << 64 - floz << " fl oz left to drink." << endl;
    }
    else if (floz < 64){
        cout << "You're doing great, but you're still halfway to your goal! Get that water in! You have " << 64 -floz << " fl oz left to drink" << endl;
    }
    else {
        cout << "You hit your goal!" << endl;
    }

    return 0;

}