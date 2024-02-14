#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <iostream>

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