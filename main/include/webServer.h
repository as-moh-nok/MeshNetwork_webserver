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



/* URI handler structure for GET /uri*/ 
httpd_uri_t uri_get = {
    .uri = "/",
    .method = HTTP_GET,
    .handler = get_handler,
    .user_ctx = NULL};

httpd_uri_t uri_on = {
    .uri      = "/on",
    .method   = HTTP_GET,
    .handler  = on_handler,
    .user_ctx = NULL
};
httpd_uri_t uri_off = {
    .uri      = "/off",
    .method   = HTTP_GET,
    .handler  = off_handler,
    .user_ctx = NULL
};

httpd_uri_t uri_get_input = {
    .uri = "/get",
    .method = HTTP_GET,
    .handler = get_handler_str,
    .user_ctx = NULL};


httpd_handle_t start_webserver(void);
void stop_webserver(httpd_handle_t server);







#endif //MY_WEBSERVER_H