#include "registerFunctions.h"
namespace DB
{
void registerFunctionsDateTime(FunctionFactory & factory)
{
    registerFunctionToYear(factory);
    registerFunctionToQuarter(factory);
    registerFunctionToMonth(factory);
    registerFunctionToDayOfMonth(factory);
    registerFunctionToDayOfWeek(factory);
    registerFunctionToDayOfYear(factory);
    registerFunctionToHour(factory);
    registerFunctionToMinute(factory);
    registerFunctionToSecond(factory);
    registerFunctionToStartOfDay(factory);
    registerFunctionToMonday(factory);
    registerFunctionToISOWeek(factory);
    registerFunctionToISOYear(factory);
    registerFunctionToCustomWeek(factory);
    registerFunctionToStartOfMonth(factory);
    registerFunctionToStartOfQuarter(factory);
    registerFunctionToStartOfYear(factory);
    registerFunctionToStartOfMinute(factory);
    registerFunctionToStartOfFiveMinute(factory);
    registerFunctionToStartOfTenMinutes(factory);
    registerFunctionToStartOfFifteenMinutes(factory);
    registerFunctionToStartOfHour(factory);
    registerFunctionToStartOfInterval(factory);
    registerFunctionToStartOfISOYear(factory);
    registerFunctionToRelativeYearNum(factory);
    registerFunctionToRelativeQuarterNum(factory);
    registerFunctionToRelativeMonthNum(factory);
    registerFunctionToRelativeWeekNum(factory);
    registerFunctionToRelativeDayNum(factory);
    registerFunctionToRelativeHourNum(factory);
    registerFunctionToRelativeMinuteNum(factory);
    registerFunctionToRelativeSecondNum(factory);
    registerFunctionToTime(factory);
    registerFunctionNow(factory);
    registerFunctionNow64(factory);
    registerFunctionToday(factory);
    registerFunctionYesterday(factory);
    registerFunctionTimeSlot(factory);
    registerFunctionTimeSlots(factory);
    registerFunctionToYYYYMM(factory);
    registerFunctionToYYYYMMDD(factory);
    registerFunctionToYYYYMMDDhhmmss(factory);
    registerFunctionAddSeconds(factory);
    registerFunctionAddMinutes(factory);
    registerFunctionAddHours(factory);
    registerFunctionAddDays(factory);
    registerFunctionAddWeeks(factory);
    registerFunctionAddMonths(factory);
    registerFunctionAddQuarters(factory);
    registerFunctionAddYears(factory);
    registerFunctionSubtractSeconds(factory);
    registerFunctionSubtractMinutes(factory);
    registerFunctionSubtractHours(factory);
    registerFunctionSubtractDays(factory);
    registerFunctionSubtractWeeks(factory);
    registerFunctionSubtractMonths(factory);
    registerFunctionSubtractQuarters(factory);
    registerFunctionSubtractYears(factory);
    registerFunctionDateDiff(factory);
    registerFunctionToTimeZone(factory);
    registerFunctionFormatDateTime(factory);
}

}
