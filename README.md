### Entrega proyecto SBC
## Lámpara IoT de espectro completo para crecimiento vegetal.
El objetivo del proyecto es el diseño e implementación de un sistema de iluminación inteligente para cultivos, con el objetivo de desarrollar un sistema capaz de optimizar el crecimiento de diversas especies vegetales, ya sea césped u otros, a través de la modificación del espectro de luz. 
# Metas
Los objetivos del sistema son: permitir el cambio dinámico del espectro de luz para el crecimiento óptimo para cultivos, aplicar una política de consumo energético y ofrecer a los usuarios la capacidad de monitorear el estado del sistema de manera remota a través de Telegram y ThingsBoard.

Como microcontrolador del sistema se usará una ESP32, cuyo objetivo es ejecutar el firmware de control y gestión del sistema de la lámpara LED. Esta luz, se encargará de generar el espectro lumínico deseado para el óptimo crecimiento del vegetal.

En cuanto a la detección de datos, se usa un sensor de consumo eléctrico encargado de medir el consumo en tiempo real del sistema y nos muestra los resultados de la política de ahorro energético implementada

Todo este sistema se controlará localmente mediante unos botones físicos para cambiar el funcionamiento del sistema manualmente y una pantalla OLED que actuará como interfaz tanto para ver los cambios como para monitorizar el consumo sin las desventajas de ser únicamente un sistema IoT.

Adicionalmente, se puede realizar un control y monitorización remoto del sistema a través de ThingsBoard. Se dispone de la monitorización visual del modo actual y el brillo, el consumo del sistema y una serie de botones que simulan y amplían las funcionalidades que tenía el control original de la lámpara. Además, como segunda alternativa IoT, se pueden cambiar los parámetros a través de un bot de telegram de manera remota.


# Tecnologías usadas
El firmware se ha desarrollado en C usando el framework ESP-IDF.

# Miembros
Iván Prieto, Hugo Sánchez, Israel Molero y Carlos Serrano.





