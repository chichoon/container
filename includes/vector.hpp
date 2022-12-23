/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:14:48 by jiychoi           #+#    #+#             */
/*   Updated: 2022/12/23 19:30:11 by jiychoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <memory>

namespace ft {
    template <typename T, class Allocator = std::allocator<T> >
    class vector {
        private:
            const Allocator&    _alloc;
            T*                  _array;
        public:
            typedef T                                           value_type;
            typedef Allocator                                   allocator_type;
            typedef typename allocator_type::reference          reference;
            typedef typename allocator_type::const_reference    const_reference;
            typedef typename allocator_type::size_type          size_type;
            typedef typename allocator_type::difference_type    difference_type;
            typedef typename allocator_type::pointer            pointer;
            typedef typename allocator_type::const_pointer      const_pointer;
            vector(void) {
                
            }
            vector(const allocator_type& alloc = Allocator()): _alloc(alloc) {
                _array = alloc.allocate(0);
                std::cout << "vector constructor 2\n";
            }
            // vector(size_t count, const T& value, const allocator_type& alloc) {
            //     std::cout << "vector constructor 3\n";
            // }
            // template <class InputIterator>
            // vector(InputIterator first, InputIterator last, const allocator_type& alloc) {
            //     std::cout << "vector constructor 4\n";
            // }
            // vector(const vector& other) {
            //     std::cout << "vector copy constructor\n";
            // }
            ~vector() {
                std::cout << "vector destructor\n";
            }
            vector&  operator=(const vector& instance);
    };
}

#endif
