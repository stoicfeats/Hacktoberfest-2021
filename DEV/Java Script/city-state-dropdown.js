var citiesByState = {
    Rajasthan: ["Bikaner", "Jaipur", "Jodhpur", "Ajmer", "Jaisalmer"],
    Maharashtra: ["Mumbai", "Pune", "Nagpur"],
    Kerala: ["kochi", "Kanpur"],
    Haryana: ["Gurugram", "Hisar", "sonipat", "panipat", "Rohtak"]
}

// to be called on change and on load in a select tag in following manner
// onChange =  makeSubmenu(this.value)
function makeSubmenu(value) {
    if (value.length == 0) document.getElementById("citySelect").innerHTML = "<option></option>";
    else {
        var citiesOptions = "";
        for (cityId in citiesByState[value]) {
            citiesOptions += "<option>" + citiesByState[value][cityId] + "</option>";
        }
        document.getElementById("citySelect").innerHTML = citiesOptions;
    }
}

window.onload = function () {
    document.getElementById("countrySelect").selectedIndex = 0;
    document.getElementById("citySelect").selectedIndex = 0;
}