var Observable = require("FuseJS/Observable");
var countryNames = require("Data/countryNames");
var SystemSounds = require("SystemSounds");
var foundUp = false;
var countryData = require("Data/country");
var movieData = require("Data/movies");
var tvData = require("Data/tv");
var sportData = require("Data/sports");
var movieDataMod = Observable();
var tvDataMod = Observable();
var tvDataUpcoming = Observable();
var sportDataMod = Observable();
var sportDataUpcoming = Observable();
var countryDataMod = Observable();
var countryDataUpcoming = Observable();
var up = Observable();
var dateTitle = Observable();
var pinsEmpty = Observable(true);
var noFavVisibility = Observable(true);
var currId = Observable();
var currType = Observable();
var isPinned = Observable(false);
console.log("App Refresed in Main");

//Dates and Everythings
var months = ["JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"];
var monthsEx = ["JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"];
var currDate = new Date().getDate();
var currMonth = new Date().getMonth();
currMonthEx = monthsEx[currMonth];
currMonth = months[currMonth];
var currDateStr = currDate + " " + currMonth + " 2016";
dateTitle.value = currDate + " " + currMonthEx + " '16";
var today = new Date(currDateStr);

//Movie Current Values

var mTitle = Observable();
var mRelease = Observable();
var mDesc = Observable();
var mDirector = Observable();
var mProducer = Observable();
var mBudget = Observable();
var mRunningTime = Observable();
var mDate = Observable();

//Tv Current Values

var tTitle = Observable();
var tSeason = Observable();
var cEpisodes = Observable();
var tEpisodesPast = Observable();
var tEpisodesFuture = Observable();
var sEpisodesPast = Observable();
var sEpisodesFuture = Observable();

var tOver = Observable();

//Tv Current Values

var sTitle = Observable();
var sSport = Observable();
var sEpisodes = Observable();
var sOver = Observable();


var cTitle = Observable();

var pinBtnTitle = Observable();
var pinBtnOpacity = Observable();

var pins = Observable();

var storage = require('FuseJS/Storage');
var write;


pinBtnTitle.value = "PIN TO HOME";
pinBtnOpacity.value = 1;

//Required Functions

var lifecycle = require('FuseJS/Lifecycle');
lifecycle.onEnteringForeground = function() {
      console.log("Entering Foreground");
};

var lifecycle = require('FuseJS/Lifecycle');
lifecycle.onEnteringInteractive = function() {
      console.log("Entering Interactive State");
};

var pinData = storage.readSync("pinsNew.txt");
if(pinData == ""){
    console.log("Nothing in Pins Yet After");

}else{
    console.log("Read Successful");
    //console.log(JSON.parse(pinData));
    pinDataParsed = JSON.parse(pinData);
    for(i=0;i<pinDataParsed.length;i++){
      pins.add(pinDataParsed[i]);
    }


    //console.log(JSON.stringify(pins));
}


dateStatus = function(date,limit){
  var tempDate = new Date(date +" 2016");
  var absFlag = false;
  var timeDiff = tempDate.getTime() - today.getTime();
  var limitStatus = limit;
  if(timeDiff < 0){
    absFlag = true;
    timeDiff = Math.abs(timeDiff);
  }
  var diffDays = Math.ceil(timeDiff / (1000 * 3600 * 24));
  var status = new Object();
  status.daysTo = diffDays;
  if(absFlag){
    status.status = -1;
    return status;
  }else{
    if(diffDays >= 0 && diffDays < limitStatus){
      status.status = 0;
      return status;
    }else if(diffDays >= limitStatus){
      status.status = 1;
      return status;
    }
  }
}

