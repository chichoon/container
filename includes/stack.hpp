/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:13:45 by jiychoi           #+#    #+#             */
/*   Updated: 2022/12/23 16:35:11 by jiychoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
# define STACK_HPP

namespace ft {
    template <typename T>
    class stack {
        private:
            T       *stack_arr;
        public:
            stack();
            ~stack();
            stack&  operator=(const stack& instance);

            T       top();
            bool    empty() const;
            size_t  size();

            void    push(const T& value);
            void    pop();
    };
}

#endif
