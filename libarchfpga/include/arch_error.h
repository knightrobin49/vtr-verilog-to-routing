#ifndef ARCH_ERROR_H
#define ARCH_ERROR_H

#include "vtr_error.h"
#include <cstdarg>

class ArchFpgaError : public vtr::VtrError {
    public:
        ArchFpgaError(std::string msg="", std::string new_filename="", size_t new_linenumber=-1)
            : vtr::VtrError(msg, new_filename, new_linenumber){}
};

void archfpga_throw(const char* filename, int line, const char* fmt, ...);

#endif
