// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::discovery::object
{
    struct info
    {
        string name {};
        string description {};
        bool has_methods {};
        bool has_events {};
    };

    using info_array = cista::offset::vector<info>;

    struct request
    {
    };

    struct response
    {
        error_id error {};
        info_array meta_information {};
    };
}