parseMovieData = function(){
  for(i=0;i<movieData.length;i++){

    var obj = new Object();
    obj.name = movieData[i].name;
    obj.date = movieData[i].date;
    obj.desc = movieData[i].desc;
    obj.release = movieData[i].release;
    obj.director = movieData[i].director;
    obj.producer = movieData[i].producer;
    obj.runningTime = movieData[i].runningTime;
    var status = dateStatus(movieData[i].date,31);
    if(status.status == 1){
      obj.status = "LATER";
    }else if(status.status == 0){
      obj.status = "SOON";
    }else if(status.status == -1){
      obj.status = "PAST";
    }
    obj.daysTo = status.daysTo + " DAYS";
    obj.id = i;
    movieDataMod.add(obj);
  }
}

parseTvData = function(){
  for(i=0;i<tvData.length;i++){
    var obj = new Object();
    obj.name = tvData[i].name;
    obj.episodes = tvData[i].episodes;
    obj.season = tvData[i].season;
    var statusFirst = dateStatus(tvData[i].episodes[0].date,31);
    var statusLast = dateStatus(tvData[i].episodes[tvData[i].episodes.length - 1].date,31);
    if(statusFirst.status == 1){
      obj.status = "LATER";
    }else if(statusFirst.status == -1 && (statusLast.status == 0 || statusLast.status == 1)){
      obj.status = "LIVE";
    }else if(statusLast.status == -1){
      obj.status = "PAST";
    }else if(statusFirst.status == 0 ){
        if(statusFirst.daysTo == 0){
          obj.status = "LIVE";
        }else{
          obj.status = "LATER";
        }
    }

    obj.id = i;
    tvDataMod.add(obj);
    for(j=0;j<tvData[i].episodes.length;j++){
      var objU = new Object();
      objU.name = tvData[i].name;
      objU.date = tvData[i].episodes[j].date;
      objU.desc = tvData[i].episodes[j].episode + " - " + tvData[i].episodes[j].desc;
      var status = dateStatus(tvData[i].episodes[j].date,5);
      if(status.daysTo == 0){
        objU.daysTo = "TODAY";
      }else{
        objU.daysTo = status.daysTo + " DAYS";
      }
      if(status.status == 1){
        objU.status = "LATER";
      }else if(status.status == 0){
        objU.status = "SOON";
        tvDataUpcoming.add(objU);
      }else if(status.status == -1){
        objU.status = "PAST";
      }

    }
  }


}

parseSportData = function(){
  for(i=0;i<sportData.length;i++){
    var obj = new Object();
    obj.name = sportData[i].name;
    obj.events = sportData[i].events;
    obj.sport = sportData[i].sport;
    var statusFirst = dateStatus(sportData[i].events[0].date,31);
    var statusLast = dateStatus(sportData[i].events[sportData[i].events.length - 1].date,31);
    if(statusFirst.status == 1){
      obj.status = "LATER";
    }else if(statusFirst.status == -1 && (statusLast.status == 0 || statusLast.status == 1)){
      obj.status = "LIVE";
    }else if(statusLast.status == -1){
      obj.status = "PAST";
    }else if(statusFirst.status == 0 ){
        if(statusFirst.daysTo == 0){
          obj.status = "LIVE";
        }else{
          obj.status = "LATER";
        }
    }
    obj.id = i;
    sportDataMod.add(obj);
    for(j=0;j<sportData[i].events.length;j++){
      var objU = new Object();
      objU.name = sportData[i].name;
      objU.sport = sportData[i].sport;
      objU.date = sportData[i].events[j].date;
      objU.title = sportData[i].events[j].title;
      var status = dateStatus(sportData[i].events[j].date,2);
      if(status.daysTo == 0){
        objU.daysTo = "TODAY";
      }else{
        objU.daysTo = status.daysTo + " DAYS";
      }

      if(status.status == 1){
        objU.status = "LATER";
      }else if(status.status == 0){
        objU.status = "SOON";
        sportDataUpcoming.add(objU);
      }else if(status.status == -1){
        objU.status = "PAST";
      }

    }
  }

}


