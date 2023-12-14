#pragma once
#include <iostream>
#include <string>
#include <vector>

struct Materia {
    std::string nombre;
};

class Estudiante {
public:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<Materia> materias;

    void mostrarEstudiante() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
    }

    void agregarMateria(const Materia& materia) {
        materias.push_back(materia);
    }

    void eliminarMateria(const std::string& nombreMateria) {
        for (int i = 0; i < materias.size(); i++) {
            if (materias[i].nombre == nombreMateria) {
                materias.erase(materias.begin() + i);
                break;
            }
        }
    }
};