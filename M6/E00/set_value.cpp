/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_value.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoreau <vmoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:07:47 by vmoreau           #+#    #+#             */
/*   Updated: 2021/03/09 15:08:22 by vmoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set_value.hpp"
#include <cmath>
void	set_value_i(Scale *sc, char *value)
{
	sc->set_int(atoi(value));
	sc->set_float(static_cast<float>(sc->get_int()));
	sc->set_double(static_cast<double>(sc->get_int()));
	sc->set_char(static_cast<char>(sc->get_int()));
}

void	set_value_c(Scale *sc, char *value)
{
	sc->set_char(value[0]);
	sc->set_int(sc->get_char());
	sc->set_float(static_cast<float>(sc->get_int()));
	sc->set_double(static_cast<double>(sc->get_int()));
}

void	set_value_f(Scale *sc, char *value)
{
	sc->set_float(atof(value));
	sc->set_int(static_cast<int>(sc->get_float()));
	sc->set_double(static_cast<double>(sc->get_float()));
	sc->set_char(static_cast<char>(sc->get_float()));
	if (sc->get_float() > 2147483647 || sc->get_float() < 2147483649)
		sc->set_type("SCIENCE");
}

void	set_value_d(Scale *sc, char *value)
{
	sc->set_double(atof(value));
	sc->set_int(static_cast<int>(sc->get_double()));
	sc->set_float(static_cast<double>(sc->get_double()));
	sc->set_char(static_cast<char>(sc->get_double()));
	if (sc->get_float() > 2147483647 || sc->get_float() < 2147483649)
		sc->set_type("SCIENCE");
}

void	set_value_s(Scale *sc, char *value)
{
	std::string sci(value);

	if (sci == "nan" || sci == "nanf")
	{
		sc->set_double(NAN);
		sc->set_float(NAN);
	}
	else if (sci == "+inf" || sci == "+inff")
	{
		sc->set_double(+INFINITY);
		sc->set_float(+INFINITY);
	}
	else if (sci == "-inf" || sci == "-inff")
	{
		sc->set_double(-INFINITY);
		sc->set_float(-INFINITY);
	}
}