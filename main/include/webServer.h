#ifndef MY_WEBSERVER_H
#define MY_WEBSERVER_H

#include <stdio.h>
#include <sys/param.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/timers.h"
#include "freertos/event_groups.h"
#include "esp_wifi.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_netif.h"
#include "esp_http_server.h"
#include "driver/gpio.h"


#define SSID    // "hwa"
#define PASS     //"wifi1373"
const char *TAG; //= "ESP32 Server";


void wifi_event_handler(void *event_handler_arg, esp_event_base_t event_base, int32_t event_id, void *event_data);
void wifi_connection();
esp_err_t get_handler(httpd_req_t *req);

esp_err_t on_handler(httpd_req_t *req);
esp_err_t off_handler(httpd_req_t *req);
esp_err_t get_handler_str(httpd_req_t *req);



httpd_handle_t start_webserver(void);
void stop_webserver(httpd_handle_t server);







#endif //MY_WEBSERVER_H
