var timer = document.getElementById("timer");

var startTime;
var endTime;
var sumTime;

function showTime() {
    var nowTime = new Date().getTime();
    var sumNow_start = nowTime - startTime;
    var value = Math.round((sumNow_start / sumTime) * 100);

    bar.style.width = value + "%";
    bar.innerHTML = value + "%";


    var time = endTime - nowTime;
    if (time > 0) {
        var day = Math.floor(time / 86400000);
        time -= day * 86400000;
        var hour = Math.floor(time / 3600000);
        time -= hour * 3600000;
        var minute = Math.floor(time / 60000);
        time -= minute * 60000;
        var second = Math.floor(time / 1000);
        time -= second * 1000;

        var str = day + "天" + hour + "小时" + minute + "分钟" + second + "秒";
        timer.innerHTML = str;
        setTimeout("showTime()", 1000);
    } else {
        bar.style.width = "100%";
        bar.innerHTML = "100%";
        timer.innerHTML = "倒计时已结束";
    }
}

beginBtn.onclick = function () {
    startTime = new Date(login.startTime.value).getTime();
    endTime = new Date(login.endTime.value).getTime();
    sumTime = endTime - startTime;
    setTimeout("showTime()", 1000);
}