parseHolidayData = function(){
  for(i=0;i<countryData.length;i++){
    var obj = new Object();
    obj.name = countryData[i].name;
    obj.holidays = countryData[i].holidays;
    obj.id = i;
    countryDataMod.add(obj);
    var country = countryData[i].name;
    if(country == "India" || country == "Argentina" || country == "Australia" || country == "Brazil" || country == "Canada" || country == "Germany" || country == "Hong Kong" || country == "Indonesia" || country == "Israel" || country == "Italy" || country == "Japan" || country == "Mexico" || country == "New Zealand" || country == "Philippines" || country == "Russia" || country == "South Africa" || country == "Spain" || country == "United Kingdom" || country == "USA"){
          for(j=0;j<countryData[i].holidays.length;j++){
            var objU = new Object();
            objU.name = countryData[i].name;
            objU.date = countryData[i].holidays[j].date;
            objU.title = countryData[i].holidays[j].title;
            var status = dateStatus(countryData[i].holidays[j].date,5);
            if(status.daysTo == 0){
              objU.daysTo = "TODAY";
            }else{
              objU.daysTo = status.daysTo + " DAYS";
            }

            if(status.status == 1){
              objU.status = "LATER";
            }else if(status.status == 0){
              objU.status = "SOON";
              countryDataUpcoming.add(objU);
            }else if(status.status == -1){
              objU.status = "PAST";
            }

          }
    }
  }

}

movieListHandler = function(args){

  mTitle.value = args.data.name;
  mDate.value = args.data.date;
  mDesc.value = args.data.desc;
  mRelease.value = args.data.release;
  mDirector.value = args.data.director;
  mProducer.value = args.data.producer;
  mRunningTime.value = args.data.runningTime;
  currId.value = args.data.id;
  currType.value = "movies";
  console.log("Pins Data as Follows");
  //console.log(JSON.stringify(pins));

  var checkPinned = false;
  for(j=0;j<pins._values.length;j++){
      if(pins._values[j].type == currType.value && pins._values[j].typeId == currId.value){
        checkPinned = true;
        break;
      }
  }
  if(checkPinned){
    isPinned.value = true;
    pinBtnTitle = "REMOVE FROM HOME";
    pinBtnOpacity.value = 0.5;
  }else{
    isPinned.value = false;
    pinBtnTitle = "PIN TO HOME";
    pinBtnOpacity.value = 1;
  }

}

tvListHandler = function(args){

  tEpisodesPast.clear();
  tEpisodesFuture.clear();
  tTitle.value = args.data.name;
  tSeason.value = args.data.season;
  var length = args.data.episodes.length - 1;
  var lastEpisode = args.data.episodes[length];
  var status = dateStatus(lastEpisode.date,31);
  if(status.status == -1){
    for(i=0;i<args.data.episodes.length;i++){
        tEpisodesPast.add(args.data.episodes[i]);
        //tEpisodesFuture.add(args.data.episodes[i]);
    }

  }else{
    for(i=0;i<args.data.episodes.length;i++){
        var episode = args.data.episodes[i];
        status = dateStatus(episode.date,31);
        if(status.status != -1){
            //tEpisodesPast.add(args.data.episodes[i]);
            tEpisodesFuture.add(args.data.episodes[i]);
        }
    }

  }

  currId.value = args.data.id;
  currType.value = "tv";

  var checkPinned = false;
  console.log("Pins Data as Follows");
  //console.log(JSON.stringify(pins));
  for(j=0;j<pins._values.length;j++){
      if(pins._values[j].type == currType.value && pins._values[j].typeId == currId.value){
        checkPinned = true;
        break;
      }
  }
  if(checkPinned){
    isPinned.value = true;
    pinBtnTitle = "REMOVE FROM HOME";
    pinBtnOpacity.value = 0.5;
  }else{
    isPinned.value = false;
    pinBtnTitle = "PIN TO HOME";
    pinBtnOpacity.value = 1;
  }

}


