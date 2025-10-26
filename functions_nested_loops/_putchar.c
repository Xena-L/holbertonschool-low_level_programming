#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur la sortie standard
 * @c: caractère à écrire
 *
 * Return: 1 si succès, -1 si erreur
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

