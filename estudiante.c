#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATERIAS 10

struct Materia {
    char nombre[50];
};

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Materia materias[MAX_MATERIAS];
    int numMaterias;
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

void eliminarMateria(struct Estudiante* estudiante, const char* nombreMateria) {
    int i;
    for (i = 0; i < estudiante->numMaterias; i++) {
        if (strcmp(estudiante->materias[i].nombre, nombreMateria) == 0) {
            break;
        }
    }

    if (i < estudiante->numMaterias) {
        for (int j = i; j < estudiante->numMaterias - 1; j++) {
            estudiante->materias[j] = estudiante->materias[j + 1];
        }
        estudiante->numMaterias--;
    } else {
        printf("Error: No se encontró la materia\n");
    }
}

void mostrarMaterias(struct Estudiante* estudiante) {
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        printf("Materia: %s\n", estudiante->materias[i].nombre);
    }
}