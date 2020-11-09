#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include "mqtt.h"
#include "credentials.h"

#define TOUT_TO_PUBLISH 2000

/* This program connects to https://www.maqiatto.com/
 * Periodically publishes test messages with your credentials.
 */
#include "rlmailbox.h"
rlMailbox mbx_rec(MBX_REC);


int main(int argc, char* argv[])
{
    MQTTBegin();

    MQTTSubscribe(TOPIC01);

    while(1) 
    {
        const char *s=mbx_rec.read(0);
        if(s[0])
        { 
            printf("%s\n",s);
            MQTTPublish(TOPIC02, (char *)s);
        }
    }

    MQTTDisconnect();

    return 0;
}
