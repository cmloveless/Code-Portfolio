var friends = {
    bill: {
        firstName: 'Bill',
        lastName: 'Bones',
        number: '867-5309',
        address: ['123 Easy St.', 'Freetown', 'MD', '00000']
    },
    steve: {
        firstName: 'Steve',
        lastName: 'Stones',
        number: '555-5555',
        address: ['666 Har way', 'Hell', 'WV', '33333']
    }
};
var list = function(friend) {
    for (var key in friends) {
        console.log(key);
    }
}

var search = function(name) {
    for (var key in friends) {
        if (name === friends[key].firstName) {
            console.log(friends[key]);
            return friends[key];
        }
    }
}