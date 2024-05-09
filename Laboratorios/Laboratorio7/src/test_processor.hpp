#ifndef TESTPROCESSOR_HPP
#define TESTPROCESSOR_HPP

#include <string>

// Clase procesador de texto
class TextProcessor {
    private:
        // Nombre del archivo de entrada
        std::string input_filename;

        // Nombre del archivo de salida
        std::string output_filename;
    
    public:
        // Constructor
        TextProcessor(const std::string& input_filename, const std::string& output_filename);

        // Funcion que reemplaza strings
        void replace(const std::string& search_pattern, const std::string& replace_string);
};

#endif // TESTPROCESSOR_HPP