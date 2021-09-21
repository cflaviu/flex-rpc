// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <flex_rpc/message/type.hpp>
#endif

namespace flex_rpc::message::discovery::parameter
{
    using type_id = std::uint16_t;

    enum class primary_type : std::uint8_t
    {
        boolean,
        char8,
        char16,
        char32,
        uint8,
        uint16,
        uint32,
        uint64,
        int8,
        int16,
        int32,
        int64,
        float32,
        float64,
    };

    // sclar type
    struct sclar_type
    {
        primary_type base_type;
        string name {};
        string description {};
    };

    // array type
    struct array_type
    {
        string name {};
        string description {};
        type_id inner_type {};
        length_t size {};
        length_t max_size {};
    };

    // structural type
    struct structural_type
    {
        struct member
        {
            type_id type {};
            string name {};
        };

        using member_array = cista::offset::vector<member>;

        string name {};
        string description {};
        member_array members {};
    };

    using structure_type = structural_type;
    using union_type = structural_type;

    using variant_type = cista::variant<sclar_type, array_type, structure_type, union_type>;
    using type_array = cista::offset::vector<variant_type>;

    struct item
    {
        type_id type {}; // refers a type from type_array
        string name {};  // parameter name
    };

    using array = cista::offset::vector<item>;
}
