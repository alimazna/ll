#pragma once

namespace xauusd::sovereign {

enum class ValidationOutcome
{
    UNKNOWN_VALIDATION_VALUE,
    ACCEPTED_VALIDATION,
    REJECTED_VALIDATION,
    PARTIAL_VALIDATION,
    QUARANTINED_VALIDATION
};

}
