console.log('ky')
const sliderJuri = new Swiper('.slider__container--juri', {
  // slidesPerView: 1,
  // spaceBetween: 0,
  loop: true,

  breakpoints: {
    768: {
      slidesPerView: 2,
      spaceBetween: 40,
      navigation: {
        nextEl: ".swiper-button-next",
        prevEl: ".swiper-button-prev",
      },
    },
    1366: {
      slidesPerView: 4,
      spaceBetween: 40,
    }
  }
});

const sliderReviews = new Swiper('.slider__container--reviews', {
  // slidesPerView: 1,
  // spaceBetween: 0,
  loop: true,

  breakpoints: {
    768: {
      navigation: {
        nextEl: ".swiper-button-next",
        prevEl: ".swiper-button-prev",
      },
    },
  }
});



