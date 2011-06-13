     var lasturl = localStorage.lasturl;
    if (window.navigator.standalone && history.length == 1 && lasturl && lasturl != window.location.href && lasturl != window.location.pathname && window.location.pathname != "/user") {
      delete localStorage.lasturl;
      $(location).attr('href', lasturl);
    }

function setlinks(){
  $('a').not('.external').not("[href*='mailto']").not("[href*='admin']").bind('click',function(event){
    event.preventDefault();
    localStorage.lasturl = $(this).attr('href');
    $(location).attr('href',$(this).attr('href'));
  });
  $('.field-type-ca-phone .field-item').each(function (index) {
    $(this).html("<a href='tel:" + $(this).text() + "'>" + $(this).text() + "</a>");
  });
}

function getlink(content){
  return "<a>" + content + "</a>";
}


$(document).ready(function(){
//window.navigator.standalone
  if(window.navigator.standalone){
      $("#page").addClass("ios");
      setlinks();
  }
});
