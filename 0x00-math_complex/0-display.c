*/
* 0-display.c
* Author: Rodrigo Zárate Algecira
* Date: July 22, 2021
*/

**/
* display_complex_number - Display complex number
* @c: Complex number
*/

void display_complex_number(complex c)
{
printf("%f%c%fi",creal(c),(cimag(c)>=0.0f)? '+':'\0',cimag(c));
}
