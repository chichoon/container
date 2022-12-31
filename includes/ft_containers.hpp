/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_containers.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 14:49:04 by jiychoi           #+#    #+#             */
/*   Updated: 2023/01/01 02:02:59 by jiychoi          ###   ########.fr       */
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
}
}

#endif
