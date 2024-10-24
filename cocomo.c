#include <stdio.h>
#include <math.h> // For pow function

// Function to estimate effort based on KLOC
double estimate_effort(double kloc, double scale_factor, double effort_multiplier) {
    const double a = 2.5; // Example constant
    const double b = 1.2; // Example exponent

    // Effort Adjustment Factor (EAF) = scale factor * effort multiplier
    double eaf = scale_factor * effort_multiplier;

    // Calculate the effort
    return (a * pow(kloc, b)) * eaf;
}

int main() {
    double kloc;               // Size of the software in KLOC (thousands of lines of code)
    double scale_factor;      // Scale factor derived from cost drivers
    double effort_multiplier; // Effort multiplier derived from cost drivers

    // Get inputs from user
    printf("Enter the size of the software in KLOC: ");
    scanf("%lf", &kloc);

    // Here we use example values for scale factor and effort multiplier.
    // In a real application, these values should be calculated based on cost drivers.
    scale_factor = 1.0;      // This is a placeholder value
    effort_multiplier = 2.5; // This is a placeholder value

    // Estimate effort
    double effort = estimate_effort(kloc, scale_factor, effort_multiplier);

    // Output the estimated effort
    printf("Estimated effort: %.2lf person-months\n", effort);

    return 0;
}
