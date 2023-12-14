#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATERIAS 50

struct Materia {
    char nombre[50];
}

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

void mostrarEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

void agregarMateria(struct Estudiante* estudiante, const struct Materia* materia) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        estudiante->materias[estudiante->numMaterias] = *materia;
        estudiante->numMaterias++;
    } else {
        printf("Error: No se pueden agregar más materias\n");
    }
}