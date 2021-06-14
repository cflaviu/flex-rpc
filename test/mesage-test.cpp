// Flex-RPC
// Copyright (c) 2021 Flaviu C.

#include <catch2/catch_all.hpp>
#include <flex_rpc/message/variant.hpp>

#if 0
namespace flex_rpc::message
{
    TEST_CASE("Check connection request message type")
    {
        variant msg {connection::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::connection_request);
    }

    TEST_CASE("Check connection response message type")
    {
        variant msg {connection::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::connection_response);
    }

    TEST_CASE("Check connection end request message type")
    {
        variant msg {connection::end_request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::connection_end_request);
    }

    TEST_CASE("Check call request message type")
    {
        variant msg {call::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::call_request);
    }

    TEST_CASE("Check call response message type")
    {
        variant msg {call::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::call_response);
    }

    TEST_CASE("Check call cancel request message type")
    {
        variant msg {call::cancel_request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::call_cancel_request);
    }

    TEST_CASE("Check subscription notification message type")
    {
        variant msg {subscription::notification {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::subscription_notification);
    }

    TEST_CASE("Check subscription request message type")
    {
        variant msg {subscription::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::subscription_request);
    }

    TEST_CASE("Check subscription response message type")
    {
        variant msg {subscription::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::subscription_response);
    }

    TEST_CASE("Check unsubscription request message type")
    {
        variant msg {unsubscription::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::unsubscription_request);
    }

    TEST_CASE("Check unsubscription response message type")
    {
        variant msg {unsubscription::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::unsubscription_response);
    }

    TEST_CASE("Check ping request message type")
    {
        variant msg {ping::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::ping_request);
    }

    TEST_CASE("Check ping response message type")
    {
        variant msg {ping::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::ping_response);
    }

    TEST_CASE("Check discover_objects request message type")
    {
        variant msg {discover_objects::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::discover_objects_request);
    }

    TEST_CASE("Check discover_objects response message type")
    {
        variant msg {discover_objects::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::discover_objects_response);
    }

    TEST_CASE("Check discover_methods_request request message type")
    {
        variant msg {discover_methods::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::discover_methods_request);
    }

    TEST_CASE("Check discover_methods_request response message type")
    {
        variant msg {discover_methods::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::discover_methods_response);
    }

    TEST_CASE("Check discover_events_request request message type")
    {
        variant msg {discover_events::request {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::discover_events_request);
    }

    TEST_CASE("Check discover_events_request response message type")
    {
        variant msg {discover_events::response {}};
        array messages {std::move(msg)};

        REQUIRE(type_of(messages[0]) == type::discover_events_response);
    }
}
#endif
