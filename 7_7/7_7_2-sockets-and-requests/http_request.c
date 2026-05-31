#include <stdio.h>
#include <curl/curl.h>

int main(void) {
	CURL *curl;
	CURLcode res;


	curl = curl_easy_init(); // our handler
	curl_easy_setopt(curl, CURLOPT_URL, "https://andc.dev");
	curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L); // follow in case of redirection
	res = curl_easy_perform(curl); // start our transfer, store returned status code in res

	// CURLE_OK is a constant of 0, so if it is not, its an error
	if(res != CURLE_OK){
		fprintf(stderr, "CURL FAILURE MEHHH: %s\n", curl_easy_strerror(res));
	}
	curl_easy_cleanup(curl); // clear memory

}
