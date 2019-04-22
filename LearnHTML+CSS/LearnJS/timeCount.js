var minutes = document.getElementsByTagName('input')[0];
var seconds = document.getElementsByTagName('input')[1];

var m = 0;
var s = 0;

var timer = setInterval(function () {
    s++;
    if (s == 60) {
        s = 0;
        m++;
    }
    minutes.value = m;
    seconds.value = s;

    if (m == 3) {
        clearInterval(timer);
    }
}, 100);