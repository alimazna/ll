#pragma once

#include "FreshnessState.h"
#include "Timestamp.h"

namespace xauusd::sovereign
{

struct HealthSnapshot
{
    FreshnessState freshness{FreshnessState::Unknown};

    Timestamp observed{};

    Timestamp policy{};

    constexpr HealthSnapshot() = default;

    constexpr HealthSnapshot(
        FreshnessState freshness_value,
        Timestamp observed_value,
        Timestamp policy_value)
        :
        freshness(freshness_value),
        observed(observed_value),
        policy(policy_value)
    {
    }
};

}