sportListHandler = function(args){

  sTitle.value = args.data.name;
  sSport.value = args.data.sport;
  sEpisodesPast.clear();
  sEpisodesFuture.clear();
  var length = args.data.events.length - 1;
  var lastEpisode = args.data.events[length];
  var status = dateStatus(lastEpisode.date,31);
  if(status.status == -1){
    sOver.value = "Y";
    for(i=0;i<args.data.events.length;i++){
        sEpisodesPast.add(args.data.events[i]);
    }

  }else{
    sOver.value = "N";
    for(i=0;i<args.data.events.length;i++){
        var episode = args.data.events[i];
        status = dateStatus(episode.date,31);
        if(status.status != -1){
            sEpisodesFuture.add(args.data.events[i]);
        }
    }

  }

  currId.value = args.data.id;
  currType.value = "sport";
  console.log("Pins Data as Follows");
  //console.log(JSON.stringify(pins));
  var checkPinned = false;
  for(j=0;j<pins._values.length;j++){
      if(pins._values[j].type == currType.value && pins._values[j].typeId == currId.value){
        checkPinned = true;
        break;
      }
  }
  if(checkPinned){
    isPinned.value = true;
    pinBtnTitle = "REMOVE FROM HOME";
    pinBtnOpacity.value = 0.5;
  }else{
    isPinned.value = false;
    pinBtnTitle = "PIN TO HOME";
    pinBtnOpacity.value = 1;
  }

}

countryListHandler = function(args){

  cTitle.value = args.data.name;
  cEpisodes.clear();

  var length = args.data.holidays.length - 1;
  var lastEpisode = args.data.holidays[length];
  var status = dateStatus(lastEpisode.date,31);
  if(status.status != -1){
    for(i=0;i<args.data.holidays.length;i++){
        var episode = args.data.holidays[i];
        status = dateStatus(episode.date,31);
        if(status.status != -1){
            cEpisodes.add(args.data.holidays[i]);
        }
    }

  }
  console.log("Pins Data as Follows");
  //console.log(JSON.stringify(pins));
  currId.value = args.data.id;
  currType.value = "holiday";

  var checkPinned = false;
  for(j=0;j<pins._values.length;j++){
      if(pins._values[j].type == currType.value && pins._values[j].typeId == currId.value){
        checkPinned = true;
        break;
      }
  }
  if(checkPinned){
    isPinned.value = true;
    pinBtnTitle = "REMOVE FROM HOME";
    pinBtnOpacity.value = 0.5;
  }else{
    isPinned.value = false;
    pinBtnTitle = "PIN TO HOME";
    pinBtnOpacity.value = 1;
  }

}


pinHandler = function(args){
  if(isPinned.value){
    removePin();
    SystemSounds.toastIt("REMOVED FAVOURITES FROM HOME");
    console.log("Removed Pin From Home");
  }else{
    addPin();
    SystemSounds.toastIt("ADDED FAVOURITES TO HOME");
    console.log("Added Pin To Home");
  }
}


addPin = function(args){
  //console.log(JSON.stringify(lastPinData));
  isPinned.value = true;
  pinBtnTitle.value = "REMOVE FROM HOME";
  pinBtnOpacity.value = 0.5;


  var pinData = new Object();
  if(currType.value == 'holiday'){
    pinData.title = countryData[currId.value].name;
    pinData.type = "holiday";
    pinData.typeId = currId.value;
    pinData.daysRemaining = "";
    pinData.status = "";
    pins.add(pinData);
  }else if(currType.value == 'movies'){
    console.log("Adding a Movie");
    pinData.title = movieData[currId.value].name;
    pinData.type = "movies";
    pinData.typeId = currId.value;
    pinData.daysRemaining = "";
    pinData.status = "";
    pins.add(pinData);
  }else if(currType.value == 'tv'){
    pinData.title = tvData[currId.value].name;
    pinData.type = "tv";
    pinData.typeId = currId.value;
    pinData.daysRemaining = "";
    pinData.status = "";
    pins.add(pinData);
  }else if(currType.value == 'sport'){
    pinData.title = sportData[currId.value].name;
    pinData.type = "sport";
    pinData.typeId = currId.value;
    pinData.daysRemaining = "";
    pinData.status = "";
    pins.add(pinData);
  }
  updatePins();
  ////console.log(JSON.stringify(pins._values));
  writeToFile(pins._values);
};


