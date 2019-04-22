var timer = document.getElementById("timer");
var endTime = new Date("2019/6/7 09:00:00").getTime(); // 结束的时间

// setTimeout(() => {
//   showTime();
// }, 1000);
setTimeout("showTime()", 1000);

function showTime() {
    var nowTime = new Date().getTime();
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
    }
}