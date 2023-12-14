#include <stdexcept>
#include <iostream>

class FechaInvalidaException : public std::exception {
public:
    const char* what() const throw() {
        return "Error: Fecha inválida.";
    }
};

class MateriaNoRegistradaException : public std::exception {
public:
    const char* what() const throw() {
        return "Error: Materia no registrada.";
    }
};

int main() {
    try { throw FechaInvalidaException();
          throw MateriaNoRegistradaException();
} 
catch (const FechaInvalidaException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const MateriaNoRegistradaException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}