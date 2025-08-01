const open=document.querySelector("#menu-open-button");
const close=document.querySelector("#menu-close-button");
const navlink=document.querySelectorAll(".nav-menu .nav-link")
open.addEventListener("click",()=>{
    document.body.classList.toggle("show-mobile-menu");
})
close.addEventListener("click",()=>open.click());
navlink.forEach(link=>{
  link.addEventListener("click",()=>open.click());
})

const swiper = new Swiper('.slider-wrapper', {
  loop: true,
  grabCursor:true,
  spaceBetween:25,

  // If we need pagination
  pagination: {
    el: '.swiper-pagination',
    clickable: true,
    dynamicBullets:true
  },

  // Navigation arrows
  navigation: {
    nextEl: '.swiper-button-next',
    prevEl: '.swiper-button-prev',
  },

  breakpoints:{
    0:{
        slidesPerView:1
    },
    768:{
        slidesPerView:2
    },
    1024:{
        slidesPerView:3
    },
  }
});

