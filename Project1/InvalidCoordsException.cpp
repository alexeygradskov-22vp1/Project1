#include "InvalidDataException.h"

const char* InvalidDataException::what() const noexcept{
	return errorMessage.c_str();
}
