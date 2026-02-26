#include <stdio.h>
#include "esp_timer.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    esp_timer_handle_t timer_handle;
    esp_timer_create_args_t timer_args = {
        //.callback = timer_callback,
        .name = "my_timer"
    };

    esp_timer_create(&timer_args, &timer_handle);
    while(1){
    esp_timer_get_time();
   printf("Timer created and time retrieved successfully.\n");
   printf("%lld\n", esp_timer_get_time());
   vTaskDelay(pdMS_TO_TICKS(1000)); // Delay for 1 second

}

}
