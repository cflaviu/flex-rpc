// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#pragma once
#ifndef PCH
    #include <cista/containers/variant.h>
    #include <cista/containers/vector.h>
#endif

namespace flex_rpc::message
{
    using error_id = std::uint16_t;
    using object_id = std::uint8_t;
    using method_id = std::uint8_t;
    using event_id = std::uint8_t;
    using context_id = std::uint16_t;
    using raw_data = cista::offset::vector<std::uint8_t>;
    using string = cista::offset::string;
}
