//Thay creo el repositorio jiji
#include <iostream>
using namespace std;
double fahrenheitACelsius(double f){
 return (f-32)*5.0/9.0;
}
int main() {
    double f;

    cout<<"Ingrese la temperatura en fahrenheit:";
    cin>>f;

    double tempC= fahrenheitACelsius(f);
    
    cout<<"La temperatura en celsius es:"<< tempC << endl;

return 0;
}