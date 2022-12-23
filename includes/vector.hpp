/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:14:48 by jiychoi           #+#    #+#             */
/*   Updated: 2022/12/23 16:40:59 by jiychoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>

namespace ft {
    template <typename T>
    class vector {
        private:
        public:
            vector() {
                std::cout << "vector constructor\n";
            }
            vector(const vector& instance);
            ~vector() {
                std::cout << "vector destructor\n";
            }
            vector&  operator=(const vector& instance);
    };
}

#endif
