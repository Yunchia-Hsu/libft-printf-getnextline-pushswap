/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:37:41 by yhsu              #+#    #+#             */
/*   Updated: 2023/10/26 12:37:44 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9') 
    {
        return (1);
    }
    else
        return (0);
}
/*
int main(void)
{
    int c;
    
    c = '7';
    printf("isdigit is : %d\n", isdigit(c));
    printf("ft is : %d", ft_isdigit (c));
}
*/