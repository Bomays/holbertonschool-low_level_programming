#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * of two diagonal of a square matrix
 *
 * @a: Aray in array - 2D
 * @size: matrix size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1_sum = 0;
	int diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += *(a + i * size + i);
		diag2_sum += *(a + i * size + (size - i - 1));
	}
	printf("%d, ", diag1_sum);
	printf("%d", diag2_sum);
	putchar('\n');
}
/**
 * diag1_sum - stock la somme 
 * diag1_sum += *(a + i * size + i):
 * donne la valeur de l’élément à la i-ème rangée
 * et à la i-ème colonne du tableau
 *
 * a = pointeur au premier element du tableau
 * size = taille de la rangée
 * i * size = indice du premier élément de la i° rangée du tableau
 * i = indice de l'élément dans la i° rangée
 * * () = valeur à l'adresse pointée
 *
 * diag2_sum += *(a + i * size + (size - i - 1)):
 * (...)
 * size -i -1 = pour la seconde diag afin de commencer par le dernier
 * element et ensuite avant dernier ainsi de suite*/
