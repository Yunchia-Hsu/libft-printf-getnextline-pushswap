/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <yhsu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:37:31 by yhsu              #+#    #+#             */
/*   Updated: 2023/10/26 12:37:37 by yhsu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}