/**
 * @param {string} moves
 * @return {boolean}
 */
var judgeCircle = function(moves) {
    // if l +1, if r = -1, if u +1, if d = -1
    let magnitudeV = 0, magnitudeH = 0
    moves.split('').forEach((move) => {
        if(move === 'U'){
            magnitudeV++;
        }else if(move === 'D'){
            magnitudeV--;
        }else if(move === 'L'){
            magnitudeH++;
        }else {
            magnitudeH--;
        }
    })
    return magnitudeV === 0 && magnitudeH == 0;
};