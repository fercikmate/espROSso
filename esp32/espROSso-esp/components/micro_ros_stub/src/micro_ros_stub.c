#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "rcl/rcl.h"
#include "rcl/error_handling.h"
#include "rclc/rclc.h"
#include "rclc/executor.h"
#include "uros_network_interfaces.h"
#include "geometry_msgs/msg/twist.h"
#include "rmw_microros/rmw_microros.h"

// Global stub variables for internal state
static bool g_initialized = false;
static bool g_network_configured = false;

// Stub allocator functions that match RCL signature
static void * stub_allocate(size_t size, void * state) {
    (void)state;
    return malloc(size);
}

static void stub_deallocate(void * pointer, void * state) {
    (void)state;
    free(pointer);
}

static void * stub_reallocate(void * pointer, size_t size, void * state) {
    (void)state;
    return realloc(pointer, size);
}

static void * stub_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state) {
    (void)state;
    return calloc(number_of_elements, size_of_element);
}

// RCL stub implementations
rcl_allocator_t rcl_get_default_allocator(void)
{
    rcl_allocator_t allocator;
    // Stub implementation - return basic allocator structure
    allocator.allocate = stub_allocate;
    allocator.deallocate = stub_deallocate;
    allocator.reallocate = stub_reallocate;
    allocator.zero_allocate = stub_zero_allocate;
    allocator.state = NULL;
    return allocator;
}

rcl_init_options_t rcl_get_zero_initialized_init_options(void)
{
    rcl_init_options_t init_options;
    memset(&init_options, 0, sizeof(init_options));
    return init_options;
}

rcl_ret_t rcl_init_options_init(rcl_init_options_t * init_options, rcl_allocator_t allocator)
{
    (void)allocator;
    if (!init_options) return RCL_RET_INVALID_ARGUMENT;
    memset(init_options, 0, sizeof(*init_options));
    return RCL_RET_OK;
}

rcl_ret_t rcl_init_options_fini(rcl_init_options_t * init_options)
{
    (void)init_options;
    return RCL_RET_OK;
}

rcl_context_t rcl_get_zero_initialized_context(void)
{
    rcl_context_t context;
    memset(&context, 0, sizeof(context));
    return context;
}

rcl_ret_t rcl_init(int argc, char const * const argv[], rcl_init_options_t * options, rcl_context_t * context)
{
    (void)argc;
    (void)argv;
    (void)options;
    if (!context) return RCL_RET_INVALID_ARGUMENT;
    memset(context, 0, sizeof(*context));
    g_initialized = true;
    return RCL_RET_OK;
}

rcl_ret_t rcl_shutdown(rcl_context_t * context)
{
    (void)context;
    g_initialized = false;
    return RCL_RET_OK;
}

rcl_node_t rcl_get_zero_initialized_node(void)
{
    rcl_node_t node;
    memset(&node, 0, sizeof(node));
    return node;
}

rcl_ret_t rcl_node_init(rcl_node_t * node, const char * name, const char * namespace_, rcl_context_t * context, rcl_init_options_t * options)
{
    (void)options;
    if (!node || !name || !namespace_ || !context) return RCL_RET_INVALID_ARGUMENT;
    memset(node, 0, sizeof(*node));
    return RCL_RET_OK;
}

rcl_ret_t rcl_node_fini(rcl_node_t * node)
{
    (void)node;
    return RCL_RET_OK;
}

rcl_subscription_t rcl_get_zero_initialized_subscription(void)
{
    rcl_subscription_t subscription;
    memset(&subscription, 0, sizeof(subscription));
    return subscription;
}

rcl_ret_t rcl_subscription_init(rcl_subscription_t * subscription, const rcl_node_t * node, const void * type_support, const char * topic_name, const void * subscription_options)
{
    (void)subscription_options;
    if (!subscription || !node || !type_support || !topic_name) return RCL_RET_INVALID_ARGUMENT;
    memset(subscription, 0, sizeof(*subscription));
    return RCL_RET_OK;
}

rcl_ret_t rcl_subscription_fini(rcl_subscription_t * subscription, rcl_node_t * node)
{
    (void)subscription;
    (void)node;
    return RCL_RET_OK;
}

