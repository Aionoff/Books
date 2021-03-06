import {Name, WeatherLocation} from "./modules/NameAndWeather";
import {Name as OtherName} from "./modules/DuplicateName";
import { TempConverter } from "./tempConverter";

let name = new Name("Adam", "Freeman");
let loc = new WeatherLocation("raining", "London");
let other = new OtherName();

let cTemp = TempConverter.convertFtoC(38);

console.log(name.nameMessage);
console.log(loc.weatherMessage);
console.log(other.message);
console.log(cTemp);
