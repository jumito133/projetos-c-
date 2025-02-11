/*calcula a area e o perimetro de um circulo com raio*/

#include <iostream>

const float pi = 3.1415 ; /*numero do pi*/

using namespace std; /*usa o std*/

int main() {
    float raio;

    cout << "digite o raio do seu circulo" << endl;
    cin >> raio ;

    cout << "sua area e " << pi*raio*raio << endl;
    cout << "e seu perimetro e " << 2*pi*raio << endl;

}