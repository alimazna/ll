#pragma once

#include <cstdint>

namespace xauusd::sovereign {

enum class DataQualityState : std::uint8_t {
    VALID,
    DEGRADED,
    INVALID,
    UNKNOWN_VALUE,
    STALE,
    MISSING,
    OUT_OF_ORDER,
    DUPLICATE,
    INCOMPLETE
};

} // namespace xauusd::sovereign