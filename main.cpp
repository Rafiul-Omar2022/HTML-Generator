#include <iostream>

using namespace std;

int main(){

    const char MARKUP_TAG[] = {'<', '>', '\\'};

    const string MARKUP_NAME_START[] = {
         "<html>", "<head>", "<title>", "<body>", "<h1>","<h2>", "<h3>", "<h4>", "<h5>", "<h6>", "<p>",
         "<div>", "<em>", "<strong>", "<u>"
         };

    const string MARKUP_NAME_END[] = {
         "</html>", "</head>", "</title>", "</body>", "</h1>","</h2>", "</h3>", "</h4>", "</h5>", "</h6>", "</p>",
         "</div>", "</em>", "</strong>", "</u>"
         };
    const string MARKUP_NAME_WITHOUT_END_TAG[] = {
        "<!DOCTYPE html>", "<meta charset=\"UTF-8\">", "</hr>", "</br>"
    };



    string template_html = MARKUP_NAME_WITHOUT_END_TAG[0] + "\n"+
                           MARKUP_NAME_START[0]+ "\n" +
                           MARKUP_NAME_START[1]+ "\n" +
                           MARKUP_NAME_WITHOUT_END_TAG[1] + "\n" +
                           MARKUP_NAME_START[2] + "Document" + MARKUP_NAME_END[2] +"\n" +
                           MARKUP_NAME_END[1] + "\n" +
                           MARKUP_NAME_START[3] + "\n" + MARKUP_NAME_END[3] + "\n" +
                           MARKUP_NAME_END[0];

    cout<<template_html;


    return 0;
}
