// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::call
{
    struct request
    {
        object_id object = 0;
        method_id method;
        raw_data parameters;

        request() = default;
        request(const object_id object, const method_id method): object(object), method(method) {}
    };

    struct rr
    {
        context_id context {};
        error_id error {};
    };

    struct response //: public rr
    {
        context_id context {};
        error_id error {};
        raw_data result {};
    };
}
