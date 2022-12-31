/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 02:37:09 by jiychoi           #+#    #+#             */
/*   Updated: 2023/01/01 02:53:07 by jiychoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <iterator>

namespace ft {
template <class Iter>
struct iterator_traits {
    // template로 가져온 클래스에서의 :: 값은 typename으로 가져와야 한다
    typedef typename Iter::difference_type difference_type;
    typedef typename Iter::value_type value_type;
    typedef typename Iter::pointer pointer;
    typedef typename Iter::reference reference;
    typedef typename Iter::iterator_category iterator_category; // iterator의 특성
};

template <class T>
struct iterator_traits<T*> { // 포인터 T* 특수화 => 랜덤 액세스 가능
    typedef ptrdiff_t difference_type;
    typedef T value_type;
    typedef T* pointer;
    typedef T& reference;
    typedef std::random_access_iterator_tag iterator_category;
    // 포인터 (배열) 쓸 때는 랜덤액세스이므로 랜덤액세스 반복자 태그 지정
};

template <class T>
struct iterator_traits<const T*> { // 포인터 T* 특수화 => 랜덤 액세스 가능
    typedef ptrdiff_t difference_type;
    typedef T value_type;
    typedef const T* pointer;
    typedef const T& reference;
    typedef std::random_access_iterator_tag iterator_category;
    // 포인터 (배열) 쓸 때는 랜덤액세스이므로 랜덤액세스 반복자 태그 지정
};
}

// random access: 배열 (어느 인덱스든 바로 접근 가능) <- 벡터와 스택
// bidirectional: 트리 (순차적으로 접근해야만 도달 가능) <- 맵

#endif
