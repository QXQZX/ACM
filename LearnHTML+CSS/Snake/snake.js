//

var loser = document.getElementById('loser'); // 游戏结束得分框
var loserScore = document.getElementsByClassName('loserScore')[0]; // 游戏结束得分

var scoreBox = document.getElementById('score'); // 顶部分数
var content = document.getElementById('content'); // 蛇运动的区域
var close = document.getElementById('close'); // 游戏结束得分框关闭按钮


var startP = document.getElementById('startP'); // 左上角开始暂停游戏按钮
var startPage = document.getElementById('startPage'); // 开始游戏界面
var startBtn = document.getElementsByClassName('startBtn')[0]; // 初入界面开始游戏按钮

var startGameBool = true; // 初入控制游戏开始
var startPaushBool = true; // 左上角控制 游戏暂停或开始

var snakeMove,
    speed = 300;
init();

function init() {

    //地图
    this.mapW = parseInt(getComputedStyle(content).width) - 20;
    this.mapH = parseInt(getComputedStyle(content).height) - 20;

    this.mapDiv = content;
    this.score = 0;
    // 食物
    this.foodW = 20;
    this.foodH = 20;
    this.foodX = 0;
    this.foodY = 0;

    // 蛇
    this.snakeW = 20;
    this.snakeH = 20;
    //  [x, y, name]
    this.snakeBody = [
        [3, 1, 'head'],
        [2, 1, 'body'],
        [1, 1, 'body']
    ];

    // 游戏属性
    this.direct = 'right';
    this.left = false;
    this.right = false;
    this.up = true;
    this.down = true;

    bindEvent();

}

function startGame() {
    scoreBox.innerHTML = 0; // 初始化顶部得分
    food();
    snake();
    bindEvent();
}
// 随机数生成食物
function food() {
    var food = document.createElement('div');
    food.style.width = this.foodW + 'px';
    food.style.height = this.foodH + 'px';
    food.style.position = 'absolute';

    this.foodX = Math.floor(Math.random() * (this.mapW / 20));
    this.foodY = Math.floor(Math.random() * (this.mapH / 20));

    food.style.left = this.foodX * 20 + 'px';
    food.style.top = this.foodY * 20 + 'px';

    this.mapDiv.appendChild(food).setAttribute('class', 'food');
}
// 画蛇
function snake() {
    for (var i = 0; i < this.snakeBody.length; i++) {
        var snakeDiv = document.createElement('div');
        snakeDiv.style.width = this.snakeW + 'px';
        snakeDiv.style.height = this.snakeH + 'px';

        snakeDiv.style.position = 'absolute';
        snakeDiv.style.left = snakeBody[i][0] * 20 + 'px';
        snakeDiv.style.top = snakeBody[i][1] * 20 + 'px';

        // 蛇头旋转
        switch (this.direct) {
            case 'right':
                break;
            case 'left':
                snakeDiv.style.transform = 'rotate(180deg)';
                break;
            case 'up':
                snakeDiv.style.transform = 'rotate(270deg)';
                break;
            case 'down':
                snakeDiv.style.transform = 'rotate(90deg)';
                break;
        }


        snakeDiv.classList.add(snakeBody[i][2]);
        mapDiv.appendChild(snakeDiv).classList.add('snake'); // 增加类名
    }
}
// 蛇移动
function move() {
    for (var i = snakeBody.length - 1; i > 0; i--) {
        snakeBody[i][0] = snakeBody[i - 1][0];
        snakeBody[i][1] = snakeBody[i - 1][1];
    }
    switch (this.direct) {
        case 'right':
            snakeBody[0][0] += 1;
            break;
        case 'left':
            snakeBody[0][0] -= 1;
            break;
        case 'up':
            snakeBody[0][1] -= 1;
            break;
        case 'down':
            snakeBody[0][1] += 1;
            break;
        default:
            break;
    }
    removeClass('snake');
    snake();
    if (this.snakeBody[0][0] == this.foodX && this.snakeBody[0][1] == this.foodY) {
        var snakeEndX = snakeBody[snakeBody.length - 1][0];
        var snakeEndY = snakeBody[snakeBody.length - 1][1];
        switch (this.direct) {
            case 'right':
                snakeBody.push([snakeEndX - 1, snakeEndY, 'body'])
                break;
            case 'left':
                snakeBody.push([snakeEndX + 1, snakeEndY, 'body'])
                break;
            case 'up':
                snakeBody.push([snakeEndX, snakeEndY + 1, 'body'])
                break;
            case 'down':
                snakeBody.push([snakeEndX, snakeEndY - 1, 'body'])
                break;
        }
        this.score++;
        scoreBox.innerHTML = this.score;
        removeClass('food');
        food();
    }

    isGameOver();
}
// 判断游戏是否结束
function isGameOver() {
    // 游戏结束边界
    if (snakeBody[0][0] < 0 || snakeBody[0][0] > mapW / 20) {
        reloadGame();
    }
    if (snakeBody[0][1] < 0 || snakeBody[0][1] > mapH / 20) {
        reloadGame();
    }
    // 蛇自己碰上自己
    var snakeHeadX = this.snakeBody[0][0];
    var snakeHeadY = this.snakeBody[0][1];
    for (var i = 1; i < this.snakeBody.length; i++) {
        if (snakeHeadX == snakeBody[i][0] && snakeHeadY == snakeBody[i][1]) {
            reloadGame();
        }
    }
}
// 游戏结束重载游戏
function reloadGame() {
    removeClass('snake');
    removeClass('food');
    clearInterval(snakeMove);
    this.snakeBody = [
        [3, 1, 'head'],
        [2, 1, 'body'],
        [1, 1, 'body']
    ];

    // 游戏属性
    this.direct = 'right';
    this.left = false;
    this.right = false;
    this.up = true;
    this.down = true;


    loser.style.display = 'block';
    loserScore.innerHTML = this.score;

    this.score = 0;
    scoreBox.innerHTML = this.score;


}

