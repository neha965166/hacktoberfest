  $(document).ready(function(){
    $(window).scroll(function(){
        
    if(this.scrollY >20){
        $('.navbar').addClass("sticky");
    }else{
        $('.navbar').removeClass("sticky");
    }
    if(this.scroll > 500){
      $('.scroll-up-btn').addClass("show");
    }else{
      $('.scroll-up-btn').removeClass("show");
    }
    });
 //slide -up script
    $('.scroll-up-btn').click(function(){
      $('html').animate({scrollTop: 0})
    });
// toggle menu/navbar script
    $('.menu-btn').click(function(){
      $('.navbar .menu').toggleClass("active");
      $('.menu-btn i').toggleClass("active");
    });  
//typing animation script
    var typed = new Typed(".typing", {
     strings: ["web Developer", "C++", "Git& Github", "Python"],
     typeSpeed: 100,
     backSpeed: 60,
     loop: true
});
var typed = new Typed(".typing-2", {
  strings: ["web Developer", "C++", "Git& Github", "Python"],
  typeSpeed: 100,
  backSpeed: 60,
  loop: true
});
  

  });















});