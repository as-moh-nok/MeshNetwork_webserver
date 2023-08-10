// Input to HTML Server for ESP32




#include "webServer.h"
#define LED_PIN 2
extern const char *TAG;

extern void wifi_event_handler(void *event_handler_arg, esp_event_base_t event_base, int32_t event_id, void *event_data);
extern void wifi_connection();
extern esp_err_t get_handler(httpd_req_t *req);

extern esp_err_t on_handler(httpd_req_t *req);
extern esp_err_t off_handler(httpd_req_t *req);
extern esp_err_t get_handler_str(httpd_req_t *req);

int led_state = 0;
extern httpd_handle_t start_webserver(void);
extern void stop_webserver(httpd_handle_t server);
//#include "my_data.h"





/* URI handler structure for GET /uri */

extern httpd_uri_t uri_get;
extern httpd_uri_t uri_on ;
extern httpd_uri_t uri_off;
extern httpd_uri_t uri_get_input;



void app_main(void)
{
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT );
	gpio_set_level(LED_PIN, 0);
	led_state = 0;
    nvs_flash_init();
    wifi_connection();
    start_webserver();
}