#pragma once

#include <map>

namespace engy {

template <typename K, typename V>
struct Map : std::map<K, V> {
    using std::map<K, V>::std::map<K, V>;
};

};
