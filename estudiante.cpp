#include <iostream>
#include <string>
#include <vector>

struct Materia {
    std::string nombre;
};

struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;
};

class Estudiante {
public:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<Materia> materias;
    std::vector<Asistencia> asistencias;

    void mostrarEstudiante() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
    }

    void agregarMateria(const Materia& materia) {
        materias.push_back(materia);
    }

    void eliminarMateria(const std::string& nombreMateria) {
    for (std::size_t i = 0; i < materias.size(); i++) {
        if (materias[i].nombre == nombreMateria) {
            materias.erase(materias.begin() + i);
            break;
        }
    }
}
    
    void mostrarMaterias() const {
    for (std::size_t i = 0; i < materias.size(); i++) {
        std::cout << materias[i].nombre << std::endl;
    }
}
    void registrarAsistencia(const Asistencia& asistencia) {
        asistencias.push_back(asistencia);
    }

    void mostrarAsistencias() const {
        for (std::size_t i = 0; i < asistencias.size(); i++) {
            std::cout << asistencias[i].fecha << " - " << asistencias[i].materia << " - " << asistencias[i].estado << std::endl;
        }
    }
};