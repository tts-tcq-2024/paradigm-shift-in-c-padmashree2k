#include <stdio.h>
#include "battery_checker.h"
#include "range_check.h"

// Function to check if battery parameters are within their limits
int batteryIsOk(float temperature, float soc, float chargeRate, int enableTempWarning, int enableSocWarning, int enableChargeRateWarning) {
  int Tremp_Ok = check_scope(temperature, 0, 45, TEMP_WARNING_TOLERANCE, TEMP_WARNING_TOLERANCE, 
                              "The temperature is out of range...", 
                              "Warning: Approaching discharge", 
                              "Warning: Approaching charge-peak", 
                              enableTempWarning);
  int Soc_Ok = check_scope(soc, 20, 80, SOC_WARNING_TOLERANCE, SOC_WARNING_TOLERANCE, 
                           "The state of Charge is out of range...", 
                           "Warning: Approaching discharge", 
                           "Warning: Approaching charge-peak", 
                           enableSocWarning);
  int ChargeRate_Ok = check_scope(chargeRate, 0, 0.8, CHARGERATE_WARNING_TOLERANCE, CHARGERATE_WARNING_TOLERANCE, 
                                  "The charge Rate is out of range...", 
                                  "Warning: Approaching discharge", 
                                  "Warning: Approaching charge-peak", 
                                  enableChargeRateWarning);

  return Tremp_Ok && Soc_Ok && ChargeRate_Ok;
}
