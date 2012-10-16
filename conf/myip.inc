root html/myip;

location / {
    default_type text/html;
    index index.html;
    ssi on;    
}
location =/get {
    default_type text/html;
    alias html/myip/myip.html;
    ssi on;
}
location =/jsonp {
    default_type application/javascript;
    alias html/myip/myip.json;
    ssi on;
    ssi_types application/json application/javascript;
}
location =/json {
    default_type application/json;
    if ($arg_callback) {
	rewrite ^ /jsonp;
    }
    alias html/myip/myip.json;
    ssi on;
    ssi_types application/json application/javascript;
}
