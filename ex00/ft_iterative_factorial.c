/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:48:45 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/25 16:36:08 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int main()
{
	int i;
	int n;
	n=5;
	unsigned long long fact = 1;
	for (i = 1; i <= n; ++i)
	{
		fact *= 1;
	}
	printf("factorial of %d = %llu", n, fact);
	return 0;
}

