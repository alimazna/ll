#pragma once

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