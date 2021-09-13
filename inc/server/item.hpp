#include <atomic>
#include <cista/serialization.h>
#include <flex_rpc/message/data.hpp>
#include <iostream>
#include <span>
#include <vector>

namespace flex_rpc::server
{
    using error_t = message::error_id;
    using buffer_t = std::vector<std::uint8_t>;
    using buffer_view = std::span<std::uint8_t>;
    using context_id = message::context_id;
    using ipv4_address = cista::array<std::uint8_t, 4>;
    using ipv8_address = cista::array<std::uint8_t, 8>;
    using ip_address = cista::variant<ipv4_address, ipv8_address>;
    using port_no = std::uint16_t;

    class settings_t
    {
    public:
        std::uint32_t receiving_buffer_size = 2 * 1024 * 1024;
        ip_address address {};
        port_no port = 0;
        std::uint8_t thread_pool_size = 0;
    };

    enum class state_t : std::uint8_t
    {
        inactive,
        active,
        fail,
    };

    class item
    {
    public:
        item(settings_t settings): _settings(std::move(settings)), _state(state_t::inactive) {}

        virtual ~item() noexcept = default;

        const settings_t& settings() const noexcept { return _settings; }

        state_t state() const noexcept { return _state; }

        void async_start();

        void async_stop();

    protected:
        template <typename Item>
        static void serialize(const Item& item, buffer_view& buffer)
        {
            // cista::serialize<buffer_view, Item>(buffer, item);
        }

        template <typename Response>
        static error_t not_implemented(const context_id context, buffer_view& output_buffer) noexcept
        {
            Response response(context, error_t::not_implemented);
            serialize(response, output_buffer);
            return error_t::none;
        }

        virtual void handle_requests(const message::request::array& requests, const context_id context) noexcept;
        virtual error_t handle_request(const message::request::item& request, const context_id context);

        virtual error_t on_call_cancel_request(const context_id context, const message::call::cancel::request& request,
                                               buffer_view& output_buffer);
        virtual error_t on_call_request(const context_id context, const message::call::request& request, buffer_view& output_buffer);
        virtual error_t on_connection_request(const context_id context, const message::connection::request& request,
                                              buffer_view& output_buffer);
        virtual error_t on_disconnection_request(const context_id context, const message::disconnection::request& request,
                                                 buffer_view& output_buffer);
        virtual error_t on_discovery_event_request(const context_id context, const message::discovery::event::request& request,
                                                   buffer_view& output_buffer);
        virtual error_t on_discovery_method_request(const context_id context, const message::discovery::method::request& request,
                                                    buffer_view& output_buffer);
        virtual error_t on_discovery_object_request(const context_id context, const message::discovery::object::request& request,
                                                    buffer_view& output_buffer);
        virtual error_t on_dlt_activate_request(const context_id context, const message::dlt::activate::request& request,
                                                buffer_view& output_buffer);
        virtual error_t on_dlt_clear_request(const context_id context, const message::dlt::clear::request& request,
                                             buffer_view& output_buffer);
        virtual error_t on_dlt_configuration_change_request(const context_id context,
                                                            const message::dlt::configuration::change::request& request,
                                                            buffer_view& output_buffer);
        virtual error_t on_dlt_configuration_reset_request(const context_id context,
                                                           const message::dlt::configuration::reset::request& request,
                                                           buffer_view& output_buffer);
        virtual error_t on_dlt_configuration_retrieve_request(const context_id context,
                                                              const message::dlt::configuration::retrieve::request& request,
                                                              buffer_view& output_buffer);
        virtual error_t on_dlt_deactivate_request(const context_id context, const message::dlt::deactivate::request& request,
                                                  buffer_view& output_buffer);
        virtual error_t on_dlt_status_request(const context_id context, const message::dlt::status::request& request,
                                              buffer_view& output_buffer);
        virtual error_t on_dlt_retrieve_request(const context_id context, const message::dlt::retrieve::request& request,
                                                buffer_view& output_buffer);
        virtual error_t on_event_generator_create_request(const context_id context,
                                                          const message::event::generator::create::request& request,
                                                          buffer_view& output_buffer);
        virtual error_t on_event_generator_destroy_request(const context_id context,
                                                           const message::event::generator::destroy::request& request,
                                                           buffer_view& output_buffer);
        virtual error_t on_event_subscription_request(const context_id context, const message::event::subscription::request& request,
                                                      buffer_view& output_buffer);
        virtual error_t on_event_unsubscription_request(const context_id context, const message::event::unsubscription::request& request,
                                                        buffer_view& output_buffer);
        virtual error_t on_feature_list_request(const context_id context, const message::feature::list::request& request,
                                                buffer_view& output_buffer);
        virtual error_t on_ping_request(const context_id context, const message::ping::request& request, buffer_view& output_buffer);

        settings_t _settings;
        std::atomic<state_t> _state;
    };
}
