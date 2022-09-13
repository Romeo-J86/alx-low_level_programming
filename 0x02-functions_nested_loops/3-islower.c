#include "main.h"

/**
 * _islower - check description
 * Description - checks if a character is a lower case letter
 * @c : character to be checked the case
 * Return:0 or 1
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122){
        return (1);
    }else{
        return(0);
    }
}
