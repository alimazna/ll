#pragma once

namespace xauusd::sovereign
{

enum class ServiceState
{
    Unknown,
    Starting,
    Running,
    Degraded,
    Stopped,
    Failed
};

}