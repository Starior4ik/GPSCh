#include <iostream>
#include <ctime>
#include <map>

using namespace std;
int main() {
    srand(time(0));
    int sum;

    map <int, int> Cubes;
    for (int i = 0; i < 1000; i++) 
    {
        sum = rand() % 6 + 1 + rand() % 6 + 1; //важно складывать именно два рандома
        //таким образом у нас получится что кубика два и теория вероятностей сработает

        Cubes[i + 1] = sum;
    }
    for (auto elms : Cubes)
    {
        cout << "N: " << elms.first << ' ' << "Sum: " << elms.second << endl;
    }
}

