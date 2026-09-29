#pragma once

namespace xauusd::sovereign
{

enum class DataQualityState
{
    UNKNOWN_DATA_QUALITY,
    VALID_QUALITY,
    INVALID_QUALITY,
    DUPLICATE_QUALITY,
    OUT_OF_ORDER_QUALITY
};

}
