#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <string>
#include <vector>

class SensorManager {
public:
    SensorManager();
    void initializeSensors();
    std::vector<double> readSensorData();
    void processSensorData(const std::vector<double>& data);
    
private:
    std::vector<std::string> sensors;
};

#endif // SENSOR_MANAGER_H