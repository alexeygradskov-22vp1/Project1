#pragma once
#include <exception>
#include <string>

class InvalidDataException : public std::exception {
private:
    std::string errorMessage;

public:
    InvalidDataException(const std::string& message) : errorMessage(message) {}

    const char* what() const noexcept override;
};