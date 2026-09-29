#pragma once

namespace xauusd::sovereign
{

enum class ServiceState
{
    UNKNOWN,
    STARTING,
    RUNNING,
    DEGRADED,
    STOPPED,
    FAILED,
    ERROR
};

}