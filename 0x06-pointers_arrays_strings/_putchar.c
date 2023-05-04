#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                                 
/**                                                                                                                
 * _putchar - print c to stdout                                                                                          
 * @c: print a char                                                                                                         
 *                                                                                                                                      
 * Return: 1 success.                                                                                                                
 * if -1 is returned, that means error.                                                                            
 */                                                                                                                                     
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
return (write(1, &c, 1));                                                                                                       
}
