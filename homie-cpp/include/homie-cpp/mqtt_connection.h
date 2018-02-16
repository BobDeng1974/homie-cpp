#pragma once
#include "mqtt_event_handler.h"

namespace homie {
	struct mqtt_connection {
		virtual void set_event_handler(mqtt_event_handler* evt) = 0;
		virtual void publish(const std::string& topic, const std::string& payload, int qos, bool retain) = 0;
		virtual void subscribe(const std::string& topic, int qos) = 0;
		virtual void unsubscribe(const std::string& topic) = 0;
		virtual bool is_connected() const = 0;
	};
}