#include "estudiante.h"
#include <iostream>
using namespace std;

// Constructor por defecto
Estudiante::Estudiante() {
    nombre = "";
    codigo = "";
    edad = 0;
    promedio = 0.0;
    activo = false;
}

// Constructor con parámetros
Estudiante::Estudiante(string nombre, string codigo, int edad, float promedio, bool activo) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->edad = edad;
    this->promedio = promedio;
    this->activo = activo;
}

// Setters
void Estudiante::actualizarNombre(string nuevoNombre) {
    nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(string nuevoCodigo) {
    codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        promedio = nuevoPromedio;
    } else {
        cout << "Error: El promedio debe estar entre 0.0 y 10.0" << endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado) {
    activo = nuevoEstado;
}

// Getters
string Estudiante::obtenerNombre() {
    return nombre;
}

string Estudiante::obtenerCodigo() {
    return codigo;
}

int Estudiante::obtenerEdad() {
    return edad;
}

float Estudiante::obtenerPromedio() {
    return promedio;
}

bool Estudiante::obtenerActivo() {
    return activo;
}

// Métodos de visualización
void Estudiante::mostrarNombre() {
    cout << "Nombre: " << nombre << endl;
}

void Estudiante::mostrarCodigo() {
    cout << "Código: " << codigo << endl;
}

void Estudiante::mostrarEdad() {
    cout << "Edad: " << edad << " años" << endl;
}

void Estudiante::mostrarPromedio() {
    cout << "Promedio: " << promedio << endl;
}

void Estudiante::mostrarActivo() {
    if (activo) {
        cout << "Estado: Activo" << endl;
    } else {
        cout << "Estado: Inactivo" << endl;
    }
}

void Estudiante::mostrarInformacionCompleta() {
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
}

// Métodos de utilidad
void Estudiante::incrementarEdad() {
    edad++;
}

void Estudiante::calcularEstadoAcademico() {
    cout << "Estado académico: ";

    if (promedio >= 9.0 && promedio <= 10.0) {
        cout << "Excelente";
    } else if (promedio >= 8.0) {
        cout << "Muy Bueno";
    } else if (promedio >= 7.0) {
        cout << "Bueno";
    } else if (promedio >= 6.0) {
        cout << "Regular";
    } else {
        cout << "Necesita Mejorar";
    }

    cout << endl;
}
