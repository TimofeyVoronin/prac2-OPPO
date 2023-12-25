#pragma once

#include <stdexcept>
#include <string>
#include "../../../pr3oppo/pr3-OPPO/SeaTest/pch.h"

class FileError : public std::runtime_error {
public:
    explicit FileError(const std::string& message) : std::runtime_error(message) {}
};
