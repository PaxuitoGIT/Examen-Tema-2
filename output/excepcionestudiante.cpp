#include <stdexcept>

class FechaInvalidaException : public std::exception {
public:
    const char* what() const throw() {
        return "Error: Fecha inválida.";
    }
};