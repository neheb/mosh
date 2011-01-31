#include <vector>
#include <deque>
#include <wchar.h>
#include <string>

#include "terminal.hpp"

namespace Parser {
  class Action;
}

template class std::vector<Parser::Action *>;
template class std::vector<Terminal::Cell>;
template class std::deque<Terminal::Row>;
template class std::vector<Terminal::Cell *>;
template class std::vector<wchar_t>;
template class std::vector<int>;
template class std::map<std::string, Terminal::Function>;
template class std::vector<bool>;