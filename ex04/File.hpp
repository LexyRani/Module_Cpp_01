#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <iostream>

#define MAGENTA "\033[95m"
#define WHITE "\033[37m"
#define GREY  "\033[90m"
#define RED  "\033[91m"
#define DRED  "\033[31m"
#define GREEN  "\033[92m"
#define DGREEN  "\033[32m"
#define YELLOW  "\033[93m"
#define DYELLOW  "\033[33m"
#define BLUE "\033[94m"
#define DBLUE  "\033[34m"
#define DMAGENTA  "\033[35m"
#define CYAN  "\033[96m"
#define DCYAN  "\033[36m"
#define RESET "\033[0m"

// FORMAT
#define BOLD  "\033[1m"
#define ITALIC  "\033[3m"
#define UNDERLINE  "\033[4m"
#define STRIKETHROUGH  "\033[9m"

class File 
{
    private:
        std::string _filename;
    public:
        File(void);
        File(std::string filename);
        ~File(void);
        std::string getName(void);
};
#endif