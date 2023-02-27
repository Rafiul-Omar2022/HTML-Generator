#include <iostream>
#include <fstream>

using namespace std;

int main(){

    const char MARKUP_TAG[] = {'<', '>', '\\'};

    const string MARKUP_NAME_START[] = {
         "<html>", "<head>", "<title>", "<body>", "<h1>", "<h2>", "<h3>", "<h4>", "<h5>", "<h6>", "<p>",
         "<div>", "<em>", "<strong>", "<u>"
         };

    const string MARKUP_NAME_END[] = {
         "</html>", "</head>", "</title>", "</body>", "</h1>","</h2>", "</h3>", "</h4>", "</h5>", "</h6>", "</p>",
         "</div>", "</em>", "</strong>", "</u>"
         };
    const string MARKUP_NAME_WITHOUT_END_TAG[] = {
        "<!DOCTYPE html>", "<meta charset=\"UTF-8\">", "</hr>", "</br>"
    };




    string title = "",
            body = ""; // code injector



    string template_html = MARKUP_NAME_WITHOUT_END_TAG[0] + "\n"+
                           MARKUP_NAME_START[0]+ "\n\n" +
                           MARKUP_NAME_START[1]+ "\n\t" +
                           MARKUP_NAME_WITHOUT_END_TAG[1] + "\n\t" +
                           MARKUP_NAME_START[2] + title + MARKUP_NAME_END[2] +"\n" +
                           MARKUP_NAME_END[1] + "\n\n" +
                           MARKUP_NAME_START[3] + "\n\t" +body+"\n"+ MARKUP_NAME_END[3] + "\n\n" +
                           MARKUP_NAME_END[0];

    cout<<template_html;


    fstream html_file;

    html_file.open("index.html", ios::out);

    if(!html_file){
        cout<<"File creation failed."<< endl;
    }
    else {
        html_file<<template_html;
        html_file.close();
    }



    return 0;
}
