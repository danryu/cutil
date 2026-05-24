#ifndef CUTIL_SPAN_HPP
#define CUTIL_SPAN_HPP
#include <span>
#include <string_view>

template <class T = std::byte>
    requires(sizeof(T) == sizeof(char))
auto to_span(const std::string_view str) -> std::span<const T> {
    return std::span(std::bit_cast<const T*>(str.data()), str.size());
}

template <class T>
auto from_span(const T& data) -> std::string_view {
    return std::string_view(std::bit_cast<const char*>(data.data()), data.size());
}

#endif // CUTIL_SPAN_HPP
