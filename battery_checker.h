#ifndef BATTERY_CHECKER_H
#define BATTERY_CHECKER_H

// Constants for warning tolerances (5% of upper limits)
#define SOC_WARNING_TOLERANCE (0.05 * 80)   // 5% of 80
#define TEMP_WARNING_TOLERANCE (0.05 * 45)  // 5% of 45
#define CHARGERATE_WARNING_TOLERANCE (0.05 * 0.8) // 5% of 0.8

// Function declarations
int batteryIsOk(float temperature, float soc, float chargeRate, int enableTempWarning, int enableSocWarning, int enableChargeRateWarning);

#endif // BATTERY_CHECKER_H
