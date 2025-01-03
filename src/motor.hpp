#ifndef MOTOR_HPP
#define MOTOR_HPP

// モータPWM出力Pinのアサイン
// Motor PWM Pin
#define PIN_FRONT_LEFT (5)
#define PIN_FRONT_RIGHT (42)
#define PIN_REAR_LEFT (10)
#define PIN_REAR_RIGHT (41)

// モータPWM周波数
// Motor PWM Frequency
#define  PWM_FREQ (150000)

// PWM分解能
// PWM Resolution
#define PWM_RESOLUTION (8)

// モータチャンネルのアサイン
// Motor Channel
#define CH_FRONT_LEFT (0)
#define CH_FRONT_RIGHT (1)
#define CH_REAR_LEFT (2)
#define CH_REAR_RIGHT (3)

void motor_set_duty_fr(float duty);
void motor_set_duty_fl(float duty);
void motor_set_duty_rr(float duty);
void motor_set_duty_rl(float duty);
void motor_init(void);
void motor_stop(void);

#endif