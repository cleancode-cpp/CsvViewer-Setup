#pragma once
#include <string>
#include <vector>

namespace hints {

using String = std::string;
using Strings = std::vector<String>;
using Widths = std::vector<int>;

auto splitString(const String &, char delim) -> Strings;

auto formatRow(const Widths &, const Strings &, char delim) -> String;

auto formatSplitter(const Widths &, const char line, char delim) -> String;

} // namespace hints
