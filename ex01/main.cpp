/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:13:33 by mneri             #+#    #+#             */
/*   Updated: 2024/01/23 17:28:17 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void isGreaterTen(int i)
{
	if(i > 10)
	{
		std::cout << i << " is greater than 10\n";
	}
	else
		std::cout << i << " is NOT greater than 10\n";
}

int main()
{
	int arr[5] = 
	{
		10, 5, 12, 15, 1
	};
    iter(arr, 5, &isGreaterTen);
}