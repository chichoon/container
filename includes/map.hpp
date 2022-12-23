/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiychoi <jiychoi@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:14:50 by jiychoi           #+#    #+#             */
/*   Updated: 2022/12/23 14:38:55 by jiychoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
# define MAP_HPP

namespace ft {
    class map {
        private:
        public:
            map();
            map(const map& instance);
            ~map();
            map&  operator=(const map& instance);
    }
}

#endif
