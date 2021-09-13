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

    struct response: public base_response
    {
        raw_data result;

        response(const context_id context, const error_id error = error_id::none): base_response(context, error) {}
    };
}
