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
