#pragma once

#include "ValidationOutcome.h"

namespace xauusd::sovereign
{

struct DataValidationResult
{
    ValidationOutcome outcome{ValidationOutcome::Unknown};

    constexpr DataValidationResult() = default;

    constexpr explicit DataValidationResult(
        ValidationOutcome value)
        : outcome(value)
    {
    }

    constexpr bool passed() const
    {
        return outcome == ValidationOutcome::Passed;
    }
};

}