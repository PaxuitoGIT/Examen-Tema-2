#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATERIAS 10
#define MAX_ASISTENCIAS 100

struct Materia {
    char nombre[50];
};

struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[10];
};


struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Materia materias[MAX_MATERIAS];
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int numMaterias;
    int numAsistencias;
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

void registrarAsistencia(struct Estudiante* estudiante, const struct Asistencia* asistencia) {
    if (estudiante->numAsistencias < MAX_ASISTENCIAS) {
        estudiante->asistencias[estudiante->numAsistencias] = *asistencia;
        estudiante->numAsistencias++;
    } else {
        printf("Error: No se pueden registrar más asistencias\n");
    }
}

void mostrarAsistencias(struct Estudiante* estudiante) {
    for (int i = 0; i < estudiante->numAsistencias; ++i) {
        printf("Fecha: %s, Materia: %s, Estado: %s\n", estudiante->asistencias[i].fecha, estudiante->asistencias[i].materia, estudiante->asistencias[i].estado);
    }
}