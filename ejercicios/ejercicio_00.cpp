#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 20

struct Estudiante {
    char nombre[100];
    char codigo[20];
    int edad;
    float promedio;
    bool activo;
};

/* Funciones para actualizar */
void actualizarNombre(struct Estudiante *e, char nuevoNombre[]) {
    strcpy(e->nombre, nuevoNombre);
}

void actualizarCodigo(struct Estudiante *e, char nuevoCodigo[]) {
    strcpy(e->codigo, nuevoCodigo);
}

void actualizarEdad(struct Estudiante *e, int nuevaEdad) {
    e->edad = nuevaEdad;
}

void actualizarPromedio(struct Estudiante *e, float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        e->promedio = nuevoPromedio;
    }
}

void actualizarActivo(struct Estudiante *e, bool nuevoEstado) {
    e->activo = nuevoEstado;
}

/* Mostrar información */
void mostrarInformacionCompleta(struct Estudiante e) {
    printf("Nombre: %s\n", e.nombre);
    printf("Codigo: %s\n", e.codigo);
    printf("Edad: %d años\n", e.edad);
    printf("Promedio: %.2f\n", e.promedio);

    if (e.activo)
        printf("Estado: Activo\n");
    else
        printf("Estado: Inactivo\n");

    printf("---------------------\n");
}

int main() {
    struct Estudiante estudiantes[MAX];
    int total = 0;
    int opcion;

    do {
        printf("\nMENU\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar estudiante por codigo\n");
        printf("3. Mostrar todos\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        getchar();

        if (opcion == 1) {
            char texto[100];
            int estado;

            printf("Nombre: ");
            fgets(texto, 100, stdin);
            texto[strcspn(texto, "\n")] = 0;
            actualizarNombre(&estudiantes[total], texto);

            printf("Codigo: ");
            fgets(texto, 20, stdin);
            texto[strcspn(texto, "\n")] = 0;
            actualizarCodigo(&estudiantes[total], texto);

            printf("Edad: ");
            scanf("%d", &estudiantes[total].edad);

            printf("Promedio: ");
            scanf("%f", &estudiantes[total].promedio);

            printf("Activo (1 = Si, 0 = No): ");
            scanf("%d", &estado);
            estudiantes[total].activo = estado;

            getchar();
            total++;

            printf("Estudiante agregado.\n");
        }

        else if (opcion == 2) {
            char codigo[20];
            bool encontrado = false;

            printf("Codigo a buscar: ");
            fgets(codigo, 20, stdin);
            codigo[strcspn(codigo, "\n")] = 0;

            for (int i = 0; i < total; i++) {
                if (strcmp(estudiantes[i].codigo, codigo) == 0) {
                    mostrarInformacionCompleta(estudiantes[i]);
                    encontrado = true;
                }
            }

            if (!encontrado) {
                printf("Estudiante no encontrado.\n");
            }
        }

        else if (opcion == 3) {
            for (int i = 0; i < total; i++) {
                mostrarInformacionCompleta(estudiantes[i]);
            }
        }

    } while (opcion != 4);

    return 0;
}

