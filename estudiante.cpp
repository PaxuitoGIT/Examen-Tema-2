#pragma once
#include <iostream>
#include <string>
#include <vector>

class Estudiante {
    public:
    std::string nombre;
    int edad;
    float promedio;

void mostrarEstudiante() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;
}

struct Materia {
    std::string nombre;
}

void agregarMateria(const Materia& materia) {
    materias.push_back(materia);
}
