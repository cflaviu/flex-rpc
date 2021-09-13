// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::connection
{
    using api_levelt_t = std::uint16_t;
    using tokent_t = std::uint32_t;

    struct request
    {
        api_levelt_t api_level;
    };

    struct response: public base_response
    {
        tokent_t token;

        response(const context_id context, const error_id error = error_id::none): base_response(context, error) {}
    };
}
