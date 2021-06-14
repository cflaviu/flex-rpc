// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::discovery::event
{
    class info
    {
        string name;
        string description;
        parameter::variant_array output;
    };

    using info_array = cista::offset::vector<info>;

    struct request
    {
        object_id object = 0;
    };

    struct response
    {
        error_id error;
        info_array meta_information;
    };
}
