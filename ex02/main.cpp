/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:37:01 by mneri             #+#    #+#             */
/*   Updated: 2024/01/31 15:27:00 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> arr(10);
    for(int i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	Array<int> copy = arr;
	Array<int>copyConstruct = Array<int>(arr);
    try
    {
		std::cout << "array size is: " << arr.size() << std::endl;
        std::cout << arr[6] << std::endl;
        std::cout << copy[6] << std::endl;
        std::cout << copyConstruct[6] << std::endl;
        std::cout << arr[50] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "index is out of range" << std::endl;
    }
    return (0);
}