#pragma once

// Prevent third-party headers (Windows/MT5 SDK) from redefining enum token names.
#ifdef UNKNOWN_VALUE
#undef UNKNOWN_VALUE
#endif

namespace xauusd::sovereign
{

enum class DataQualityState
{
    UNKNOWN_VALUE,
    VALID,
    INVALID,
    DUPLICATE,
    OUT_OF_ORDER
};

}