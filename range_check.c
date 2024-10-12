#include <stdio.h>
#include "range_check.h"

// Function to check if a value is within a given range
int is_Within_Range(float value, float minimum, float maximum) {
  return (value >= minimum && value <= maximum);
}

// Function to check for warnings
void check_warning(float value, float lowerWarning, float upperWarning, const char* warningMessageLow, const char* warningMessageHigh) {
  if (value <= lowerWarning) {
    printf("%s\n", warningMessageLow);
  }
  if (value >= upperWarning) {
    printf("%s\n", warningMessageHigh);
  }
}

// Function to check if value is within normal scope and print warnings if enabled
int check_scope(float value, float minimum, float maximum, float lowerWarning, float upperWarning, const char* errorMessage, const char* warningMessageLow, const char* warningMessageHigh, int enableWarning) {
  if (enableWarning) {
    check_warning(value, minimum + lowerWarning, maximum - upperWarning, warningMessageLow, warningMessageHigh);
  }
  if (!is_Within_Range(value, minimum, maximum)) {
    printf("%s\n", errorMessage);
    return 0;
  }
  return 1;
}
