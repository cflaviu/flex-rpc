// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::event
{
    struct notification
    {
        error_id error {};
        object_id object {};
        event_id event {};
        raw_data data {};
    };
}
