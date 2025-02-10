#include <iostream>  /*adiciona um comentario no meu codigo*/

using namespace std; 


int main() {

int x , y;   /*cria as variaveis*/
string sign;

cout << "type one number ";  /*pega o primeiro numero*/
cin >> x ;
cout << "type of operation ";
cin >> sign;
cout << "second number ";
cin >> y;
if (sign == "+")
{
   cout << x + y << endl;
}

if (sign == "-"){
   cout << x - y << endl;
}

if (sign == "*","x"){
   cout << x * y << endl;
}

if (sign == "/"){
   cout << x / y << endl;
}
return 0;
}