removePin = function(args){
  //console.log(JSON.stringify(currType.value));
  //console.log(JSON.stringify(currId.value));
  isPinned.value = false;
  pinBtnTitle = "PIN TO HOME";
  pinBtnOpacity.value = 1;
  pins.removeWhere(function(pin){
    return pin.type == currType.value && pin.typeId == currId.value;
  });
  updatePins();
  writeToFile(pins._values);

};


updatePins = function(){

  for(i=0;i<pins._values.length;i++){
    if(pins._values[i].type == "holiday"){
      for(j=0;j<countryData[pins._values[i].typeId].holidays.length;j++){

            var tempDate = new Date(countryData[pins._values[i].typeId].holidays[j].date +" 2016");
            if(tempDate.getTime() - today.getTime() >= 0){
                break;
            }
      }
      var days = countryData[pins._values[i].typeId].holidays[j].date;
      var hol = countryData[pins._values[i].typeId].holidays[j].title;

      pins._values[i].daysRemaining = days;
      pins._values[i].daysRemaining = hol+" "+remainingDays(pins._values[i].daysRemaining);

      //console.log(days);
      var tempDate = new Date(days +" 2016");
      var diff = tempDate.getTime() - today.getTime();
      var diffDays = Math.ceil(diff / (1000 * 3600 * 24));

      if(diffDays < 0){
        pins._values[i].status = "past";
        pins.removeAt(i);
      }else if(diffDays >= 0){
        pins._values[i].status = "live";
      }

    }else if(pins._values[i].type == "tv"){
      for(j=0;j<tvData[pins._values[i].typeId].episodes.length;j++){

            var tempDate = new Date(tvData[pins._values[i].typeId].episodes[j].date +" 2016");
            if(tempDate.getTime() - today.getTime() >= 0){
                break;
            }
      }


      var days = tvData[pins._values[i].typeId].episodes[j].date;
      var releaseFlag = false;
      //console.log("First Date");
      //console.log(tvData[pins._values[i].typeId].episodes[0].date);
      //console.log("Next Date");
      //console.log(days);
      if(tvData[pins._values[i].typeId].episodes[0].date == days){
        releaseFlag = true;
      }
      var ep = tvData[pins._values[i].typeId].episodes[j].episode;
      pins._values[i].daysRemaining = days;
      pins._values[i].daysRemaining = ep + " " + remainingDays(pins._values[i].daysRemaining);
      //console.log(days);
      var tempDate = new Date(days +" 2016");
      var diff = tempDate.getTime() - today.getTime();
      var diffDays = Math.ceil(diff / (1000 * 3600 * 24));

      if(diffDays < 0){
        pins._values[i].status = "past";
        pins.removeAt(i);
      }else if(diffDays >= 0){
        pins._values[i].status = "live";
      }

    }else if(pins._values[i].type == "sport"){
      for(j=0;j<sportData[pins._values[i].typeId].events.length;j++){

            var tempDate = new Date(sportData[pins._values[i].typeId].events[j].date +" 2016");
            if(tempDate.getTime() - today.getTime() >= 0){
                break;
            }
      }
      var days = sportData[pins._values[i].typeId].events[j].date;
      var releaseFlag = false;

      if(sportData[pins._values[i].typeId].events[0].date == days){
        releaseFlag = true;
      }
      var ep = sportData[pins._values[i].typeId].events[j].title;
      pins._values[i].daysRemaining = days;
      pins._values[i].daysRemaining = remainingDays(pins._values[i].daysRemaining) + " - " + ep;
      //console.log(days);
      var tempDate = new Date(days +" 2016");
      var diff = tempDate.getTime() - today.getTime();
      var diffDays = Math.ceil(diff / (1000 * 3600 * 24));

      if(diffDays < 0){
        pins._values[i].status = "past";
        pins.removeAt(i);
      }else if(diffDays >= 0){
        pins._values[i].status = "live";
      }

    }else if(pins._values[i].type == "movies"){

      var days = movieData[pins._values[i].typeId].date;
      pins._values[i].daysRemaining = days;
      pins._values[i].daysRemaining = remainingDays(pins._values[i].daysRemaining);
      var tempDate = new Date(days +" 2016");
      var diff = tempDate.getTime() - today.getTime();
      var diffDays = Math.ceil(diff / (1000 * 3600 * 24));

      if(diffDays < 0){
        pins._values[i].status = "past";
        pins.removeAt(i);
      }else if(diffDays >= 0){
        pins._values[i].status = "live";
      }


    }

  }

}

