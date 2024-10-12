#include <assert.h>
#include "battery_checker.h"

int main() {
  // Test cases where warnings are enabled
  assert(batteryIsOk(25, 70, 0.7, 1, 1, 1));  // Should pass with no warnings
  assert(!batteryIsOk(50, 85, 0, 1, 1, 1));   // Should fail due to out of range

  // Test cases where warnings are disabled
  assert(batteryIsOk(43, 76, 0.78, 0, 0, 0)); // Should pass with no warnings printed

  return 0;
}
