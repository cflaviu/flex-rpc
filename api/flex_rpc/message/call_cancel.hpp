// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::call_cancel
{
    struct request
    {
        object_id object = 0;
        method_id method;
        context_id context;
    };
}
