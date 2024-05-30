
#define IOT_CONFIG_WIFI_SSID "Arjin iPhone’u"
#define IOT_CONFIG_WIFI_PASSWORD "sandalye33"


#ifdef IOT_CONFIG_USE_X509_CERT


#define IOT_CONFIG_DEVICE_CERT "Device Certificate"


#define IOT_CONFIG_DEVICE_CERT_PRIVATE_KEY "Device Certificate Private Key"

#endif // IOT_CONFIG_USE_X509_CERT

// Azure IoT Central
#define DPS_ID_SCOPE "0ne00CC7B49"
#define IOT_CONFIG_DEVICE_ID "ESP32-SMARTLAMP"
// Use device key if not using certificates
#ifndef IOT_CONFIG_USE_X509_CERT
#define IOT_CONFIG_DEVICE_KEY "bbOST3/RDJsyhMinbTvIfhmfDc+vN5hg63G2ZkYh0V0="
#endif // IOT_CONFIG_USE_X509_CERT

#define AZURE_SDK_CLIENT_USER_AGENT "c%2F" AZ_SDK_VERSION_STRING "(ard%3Besp32)"

#define TELEMETRY_FREQUENCY_IN_SECONDS 2

#define MQTT_PASSWORD_LIFETIME_IN_MINUTES 60

//PIN Definitons
const int pirPin = 19;
const int ledPin = 4;
int pirState=0;
