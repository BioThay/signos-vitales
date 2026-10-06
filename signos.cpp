//Thay creo el repositorio jiji
#include <iostream>
#include <string>
using namespace std;

double fahrenheitACelsius(double f){
 return (f-32)*5.0/9.0;
}
string clasificarFrecuencia(int lpm) {

    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    } else {
        return "Taquicardia";
    }
}
int main() {
    double f;
    int lpm;

    cout<<"Ingrese la temperatura en fahrenheit:";
    cin>>f;

    double tempC= fahrenheitACelsius(f);
    
    cout<<"La temperatura en celsius es:"<< tempC << endl;


    cout << "Ingrese la frecuencia cardiaca (lpm): ";
    cin >> lpm;
   cout << "Clasificacion: "
              << clasificarFrecuencia(lpm)
              << endl;

return 0;

}
