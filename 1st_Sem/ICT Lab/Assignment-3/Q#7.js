var orders = [];

function addOrder(order){
    orders.push(order);
    console.log("\nOrder added: " + order);
}

function deleteOrder(index){
    if(index > 0 && index < orders.length){
        let deletedOrder = orders.splice(index,index);
        console.log("\nOrder deleted: " + deletedOrder);
    }
    else{
        consol.log("\nInvalid index");
    }
}

function displayOrders(){
    if(orders.length > 0){
        console.log("\nOrders list:");
        for(let i = 0 ; i < orders.length ; i++){
            console.log((i+1) + ": " + orders[i]);
        }
    }
    else{
        console.log("\nNo orders available");
    }
}

addOrder("Fried Fish");
addOrder("Chicken Tikka");
addOrder("Paratha");

displayOrders();

deleteOrder(1);

displayOrders();