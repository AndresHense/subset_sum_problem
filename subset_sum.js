
function subset_sum(C,p,i,k,exists,setter){
    if(k<0)return 
    if(k==0){
        //console.log('hey');
        //sol=[...p];
        setter(p);
        exists=true;
        return;
    }
    if(i==-1){
        return;
    }else{  
        p[i]=1;
        //console.log(p,"i: ",i,"k:",k,"C[i]",C[i]);
        subset_sum(C,p,i-1,k-C[i],exists,setter);
        if(exists)return;
        p[i]=0;
        //console.log(p,"i: ",i,"k:",k,"C[i]",C[i]);
        subset_sum(C,p,i-1,k,exists,setter);
        if(exists)return;
    }
    return;
}

module.exports=subset_sum;