remainingDays = function(date){
  var tempDate = date + " 2016";
  tempDate = new Date(tempDate);
  var absFlag = false;
  var timeDiff = tempDate.getTime() - today.getTime();
  if(timeDiff < 0){
    absFlag = true;
    timeDiff = Math.abs(timeDiff);
  }
  var diffDays = Math.ceil(timeDiff / (1000 * 3600 * 24));
  if(absFlag){
    if(diffDays == 0){
      diffDays = "today";
    }else if(diffDays == 1){
      diffDays = "yesterday";
    }else if(diffDays > 1 && diffDays < 31){
      diffDays = diffDays+" days ago";
    }else if(diffDays > 31){
      var days = diffDays%31;
      var month = parseInt(diffDays/31);
      diffDays = month+" months "+ days +" days ago";
    }
  }else{
    if(diffDays == 0){
      diffDays = "today";
    }else if(diffDays == 1){
      diffDays = "tommorow";
    }else if(diffDays > 1 && diffDays < 31){
      diffDays = "in "+diffDays+" days";
    }else if(diffDays > 31){
      var days = diffDays%31;
      var month = parseInt(diffDays/31);
      diffDays = "in "+month+" months "+ days +" days";
    }
  }
  return diffDays;

};


retriveUp = function(args){
  //console.log("Retreiving Upcoming");
  var limit = 3;

  for(i=0;i<movieData.length;i++){
    var upData = new Object();
    var tempDate = new Date(movieData[i].date +" 2016");
    var diff = tempDate.getTime() - today.getTime();
    var diffDays = Math.ceil(diff / (1000 * 3600 * 24));
    if(diffDays > 0  && diffDays < limit){
      upData.title = movieData[i].name;
      upData.type = "movies";
      upData.typeTitle = "MOVIES";
      upData.typeId = i;

      upData.daysRemaining = remainingDays(movieData[i].date);

      up.add(upData);
    }
  }

  for(i=0;i<tvData.length;i++){
    for(j=0;j<tvData[i].episodes.length;j++){
      var upData = new Object();
      var tempDate = new Date(tvData[i].episodes[j].date +" 2016");
      var diff = tempDate.getTime() - today.getTime();
      var diffDays = Math.ceil(diff / (1000 * 3600 *24));
      if(diffDays > 0 && diffDays < limit){
        upData.title = tvData[i].name;
        upData.type = "tv";
        upData.typeTitle = "TV";
        upData.typeId = i;

        upData.daysRemaining = tvData[i].episodes[j].episode + " " +remainingDays(tvData[i].episodes[j].date +" 2016");

        up.add(upData);
      }
    }
  }

  for(i=0;i<sportData.length;i++){
    for(j=0;j<sportData[i].events.length;j++){
      var upData = new Object();
      var tempDate = new Date(sportData[i].events[j].date +" 2016");
      var diff = tempDate.getTime() - today.getTime();
      var diffDays = Math.ceil(diff / (1000 * 3600 *24));
      if(diffDays > 0 && diffDays < limit){
        upData.title = sportData[i].name;
        upData.type = "sport";
        upData.typeTitle = "SPORTS";
        upData.typeId = i;

        upData.daysRemaining = remainingDays(sportData[i].events[j].date +" 2016") + " - " +sportData[i].events[j].title;

        up.add(upData);
      }
    }
  }

  //console.log(JSON.stringify(up));

}



