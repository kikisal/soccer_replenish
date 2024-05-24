#pragma once

#include <vector>


namespace engy {

template <typename T>
struct Vector : std::vector<T> {
    using std::vector<T>::std::vector<T>;
};

};
