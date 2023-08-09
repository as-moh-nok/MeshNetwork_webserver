// Input to HTML Server for ESP32




#include "webServer.h"
#define LED_PIN 2

//#include "my_data.h"








void app_main(void)
{
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT );
	gpio_set_level(LED_PIN, 0);
	led_state = 0;
    nvs_flash_init();
    wifi_connection();
    start_webserver();
}