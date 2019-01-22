curl --request POST \
  --url 'http://localhost/ESP8266_BackEnd/SaveDetail.php?DeviceIP=3139322E3136382E302E31&Grade=466F726D204F6E65&School=4D616B6F6E676F&Name=416C6578204D616C616D75736861'


  //------------C GENERATED CURL-----------------//

  CURL *hnd = curl_easy_init();

curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
curl_easy_setopt(hnd, CURLOPT_URL, "http://localhost/ESP8266_BackEnd/SaveDetail.php?DeviceIP=3139322E3136382E302E31&Grade=466F726D204F6E65&School=4D616B6F6E676F&Name=416C6578204D616C616D75736861");

CURLcode ret = curl_easy_perform(hnd);