writeToFile = function(data){
  data = JSON.stringify(data);
  //console.log(data);
  var write = storage.write("pinsNew.txt", data);

}

addNativeEvent = function(args) {
    //SystemSounds.addEventOther();
    console.log("Add Event to Calendar");
    console.log(currType.value);
    console.log(currId.value);
    //console.log(JSON.stringify(args.data));

    /*if(currType.value == "holiday"){
      var date = args.data.date;
      date = date.split(" ");
      var day = date[0];
      var monthTemp = date[1];
      var monthId = months.indexOf(monthTemp);
      monthId = monthId.toString();
      var title = args.data.title;

      SystemSounds.addEventOther("2016",monthId,day,title);

    }else if(currType.value == "tv"){
      var date = args.data.date;
      date = date.split(" ");
      var day = date[0];
      var monthTemp = date[1];
      var monthId = months.indexOf(monthTemp)
      monthId = monthId.toString();
      var title = tvData[currId.value].name + " - " + args.data.episode;

      SystemSounds.addEventOther("2016",monthId,day,title);

    }else if(currType.value == "sport"){
      var date = args.data.date;
      date = date.split(" ");
      var day = date[0];
      var monthTemp = date[1];
      var monthId = months.indexOf(monthTemp);
      monthId = monthId.toString();
      var title = args.data.title;

      SystemSounds.addEventOther("2016",monthId,day,title);

    }else if(currType.value == "movies"){

      var date = movieData[currId.value].date;
      date = date.split(" ");
      var day = date[0];
      var monthTemp = date[1];
      var monthId = months.indexOf(monthTemp);
      monthId = monthId.toString();
      var title = movieData[currId.value].name;

      SystemSounds.addEventOther("2016",monthId,day,title);

    }*/

}


//Call Functions

parseMovieData();
parseTvData();
parseSportData();
parseHolidayData();
updatePins();


retriveUp();

console.log(movieData.length);
var sum = 0;
for(i=0;i<tvData.length;i++){
    sum = sum + tvData[i].episodes.length;
}
console.log(sum)
var sum = 0;
for(i=0;i<sportData.length;i++){
    sum = sum + sportData[i].events.length;
}
console.log(sum)
var sum = 0;
for(i=0;i<countryData.length;i++){
    sum = sum + countryData[i].holidays.length;
}
console.log(sum)



module.exports = {
  movieDataMod:movieDataMod,
  tvDataMod:tvDataMod,
  tvDataUpcoming:tvDataUpcoming,
  sportDataMod:sportDataMod,
  sportDataUpcoming:sportDataUpcoming,
  countryDataMod:countryDataMod,
  countryDataUpcoming:countryDataUpcoming,
  movieListHandler:movieListHandler,
  tvListHandler:tvListHandler,
  sportListHandler:sportListHandler,
  countryListHandler:countryListHandler,
  mTitle:mTitle,
  mRelease:mRelease,
  mDesc:mDesc,
  mDirector:mDirector,
  mProducer:mProducer,
  mRunningTime:mRunningTime,
  mDate:mDate,
  tTitle:tTitle,
  tSeason:tSeason,
  cEpisodes:cEpisodes,
  cTitle:cTitle,
  tOver:tOver,
  sTitle:sTitle,
  cTitle:cTitle,
  sSport:sSport,
  sEpisodes:sEpisodes,
  tEpisodesPast:tEpisodesPast,
  tEpisodesFuture:tEpisodesFuture,
  sEpisodesPast:sEpisodesPast,
  sEpisodesFuture:sEpisodesFuture,
  sOver:sOver,
  pinHandler:pinHandler,
  pinBtnOpacity:pinBtnOpacity,
  pinBtnTitle:pinBtnTitle,
  pins:pins,
  up:up,
  pinsEmpty:pinsEmpty,
  addNativeEvent:addNativeEvent,
  noFavVisibility:noFavVisibility,
  dateTitle:dateTitle

}
