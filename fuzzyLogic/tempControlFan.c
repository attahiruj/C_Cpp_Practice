#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

// Function to calculate the degree of membership for a triangular membership function
float calculate_membership(float value, float left_boundary, float peak, float right_boundary) {
    if (value <= left_boundary || value >= right_boundary) {
        return 0.0; // Outside the fuzzy set, degree of membership is zero.
    }

    if (value > left_boundary && value <= peak) {
        return (value - left_boundary) / (peak - left_boundary);
    }

    if (value > peak && value < right_boundary) {
        return (right_boundary - value) / (right_boundary - peak);
    }
}

int main() {
    // Initialize the random number generator with a seed
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        // Simulated temperature and humidity levels within the defined ranges
        float current_temperature = (rand() % 13) + 20;  // in Celsius (20 to 32)
        float current_humidity = (rand() % 61) + 30;     // in percentage (30 to 90)

        // Define fuzzy sets and their triangular membership functions
        float cold_membership = calculate_membership(current_temperature, 18, 22, 24);
        float warm_membership = calculate_membership(current_temperature, 22, 24, 28);
        float hot_membership = calculate_membership(current_temperature, 24, 28, 32);

        float low_humidity_membership = calculate_membership(current_humidity, 30, 40, 50);
        float medium_humidity_membership = calculate_membership(current_humidity, 40, 50, 60);
        float high_humidity_membership = calculate_membership(current_humidity, 50, 60, 70);

        // Define fuzzy rules
        float rule1 = fmin(cold_membership, low_humidity_membership); // If it's cold and dry
        float rule2 = fmin(cold_membership, medium_humidity_membership); // If it's cold and moderately humid
        float rule3 = fmin(warm_membership, medium_humidity_membership); // If it's warm and moderately humid
        float rule4 = fmin(hot_membership, high_humidity_membership); // If it's hot and very humid

        // Defuzzify - Calculate the weighted average
        float total_weight = rule1 + rule2 + rule3 + rule4;
        float fan_speed = 0.0;  // Default fan speed

        if (total_weight > 0.0) {
            fan_speed = (rule1 * 20 + rule2 * 40 + rule3 * 70 + rule4 * 100) / total_weight;
        }

        // Display the input data and the resulting fan speed
        printf("Current Temperature: %.1fC, Current Humidity: %.1f%%\n", current_temperature, current_humidity);

        if (total_weight > 0.0) {
            printf("Recommended Fan Speed: %.1f%%\n", fan_speed);
        } else {
            printf("Recommended Fan Speed: 0.0%% (No recommendation)\n");
        }
        _sleep(1000);
    }
    return 0;
}
