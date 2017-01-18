T.init()
Hu.init()
setInterval(sendTemperature, 30000)
function (sendTemperature, (){
    L.send(1, T.read());
}

B.on('press', onPress)
function onPress(){
L.send(2,Hu.read());
}