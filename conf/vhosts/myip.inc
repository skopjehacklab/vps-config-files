root /srv/html/myip;

location / {
    default_type text/html;
    index index.html;
    ssi on;
}
location =/get {
    default_type text/html;
    alias /srv/html/myip/myip.html;
    ssi on;
}
location =/jsonp {
    default_type application/javascript;
    alias /srv/html/myip/myip.json;
    ssi on;
    ssi_types application/json application/javascript;
}
location =/json {
    default_type application/json;
    if ($arg_callback) {
        rewrite ^ /jsonp;
    }
    alias /srv/html/myip/myip.json;
    ssi on;
    ssi_types application/json application/javascript;
}
location = /favicon.ico { access_log off; log_not_found off; }
location = /robots.txt { access_log off; log_not_found off; }