function removeClass(className) {
    var ele = document.getElementsByClassName(className);
    while (ele.length > 0) {
        ele[0].parentNode.removeChild(ele[0]);
    }

}

function setDirect(code) {
    switch (code) {
        case 37:
            if (this.left) {
                this.direct = 'left';
                this.left = this.right = false;
                this.up = this.down = true;
            }
            break;
        case 38:
            if (this.up) {
                this.direct = 'up';
                this.up = this.down = false;
                this.left = this.right = true;
            }
            break;
        case 39:
            if (this.right) {
                this.direct = 'right';
                this.right = this.left = false;
                this.up = this.down = true;
            }
            break;
        case 40:
            if (this.down) {
                this.direct = 'down';
                this.down = this.up = false;
                this.right = this.left = true;
            }
            break;
    }
}
// 按钮监控
function bindEvent() {
    close.onclick = function () {
        loser.style.display = 'none';
        startGameBool = true;
        startAndPaush();
    }
    startBtn.onclick = function () {
        startPage.style.display = 'none';
        startAndPaush();
    }
    startP.onclick = function () {
        startAndPaush();
    }
}
// 暂停 | 开始控制桉树
function startAndPaush() {
    if (startPaushBool) {
        if (startGameBool) {
            startGame();
            startGameBool = false;
        }

        startP.setAttribute('src', 'Snakeimg/pause.png');

        document.onkeydown = function (e) {
            var code = e.keyCode;
            setDirect(code);
        }
        startPaushBool = false;

        snakeMove = setInterval(function () {
            move();

        }, speed);
        // console.log("test1");

    } else {
        startP.setAttribute('src', 'Snakeimg/start.png');
        clearInterval(snakeMove);
        document.onkeydown = function (e) {
            e.returnValue = false;
            return false;
        }
        startPaushBool = true;
        // console.log("test2");
    }
}