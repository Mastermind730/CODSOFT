let string =""
let buttons=document.querySelectorAll(".number");

Array.from(buttons).forEach((button)=>{
    button.addEventListener('click',(e)=>{
        if(e.target.innerText=='='){
            string=eval(string)
            // document.querySelector(".input").value=string;
        }else if(e.target.innerText=="AC"){
            string="";
        }
        else{
            console.log(e.target.innerText)

            string=string + e.target.innerText;

            console.log(string)
        }
        document.querySelector(".input").value=string;

    })
})