const char * rcl_get_error_string(void)
{
    return "Stub implementation - no error details available";
}

rcl_ret_t rcl_get_error_state(void)
{
    return RCL_RET_OK;
}

void rcl_reset_error(void)
{
    // Stub - nothing to reset
}

// RCLC stub implementations
rcl_ret_t rclc_support_init_with_options(rclc_support_t * support, int argc, char const * const argv[], rcl_init_options_t * init_options, rcl_allocator_t * allocator)
{
    (void)argc;
    (void)argv;
    (void)allocator;
    if (!support || !init_options) return RCL_RET_INVALID_ARGUMENT;
    memset(support, 0, sizeof(*support));
    return RCL_RET_OK;
}

rcl_ret_t rclc_node_init_default(rcl_node_t * node, const char * name, const char * namespace_, rclc_support_t * support)
{
    if (!node || !name || !namespace_ || !support) return RCL_RET_INVALID_ARGUMENT;
    memset(node, 0, sizeof(*node));
    return RCL_RET_OK;
}

rcl_ret_t rclc_subscription_init_default(rcl_subscription_t * subscription, rcl_node_t * node, const void * type_support, const char * topic_name)
{
    if (!subscription || !node || !type_support || !topic_name) return RCL_RET_INVALID_ARGUMENT;
    memset(subscription, 0, sizeof(*subscription));
    return RCL_RET_OK;
}

rclc_executor_t rclc_executor_get_zero_initialized_executor(void)
{
    rclc_executor_t executor;
    memset(&executor, 0, sizeof(executor));
    return executor;
}

rcl_ret_t rclc_executor_init(rclc_executor_t * executor, rcl_context_t * context, size_t number_of_handles, rcl_allocator_t * allocator)
{
    (void)context;
    (void)number_of_handles;
    (void)allocator;
    if (!executor) return RCL_RET_INVALID_ARGUMENT;
    memset(executor, 0, sizeof(*executor));
    return RCL_RET_OK;
}

rcl_ret_t rclc_executor_set_timeout(rclc_executor_t * executor, const int64_t timeout_ns)
{
    (void)executor;
    (void)timeout_ns;
    return RCL_RET_OK;
}

rcl_ret_t rclc_executor_add_subscription(rclc_executor_t * executor, rcl_subscription_t * subscription, void * msg, void (* callback)(const void *), int callback_type)
{
    (void)executor;
    (void)subscription;
    (void)msg;
    (void)callback;
    (void)callback_type;
    return RCL_RET_OK;
}

rcl_ret_t rclc_executor_spin_some(rclc_executor_t * executor, const uint64_t timeout_ns)
{
    (void)executor;
    (void)timeout_ns;
    // Stub implementation - simulate no messages available
    vTaskDelay(pdMS_TO_TICKS(10)); // Small delay to prevent busy loop
    return RCL_RET_OK;
}

rmw_init_options_t* rcl_init_options_get_rmw_init_options(rcl_init_options_t * init_options)
{
    (void)init_options;
    static rmw_init_options_t rmw_options;
    memset(&rmw_options, 0, sizeof(rmw_options));
    return &rmw_options;
}

// Network interface stub implementations
rcl_ret_t uros_network_interface_initialize(void)
{
    g_network_configured = true;
    return RCL_RET_OK;
}

#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
rcl_ret_t rmw_uros_options_set_udp_address(const char * agent_ip, const char * agent_port, rmw_init_options_t * rmw_options)
{
    (void)agent_ip;
    (void)agent_port;
    (void)rmw_options;
    return RCL_RET_OK;
}
#endif

// Geometry message stub implementations
const void * rosidl_typesupport_c__get_message_type_support_handle__geometry_msgs__msg__Twist(void)
{
    static int dummy_type_support = 0;
    return &dummy_type_support;
}

// RMW micro-ROS stub implementations
rcl_ret_t rmw_uros_ping_agent(const int timeout, const int attempts)
{
    (void)timeout;
    (void)attempts;
    return RCL_RET_OK;
}

rcl_ret_t rmw_uros_discover_agent(void)
{
    return RCL_RET_OK;
}

rcl_ret_t rmw_uros_check_agent_status(void)
{
    return RCL_RET_OK;
}