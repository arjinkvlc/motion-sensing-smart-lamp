
#define IOT_CONFIG_WIFI_SSID "SSID"
#define IOT_CONFIG_WIFI_PASSWORD "PWD"


#ifdef IOT_CONFIG_USE_X509_CERT


#define IOT_CONFIG_DEVICE_CERT "Device Certificate"


#define IOT_CONFIG_DEVICE_CERT_PRIVATE_KEY "Device Certificate Private Key"

#endif // IOT_CONFIG_USE_X509_CERT

// Azure IoT Central
#define DPS_ID_SCOPE "ID Scope"
#define IOT_CONFIG_DEVICE_ID "Device ID"
// Use device key if not using certificates
#ifndef IOT_CONFIG_USE_X509_CERT
#define IOT_CONFIG_DEVICE_KEY "Device Key"
#endif // IOT_CONFIG_USE_X509_CERT

#define AZURE_SDK_CLIENT_USER_AGENT "c%2F" AZ_SDK_VERSION_STRING "(ard%3Besp32)"

#define TELEMETRY_FREQUENCY_IN_SECONDS 2

#define MQTT_PASSWORD_LIFETIME_IN_MINUTES 60
