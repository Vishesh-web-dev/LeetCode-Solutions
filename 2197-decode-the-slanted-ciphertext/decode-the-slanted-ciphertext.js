/**
 * @param {string} encodedText
 * @param {number} rows
 * @return {string}
 */
var decodeCiphertext = function (encodedText, rows) {
    let matrix = [];
    const cols = encodedText.length / rows;
    for (let i = 0; i < rows; i++) {
        let str = [];
        for (let j = 0; j < cols; j++) {
            str.push(encodedText[i * cols + j]);
        }
        matrix.push(str);
    }
    let decodedText = [];
    for (let startCol = 0; startCol < cols; startCol++) {
        let row = 0;
        let col = startCol;

        while (row < rows && col < cols) {
            decodedText.push(matrix[row][col]);
            row++;
            col++;
        }
    }
    return decodedText.join('').trimEnd();
};