function solution(name, yearning, photo) {
    var answer = [];
    
    for(let j = 0; j < photo.length; j++) {
        let score = 0;
        for(let i = 0; i < name.length; i++) {
        let count = 0;
            for(let h = 0; h < photo[j].length; h++) {
                if(name[i] === photo[j][h]) {
                    count++;
                }
            }
            score += count * yearning[i];
        }
        answer.push(score);
    }
    
    return answer;
}