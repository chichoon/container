/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_containers.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:49:04 by jiychoi           #+#    #+#             */
/*   Updated: 2023/01/01 02:36:00 by jiychoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINERS_HPP
# define FT_CONTAINERS_HPP

#include "pair.hpp"
#include "vector.hpp"

#include <iostream>

namespace ft {
template <class InputIt1, class InputIt2>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2) {
    while (first1 != last1) {
        if (*first1 != *first2)
            return false;
        first1++;
        first2++;
    }

    return true;
}

template <class InputIt1, class InputIt2>
bool lexicographical_compare(InputIt1 first1, InputIt1 last1,
    InputIt2 first2, InputIt2 last2) {
    while (first1 != last1) {
        if (first2 == last2 || *first2 < *first1)
            return false;
        else if (*first1 < *first2)
            return true;
        first1++;
        first2++;
    }
    return (first2 != last2);
}

template <bool Cond, class T = void>
struct enable_if { }; // 베이스
template <class T> // 특수화됨
struct enable_if<true, T> {
    typedef T type;
};

template <class T>
struct is_integral { // 베이스
    static const bool value = false;
};

// template specialization (템플릿 특수화)
struct is_integral<bool> { // 특수화됨
    static const bool value = true;
};

struct is_integral<char> { // 특수화됨
    static const bool value = true;
};

struct is_integral<char16_t> { // 특수화됨
    static const bool value = true;
};

struct is_integral<char32_t> { // 특수화됨
    static const bool value = true;
};

struct is_integral<wchar_t> { // 특수화됨
    static const bool value = true;
};

struct is_integral<signed char> { // 특수화됨
    static const bool value = true;
};

struct is_integral<short int> { // 특수화됨
    static const bool value = true;
};

struct is_integral<int> { // 특수화됨
    static const bool value = true;
};

struct is_integral<long int> { // 특수화됨
    static const bool value = true;
};

struct is_integral<long long int> { // 특수화됨
    static const bool value = true;
};

struct is_integral<unsigned char> { // 특수화됨
    static const bool value = true;
};

struct is_integral<unsigned short int> { // 특수화됨
    static const bool value = true;
};

struct is_integral<unsigned int> { // 특수화됨
    static const bool value = true;
};

struct is_integral<unsigned long int> { // 특수화됨
    static const bool value = true;
};

struct is_integral<unsigned long long int> { // 특수화됨
    static const bool value = true;
};
}

#endif
