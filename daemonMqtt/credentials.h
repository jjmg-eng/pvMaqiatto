#ifndef LINUX_CREDENTIALS
#define LINUX_CREDENTIALS

/* Provide MQTT broker credentials as denoted in maqiatto.com. */
#define CLIENTID        "a-really-unique-id-as-string"
#define BROKER_ADDR     "maqiatto.com"
#define USERNAME        "jjmg.engenharia@gmail.com"
#define PASSWORD        "monitor"

/* Provide topic as it is denoted in your topic list. 
 * For example mine is : cadominna@gmail.com/topic1
 * To add topics, see https://www.maqiatto.com/configure
 */
#define TOPIC    "jjmg.engenharia@gmail.com/t01"
#define TOPIC01  "jjmg.engenharia@gmail.com/t01"
#define TOPIC02  "jjmg.engenharia@gmail.com/t02"

#define MBX_SEND "/srv/automation/mbx/sendMaqiatto.mbx"
#define MBX_REC  "/srv/automation/mbx/recMaqiatto.mbx"

#endif /* LINUX_CREDENTIALS */
