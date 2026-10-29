#include <stdio.h>
#include <math.h>

int main() {
    double G = 6.67430e-11;
    double M = 5.972e24;
    double R = 6371000.0;
    double C = 299792458.0;
    
    double factor = sqrt(1.0 - (2.0 * G * M) / (R * C * C));
    double seconds_per_year = 365.25 * 24.0 * 3600.0;
    double time_lost = seconds_per_year * (1.0 - factor);
    
    printf("Gravitational time dilation factor: %.12f\n", factor);
    printf("Time lost per year on Earth's surface: %.4f seconds\n", time_lost);
    
    return 0;
}
