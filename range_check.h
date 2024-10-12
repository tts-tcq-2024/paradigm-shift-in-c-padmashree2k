#ifndef RANGE_CHECK_H
#define RANGE_CHECK_H

// Function declarations for range checking and warnings
int check_scope(float value, float minimum, float maximum, float lowerWarning, float upperWarning, const char* errorMessage, const char* warningMessageLow, const char* warningMessageHigh, int enableWarning);
int is_Within_Range(float value, float minimum, float maximum);
void check_warning(float value, float lowerWarning, float upperWarning, const char* warningMessageLow, const char* warningMessageHigh);

#endif // RANGE_CHECK_H
