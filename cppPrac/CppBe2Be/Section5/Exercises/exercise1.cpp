#include <iostream>

using namespace std;

void say_hi() {

    cout << "Hi Frank!";

};

void sallys_dogs() {

    int x {3};

    cout << "Sally has " << x << " dogs.";

};

void date_of_birth() {
    int m {0};
    int d {0};
    int y {0};

    cin >> m >> d >> y;

    cout << "You born at " << m << "/" << d << "/" << y << endl;

}


int main(int argc, char *argv[]) {

    say_hi();
    cout << endl;
    sallys_dogs();
    cout << endl;
    date_of_birth();

    return 0;
}
