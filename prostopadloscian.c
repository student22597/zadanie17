
// zadanie 17 - menu

#include <stdio.h>
#include <math.h>

float volume_sphere(float r) {
	return (4.0/3.0) * M_PI * r * r * r;
}

float volume_cuboid(float a, float b, float h) {
	return a * b * h;
}

void calculate_volume_sphere() {
	float r;

	printf("Podaj promien kuli: ");
	scanf("%f", &r);

	printf("Objetosc kuli: %f\n", volume_sphere(r));
}

void calculate_volume_cuboid() {
	float a, b, h;

	printf("Podaj dlugosc boku a: ");
	scanf("%f", &a);

	printf("Podaj dlugosc boku b: ");
	scanf("%f", &b);

	printf("Podaj wysokosc h: ");
	scanf("%f", &h);

	printf("Objetosc prostopadloscianu: %f\n", volume_cuboid(a, b, h));
}

int main() {
	int wybor;

	printf("MENU\n");
	printf("1 - Oblicz objetosc kuli\n");
	printf("2 - Oblicz objetosc prostopadloscianu\n");
	printf("Wybierz opcje: ");
	scanf("%d", &wybor);

	if (wybor == 1) {
		calculate_volume_sphere();
	}
	else if (wybor == 2) {
		calculate_volume_cuboid();
	}
	else {
		printf("Nieprawidlowy wybor!\n");
	}

	return 0;
}

