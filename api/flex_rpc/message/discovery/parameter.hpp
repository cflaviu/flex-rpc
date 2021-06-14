// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::discovery::parameter
{
    using type_id = std::uint32_t;

    class base
    {
    public:
        type_id type;
        string name;
    };

    class sclar: public base
    {
    public:
    };

    class array: public base
    {
    public:
        type_id item_type;
        size_t max_size;
        std::optional<std::size_t> size;
    };

    class structure: public base
    {
    public:
        struct member
        {
            type_id item_type;
            string name;
            string description;
        };

        using member_array = cista::offset::vector<member>;

        member_array members;
    };

    using variant = cista::variant<sclar, array, structure>;
    using variant_array = cista::offset::vector<variant>;
}
