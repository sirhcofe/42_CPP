/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenlee <chenlee@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:46:37 by chenlee           #+#    #+#             */
/*   Updated: 2023/05/24 15:57:51 by chenlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_template[4];
	public:
		MateriaSource();
		// MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();
		MateriaSource&	operator=(const MateriaSource& other);

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
};

#endif
