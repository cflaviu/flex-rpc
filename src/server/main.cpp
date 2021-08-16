#include "flex_rpc/message/content.hpp"
#include <iostream>
#include <vector>

namespace flex_rpc
{
    template <typename T>
    constexpr auto operator+(T e) noexcept //-> std::enable_if_t<std::is_enum<T>::value, std::underlying_type_t<T>>
    {
        return static_cast<std::underlying_type_t<T>>(e);
    }

    class server
    {
    public:
        server() {}

    protected:
        using buffer_t = std::vector<uint8_t>;
        using on_request_method = buffer_t (server::*)(buffer_t&& buffer);

        void handle_requests(const message::request::array& requests);

        buffer_t on_call_cancel_request(buffer_t&& buffer);
        buffer_t on_call_request(buffer_t&& buffer);
        buffer_t on_connection_request(buffer_t&& buffer);
        buffer_t on_disconnection_request(buffer_t&& buffer);
        buffer_t on_discovery_event_request(buffer_t&& buffer);
        buffer_t on_discovery_method_request(buffer_t&& buffer);
        buffer_t on_discovery_object_request(buffer_t&& buffer);
        buffer_t on_dlt_activate_request(buffer_t&& buffer);
        buffer_t on_dlt_clear_request(buffer_t&& buffer);
        buffer_t on_dlt_configuration_change_request(buffer_t&& buffer);
        buffer_t on_dlt_configuration_reset_request(buffer_t&& buffer);
        buffer_t on_dlt_configuration_retrieve_request(buffer_t&& buffer);
        buffer_t on_dlt_deactivate_request(buffer_t&& buffer);
        buffer_t on_dlt_get_status_request(buffer_t&& buffer);
        buffer_t on_dlt_retrieve_request(buffer_t&& buffer);
        buffer_t on_event_generator_create_request(buffer_t&& buffer);
        buffer_t on_event_generator_destroy_request(buffer_t&& buffer);
        buffer_t on_event_notification(buffer_t&& buffer);
        buffer_t on_event_subscription_request(buffer_t&& buffer);
        buffer_t on_event_unsubscription_request(buffer_t&& buffer);
        buffer_t on_feature_request(buffer_t&& buffer);
        buffer_t on_ping_request(buffer_t&& buffer);

        const on_request_method _handlers[+message::request::type::ping_request + 1] = {&server::on_feature_request,
                                                                                        &server::on_call_cancel_request,
                                                                                        &server::on_call_request,
                                                                                        &server::on_connection_request,
                                                                                        &server::on_disconnection_request,
                                                                                        &server::on_discovery_event_request,
                                                                                        &server::on_discovery_method_request,
                                                                                        &server::on_discovery_object_request,
                                                                                        &server::on_dlt_activate_request,
                                                                                        &server::on_dlt_clear_request,
                                                                                        &server::on_dlt_configuration_change_request,
                                                                                        &server::on_dlt_configuration_reset_request,
                                                                                        &server::on_dlt_configuration_retrieve_request,
                                                                                        &server::on_dlt_deactivate_request,
                                                                                        &server::on_dlt_get_status_request,
                                                                                        &server::on_dlt_retrieve_request,
                                                                                        &server::on_event_generator_create_request,
                                                                                        &server::on_event_generator_destroy_request,
                                                                                        &server::on_event_subscription_request,
                                                                                        &server::on_event_unsubscription_request,
                                                                                        &server::on_ping_request};
    };

    server::buffer_t server::on_call_cancel_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_call_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_connection_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_disconnection_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_discovery_event_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_discovery_method_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_discovery_object_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_activate_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_clear_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_configuration_change_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_configuration_reset_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_configuration_retrieve_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_deactivate_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_get_status_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_dlt_retrieve_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_event_generator_create_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_event_generator_destroy_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_event_notification(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_event_subscription_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_event_unsubscription_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_feature_request(buffer_t&& buffer) { return {}; }

    server::buffer_t server::on_ping_request(buffer_t&& buffer) { return {}; }

}

int main()
{
    flex_rpc::server s;
    return 0;
}
