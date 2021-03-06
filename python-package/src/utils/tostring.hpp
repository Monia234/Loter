#include <sstream>
#include <string>

namespace patch {
  template < typename T> std::string to_string(const T& n) {
    std::ostringstream stm;
    stm << n;
    return stm.str();
  }
}
