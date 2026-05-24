#ifndef CUTIL_MAKE_ARRAY_HPP
#define CUTIL_MAKE_ARRAY_HPP
#include <array>
#include <cstddef>

template <class T, size_t N>
constexpr auto make_array(T (&&values)[N]) -> std::array<T, N> {
    return std::to_array(values);
}

#endif // CUTIL_MAKE_ARRAY_HPP
