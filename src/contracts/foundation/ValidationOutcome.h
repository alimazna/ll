#pragma once

namespace xauusd::sovereign {

enum class ValidationOutcome
{
    UNKNOWN_VALUE,
    ACCEPTED,
    REJECTED,
    PARTIAL,
    QUARANTINED
};

}