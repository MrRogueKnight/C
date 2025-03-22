/*
2. WAP to find Fahrenheit for a given centigrade temperature.
*/
int main() {
    float centigrade, fahrenheit;

    // Ask user for input
    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &centigrade);

    // Convert Centigrade to Fahrenheit
    fahrenheit = (centigrade * 9 / 5) + 32;

    // Display result
    printf("The Fahrenheit temperature is: %.2f\n", fahrenheit);
    getch();
    return 0;
}
