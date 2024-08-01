﻿#include <httplib.h>
#include <iostream>

int main(){
    httplib::Client cli("localhost", 1234);

    if(auto res = cli.Get("/hi")){
        if(res->status == 200){
            std::cout << res->body << std::endl;
        }
    }else{
        auto err = res.error();
    }
    return 1;
}
