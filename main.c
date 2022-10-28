#include <stdio.h>

/*1)Declarar las variables para gestionar los datos de un centro de
trabajo colaborativo:
 
● Un identificador numérico del centro.
● El tipo de centro, dependiendo de sus características principales. Puede ser uno de
los siguientes: STARTUPS, FREELANCERS, RURAL, SPECIALIZED,
GENERALIST.
● La categoría del centro, que indica su calidad. Será un número entero.
● El número de espacios de trabajo para alquilar.
● El precio de alquiler mensual de una sala de trabajo, que puede tener decimales.
● La distancia en km del centro de trabajo colaborativo al centro de la ciudad, que
puede tener decimales.
● Si el centro tiene o no cocina.
● Si el centro tiene o no un auditorio.
● El porcentaje de ocupación del centro, que puede tener decimales.

 */

typedef enum {FALSE, TRUE} boolean;
typedef enum {STARTUPS, FREELANCERS, RURAL, SPECIALIZED, GENERALIST} tTypeCenter;

int main(int argc, char **argv)
{
	int id;
	tTypeCenter type;
	int category;
	int numSpaces;
	float monthPrice;
	float distanceFromCityCenter;
	boolean hasKitchen;
	boolean hasAudirorium;
	float percentOccupation;
	
/* 2)Entrada de datos. Leer por el canal estándar de entrada, los valores de las variables
de tipo entero y real correspondientes a un centro de trabajo colaborativo. El resto de
variables, por el momento, no es necesario leerlas. */
	
	printf("COWORKING CENTER ID (AN INTEGER) >> \n");
	scanf("%d",&id);
	printf("COWORKING CENTER CATEGORY >> \n");
	scanf("%d", &category);
	printf("COWORKING CENTER NUMBER OF SPACES >> \n");
	scanf("%d", &numSpaces);
	printf("COWORKING CENTER MONTH PRICE >> \n");
	scanf("%f", &monthPrice);
	printf("COWORKING CENTER DISTANCE TO CENTER OF THE NEAREST CITY (REAL VALUE IN KM): >> \n");
	scanf("%f", &distanceFromCityCenter);
	printf("COWORKING CENTER PERCENTAGE OF OCCUPATION (REAL NUMBER BETWEEN 0 AND 100): >> \n");
	scanf("%f", &percentOccupation);
	
/* 3)Salida de datos. Mostrar por el canal estándar de salida, los valores de las variables
enteras y reales leídas anteriormente, indicando claramente a qué corresponde cada dato,
así como sus unidades (si las hubiera). El resto de variables, por el momento, no es
necesario mostrarlas. */

	printf("THE COWORKING CENTER ID IS: ");
	printf("%d/n", id);
	printf("THE COWORKING CENTER CATEGORY IS: ");
	printf("%d", category);
	printf("THE COWORKING CENTER NUMBER OF ROOMS IS ");
    printf("%d\n", numSpaces);
    printf("THE COWORKING CENTER PRICE (IN EUROS) IS ");
    printf("%.2f\n", monthPrice);
    printf("THE COWORKING CENTER'S DISTANCE TO CENTER OF THE NEAREST CITY (REAL VALUE IN KM) ");
    printf("%.2f\n", distanceFromCityCenter);
    printf("THE COWORKING CENTER PERCENTAGE OF OCCUPATION IS (REAL NUMBER BETWEEN 0 AND 100) ");
    printf("%.2f\n", percentOccupation);


	return 0;
}
	
