Structure of the `/opt/nginx` directory which contains the nginx and uwsgi stuff

    $ tree /opt/nginx
    conf/
    ├── fastcgi_params
    ├── mailman.ini
    ├── mime.types
    ├── myip.inc
    ├── nginx.conf
    ├── scgi_params
    ├── ssl
    │   ├── bugs.spodeli.org.crt
    │   ├── bugs.spodeli.org.key
    │   ├── irc.softver.org.mk.crt
    │   ├── irc.softver.org.mk.key
    │   ├── lists.softver.org.mk.crt
    │   └── lists.softver.org.mk.key
    ├── uwsgi_params
    └── vhosts
    ├── bugs.conf
    ├── irclog.conf
    ├── mailman.conf
    ├── noc.conf
    └── redirects.conf
    html/
    ├── 50x.html
    ├── index.html
    └── myip
    ├── centered.css
    ├── iemac-center.css
    ├── index.html
    ├── ipv4.png
    ├── ipv6.png
    ├── myip.html
    └── myip.json
    lib/
    ├── cache_plugin.so
    ├── cgi_plugin.so
    ├── corerouter_plugin.so
    ├── fastrouter_plugin.so
    ├── gevent_plugin.so
    ├── http_plugin.so
    ├── ping_plugin.so
    ├── python_plugin.so
    ├── router_http_plugin.so
    └── router_rewrite_plugin.so
    sbin/
    ├── nginx
    └── uwsgi
