#ifndef MOTOR_CONTROLLER_H
#define MOTOR_CONTROLLER_H

class MotorController {
public:
    MotorController();
    void startMotor();
    void stopMotor();
    void setSpeed(int speed);
    int getSpeed() const;

private:
    int currentSpeed;
};

#endif // MOTOR_CONTROLLER_H