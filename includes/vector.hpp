/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:14:48 by jiychoi           #+#    #+#             */
/*   Updated: 2023/01/01 01:30:47 by jiychoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <iostream>
#include <memory>

namespace ft {
    template <typename T, class Allocator = std::allocator<T> >
    class vector {
    public:
        typedef T value_type;
        typedef Allocator allocator_type;
        typedef typename allocator_type::reference reference;
        typedef typename allocator_type::const_reference const_reference;
        typedef typename allocator_type::size_type size_type;
        typedef typename allocator_type::difference_type difference_type;
        typedef typename allocator_type::pointer pointer;
        typedef typename allocator_type::const_pointer const_pointer;

    private:
        allocator_type _alloc;
        pointer _base_ptr;
        size_type _size;
        size_type _capacity;

    public:
        explicit vector(const allocator_type& alloc = allocator_type()) // 암묵적 생성자 형변환 금지
            : _alloc(alloc)
            , _base_ptr(0)
            , _size(0)
            , _capacity(0) { }

        explicit vector(size_type count, value_type value, const allocator_type& alloc = allocator_type())
            : _alloc(alloc)
            , _size(count)
            , _capacity(count) {
            _base_ptr = _alloc.allocate(count);
            for (size_type i = 0; i < count; i++)
                _base_ptr[i] = value;
        }

        template <class Iterator>
        vector(Iterator first, Iterator last,
            const allocator_type& alloc = allocator_type())
            : _alloc(alloc)
            , _size(last - first + 1)
            , _capacity(last - first + 1) {
            _base_ptr = _alloc.allocate(_size);
        }

        vector(const vector& other) { std::cout << "vector copy constructor\n"; }

        ~vector() { std::cout << "vector destructor\n"; }

        vector& operator=(const vector& instance);
    };
}

#endif
