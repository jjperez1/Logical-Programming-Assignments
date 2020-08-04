#include <iostream>
using namespace std;
#include <string>
int main(){
    float horasT1, horasT2, salario1, salario2, paga1, paga2;
    string trabajador1, trabajador2, calcular;
    cout << "Por favor, ingrese el nombre y apellido del trabajador 1:" "\n";
    getline(cin, trabajador1);
    cout << "Por favor, ingrese el numero de horas trabajadas por el trabajador 1:" "\n";
    cin >> horasT1;
    cout << "Por favor, ingrese el salario que recibe por hora el trabajador 1:" "\n";
    cin >> salario1;
    cout << "\n\n";
    cout << "Por favor, ingrese el nombre y apellido del trabajador 2:" "\n";
    getline(cin.ignore(1,'\n'), trabajador2);
    cout << "Por favor, ingrese el numero de horas trabajadas por el trabajador 2:" "\n";
    cin >> horasT2;
    cout << "Por favor, ingrese el salario que recibe por hora el trabajador 2:" "\n";
    cin >> salario2;
    //calculate pay
    cout << "Desea calcular la paga? (si/no) \n";
    cin >> calcular;
    if (calcular == "si"){
        cout << "Nombre de Empleado, Horas, Pago:" "\n";
        cout << trabajador1 << ", " << horasT1 << ", " << salario1 * horasT1;
        cout << "\n";
        cout << trabajador2 << ", " << horasT2 << ", " << salario2 * horasT2;
    }
    else if (calcular == "no") {
        cout << "El programa ha terminado \n";
    }
}