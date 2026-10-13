#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

int main() {
    // Configurar la semilla para generar datos aleatorios diferentes en cada ejecución
    srand(time(0));

    // Definición de las dimensiones de la matriz tridimensional
    // 3 secciones, máximo 30 alumnos por sección
    // Cada alumno tiene 9 datos: índice [0] para el código, e índices [1] al [8] para las 8 notas
    int curso[3][30][9];

    // Arreglo auxiliar para almacenar la cantidad real de alumnos por sección (por ejemplo, 30 en cada una)
    int alumnosPorSeccion[3] = {30, 30, 30};

    // 1. LLENADO ALEATORIO DE LA MATRIZ TRIDIMENSIONAL
    for (int s = 0; s < 3; s++) {
        for (int a = 0; a < alumnosPorSeccion[s]; a++) {
            // Generar código aleatorio de 3 dígitos (entre 100 y 999)
            curso[s][a][0] = 100 + rand() % 900;

            // Generar 8 notas aleatorias enteras (entre 0 y 20)
            for (int n = 1; n <= 8; n++) {
                curso[s][a][n] = rand() % 21;
            }
        }
    }

    std::cout << "--- MATRIZ INICIAL GENERADA CON EXITO ---" << std::endl;

    // 2. PROCESO DE EVALUACIÓN Y ELIMINACIÓN POR DESPLAZAMIENTO
    for (int s = 0; s < 3; s++) {
        int a = 0;
        // Se usa un bucle while porque el límite de alumnos (alumnosPorSeccion[s]) se reducirá dinámicamente
        while (a < alumnosPorSeccion[s]) {
            
            // Calcular la suma de las 8 notas de forma manual
            int sumaNotas = 0;
            for (int n = 1; n <= 8; n++) {
                sumaNotas += curso[s][a][n];
            }
            
            // Calcular el promedio entero (división entre 8)
            int promedio = sumaNotas / 8;

            // Condicional: Si el promedio es menor a 6, se elimina al alumno
            if (promedio < 6) {
                // Desplazar todos los alumnos siguientes una posición hacia arriba para "borrar" al actual
                for (int k = a; k < alumnosPorSeccion[s] - 1; k++) {
                    // Copiar los 9 datos del alumno siguiente al actual
                    for (int d = 0; d < 9; d++) {
                        curso[s][k][d] = curso[s][k + 1][d];
                    }
                }
                // Disminuir la cantidad total de alumnos válidos en esta sección
                alumnosPorSeccion[s]--;
                
                // NOTA: No incrementamos 'a' aquí, ya que el alumno que acabamos de mover 
                // a la posición actual tiene que ser evaluado en la siguiente iteración.
            } else {
                // Si el promedio es correcto (6 o más), avanzamos al siguiente alumno
                a++;
            }
        }
    }

    // 3. MOSTRAR LA INFORMACIÓN FINAL DESPUÉS DE LA ELIMINACIÓN
    std::cout << "\n--- INFORMACION DEL CURSO DESPUES DE LA ELIMINACION (< 6) ---" << std::endl;
    for (int s = 0; s < 3; s++) {
        std::cout << "\n=======================================" << std::endl;
        std::cout << " SECCION " << (s + 1) << " (Alumnos restantes: " << alumnosPorSeccion[s] << ")" << std::endl;
        std::cout << "=======================================" << std::endl;

        if (alumnosPorSeccion[s] == 0) {
            std::cout << "No quedaron alumnos en esta seccion." << std::endl;
        } else {
            for (int a = 0; a < alumnosPorSeccion[s]; a++) {
                std::cout << "Alumno Codigo [" << curso[s][a][0] << "] -> Notas: ";
                
                // Mostrar las 8 notas del alumno
                for (int n = 1; n <= 8; n++) {
                    std::cout << curso[s][a][n] << " ";
                }
                
                // Recálculo rápido solo para mostrar el promedio final en pantalla
                int sumaFinal = 0;
                for (int n = 1; n <= 8; n++) {
                    sumaFinal += curso[s][a][n];
                }
                std::cout << "| Promedio: " << (sumaFinal / 8) << std::endl;
            }
        }
    }

    return 0;
}
