const subset_sum=require('./subset_sum');

function isContained(a,b){
    let res=false;
    for(let j=0;j<b.length;j++){
        res |= a.length===b[j].length &&
        a.every((v,i)=> (v==b[j][i]));
    }
    return res;
}

const C=[6,1,6];

const p=[0,0,0];
let existe=false;
let sol=[];
function setter(p){
    sol=[...p];
}
test('try 6,12,6',()=>{
    subset_sum(C,p,C.length-1,12,false,setter)
    console.log(sol)
    expect(isContained(sol,[[1,0,1],[0,1,0]])).toBeTruthy()
});