
/* Gsender class helps send e-mails from Gmail account
*  using Arduino core for ESP32 WiFi chip
*  by jubaid hossain
*  4.9.2018
*  you can copy and paste full code , here i am using Gsender library from boris
*  Modified by aiwindustries 07/28/18 to allow for multiple email recipients
*/
#ifndef G_SENDER
#define G_SENDER
#define GS_SERIAL_LOG_1         // Print to Serial only server responce
//#define GS_SERIAL_LOG_2       //  Print to Serial client commands and server responce
#include <WiFiClientSecure.h>

class Gsender
{
   protected:
       Gsender();
   private:
       const int SMTP_PORT = 465;
       const char* SMTP_SERVER = "smtp.gmail.com";
       const char* EMAILBASE64_LOGIN = "xxxxxxxxxxxxxxx";
       const char* EMAILBASE64_PASSWORD = "xxxxxxxxxxxxxxx";
       const char* FROM = "xxxxxx@mail.com";
       const char* _error = nullptr;
       char* _subject = nullptr;
       String _serverResponce;
       static Gsender* _instance;
       bool AwaitSMTPResponse(WiFiClientSecure &client, const String &resp = "", uint16_t timeOut = 60000);

   public:
       static Gsender* Instance();
       Gsender* Subject(const char* subject);
       Gsender* Subject(const String &subject);
       bool Send(const String &to, const String &message);
	   bool Send(int num, const String to[], const String &message);	   
       String getLastResponce();
       const char* getError();
};
#endif // G_SENDER

