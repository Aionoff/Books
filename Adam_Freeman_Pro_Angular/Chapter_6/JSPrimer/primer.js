"use strict";
var NameAndWeather_1 = require("./modules/NameAndWeather");
var name = new NameAndWeather_1.Name("Adam", "Freeman");
var loc = new NameAndWeather_1.WeatherLocation("raining", "London");
console.log(name.nameMessage);
console.log(loc.weatherMessage);
