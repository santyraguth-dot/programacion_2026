#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    string codigo;
    int edad;
    float promedio;
    bool activo;

public:
    // Constructores
    Estudiante();
    Estudiante(string nombre, string codigo, int edad, float promedio, bool activo);

    // Setters
    void actualizarNombre(string nuevoNombre);
    void actualizarCodigo(string nuevoCodigo);
    void actualizarEdad(int nuevaEdad);
    void actualizarPromedio(float nuevoPromedio);
    void actualizarActivo(bool nuevoEstado);

    // Getters
    string obtenerNombre();
    string obtenerCodigo();
    int obtenerEdad();
    float obtenerPromedio();
    bool obtenerActivo();

    // Métodos de visualización
    void mostrarNombre();
    void mostrarCodigo();
    void mostrarEdad();
    void mostrarPromedio();
    void mostrarActivo();
    void mostrarInformacionCompleta();

    // Métodos de utilidad
    void incrementarEdad();
    void calcularEstadoAcademico();
};

#endif
