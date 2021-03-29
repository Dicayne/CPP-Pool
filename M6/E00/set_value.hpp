/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_value.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:07:47 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/09 16:21:59 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_VALUE_HPP
#define SET_VALUE_HPP

#include "Scale.hpp"

void	set_value_i(Scale *sc, char *value);
void	set_value_c(Scale *sc, char *value);
void	set_value_f(Scale *sc, char *value);
void	set_value_d(Scale *sc, char *value);
void	set_value_s(Scale *sc, char *value);

#endif