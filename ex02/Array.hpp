/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:37:05 by mneri             #+#    #+#             */
/*   Updated: 2024/01/25 17:01:36 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class Array
{
	private:
		T *_array;
		unsigned int _n;
	public:
		Array()
		{
			_n = 0;
			_array = new T[0];
		}
		Array(unsigned int n)
		{
			_n = n;
			_array = new T[n];
		}
		Array(const Array &other) : _n(other._n)
		{
			_array = new T[_n];
			for(unsigned int i = 0; i < _n; i++)
			{
				this->_array[i] = other._array[i];
			}
		}
		Array &operator=(const Array &other)
		{
			if(this != &other)
			{
				delete _array;
				_n = other._n;
				_array = new T[_n];
				for(int i = 0; i < _n; i++)
				{
					this->_array[i] = other._array[i];
				}
			}
			return *this;
		}
		T &operator[](unsigned int i)
		{
			if(i >= this->_n)
				throw std::exception();
			return this->_array[i];
		}
		int size()
		{
			return this->_n;
		}
};