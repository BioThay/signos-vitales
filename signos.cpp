//Thay creo el repositorio jiji

#include <iostream>
#include <string>

std::string clasificarFrecuencia(int lpm) {

    if (lpm < 60) {
        return "Bradicardia";
    } else if (lpm <= 100) {
        return "Normal";
    } else {
        return "Taquicardia";
    }
}

int main() {
    int lpm;

    std::cout << "Ingrese la frecuencia cardiaca (lpm): ";
    std::cin >> lpm;
    std::cout << "Clasificacion: "
              << clasificarFrecuencia(lpm)
              << std::endl;

return 0;

}
