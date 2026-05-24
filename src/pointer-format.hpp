#ifndef CUTIL_POINTER_FORMAT_HPP
#define CUTIL_POINTER_FORMAT_HPP
#include <format>

// until C++26,P2510
template <class T, class CharT>
struct std::formatter<T*, CharT> : std::formatter<void*, CharT> {};

#endif // CUTIL_POINTER_FORMAT_HPP
