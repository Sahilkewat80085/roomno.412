const url = "https://icanhazdadjoke.com/";
 
async function getJokes(){
    try{
        let res=await axios.get(url);
        console.log(res);
    } catch{
        console.log (error);
    }
}