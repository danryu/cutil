#ifndef CUTIL_CONCAT_HPP
#define CUTIL_CONCAT_HPP
#include <cstring>
#include <vector>

template <class T = std::byte>
auto copy(const auto a) -> std::vector<T> {
    auto ret = std::vector<T>(a.size());
    std::memcpy(ret.data(), a.data(), a.size() * sizeof(T));
    return ret;
}

template <class T = std::byte>
auto concat(const auto& a, const auto& b) -> std::vector<T> {
    auto ret = std::vector<T>(a.size() + b.size());
    std::memcpy(ret.data(), a.data(), a.size() * sizeof(T));
    std::memcpy(ret.data() + a.size(), b.data(), b.size() * sizeof(T));
    return ret;
}

#endif // CUTIL_CONCAT_HPP
