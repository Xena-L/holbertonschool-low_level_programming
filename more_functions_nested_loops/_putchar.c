#include "main.h"
#include <unistd.h>

/**
* _putchar - écrit le caractère c sur la sortie standard
* @c: caractère à afficher
*
* Return: 1 en cas de succès
*/

int _putchar(char c)
{
return write(1, &c, 1);
}
