/**
 * @param {string} word
 * @return {number}
 */
var numberOfSpecialChars = function(word) {
     const chars = new Set(word);
    let count = 0;

    for (let char of chars) {
        if (char >= 'a' && char <= 'z' && chars.has(char.toUpperCase())) {
            count++;
        }
    }
    return count;
};