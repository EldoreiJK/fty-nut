#include "alert_device.h"

class Devices {
 public:
    void update ();
    void publishAlerts (mlm_client_t *client); 
    void publishRules (mlm_client_t *client); 
 private:
    std::map <std::string, Device>  _devices;

    void updateDeviceList(nut::TcpClient& nutClient);
    void updateDevices(nut::TcpClient& nutClient);
};
    
