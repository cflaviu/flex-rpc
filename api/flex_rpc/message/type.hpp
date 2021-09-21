// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <cista/containers/variant.h>
    #include <cista/containers/vector.h>
#endif

namespace flex_rpc::message
{
    using object_id = std::uint8_t;
    using method_id = std::uint8_t;
    using event_id = std::uint8_t;
    using context_id = std::uint16_t;
    using raw_data = cista::offset::vector<std::uint8_t>;
    using string = cista::offset::string;
    using length_t = std::uint32_t;

    constexpr auto no_context = context_id(0u);

    template <typename T>
    constexpr auto operator+(T e) noexcept //-> std::enable_if_t<std::is_enum<T>::value, std::underlying_type_t<T>>
    {
        return static_cast<std::underlying_type_t<T>>(e);
    }

    enum class error_id : std::uint16_t
    {
        none,
        not_implemented,
        not_supported,
        generic,
    };
}
