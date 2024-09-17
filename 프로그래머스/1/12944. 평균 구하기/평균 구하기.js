function solution(arr) {
    let answer = 0;
    let sum = 0;
    
    for(let i of arr) {
        sum += i;
    }
    
    //평균 구하기
    answer = sum / arr.length;
    
    return answer;
}