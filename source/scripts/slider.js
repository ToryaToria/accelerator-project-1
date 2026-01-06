// import Swiper from 'swiper';
// import 'swiper/css';

// import { Navigation } from 'swiper/modules';
// import 'swiper/css/naviganion';


import { Swiper } from "swiper/bundle";
import 'swiper/css/bundle';
import { Navigation } from "swiper/modules";
import 'swiper/css/navigation';

console.log('juri');


const initJuriSlider = () => {
  const juriSlider = document.querySelector('.slider__container--juri');
  if (!juriSlider) {
    return;
  }

  new Swiper(juriSlider, {
    modules: [Navigation],
    loop: true,
    spaceBetween: 10,
    slidesPerView: 1,
    simulateTouch: true,
    touchRatio: 1,
    // loopAdditionalSlides: 2,
    watchSlidesProgress: true,

    navigation: {
      nextEl: '.swiper-button-next',
      prevEl: '.swiper-button-prev-juri',
    },

    breakpoints: {
      768: { slidesPerView: 2, spaceBetween: 40 },
      920: { slidesPerView: 3, spaceBetween: 30 },
      1366: { slidesPerView: 4, spaceBetween: 40 },
    },
  });
};

const initiReviewsSlider = () => {
  const reviewsSlider = document.querySelector('.slider__container--reviews');
  if (!reviewsSlider) {
    return;
  }

  new Swiper(reviewsSlider, {
    modules: [Navigation],
    loop: false,
    spaceBetween: 0,
    slidesPerView: 1,
    simulateTouch: true,
    // touchRatio: 1,
    // loopAdditionalSlides: 2,
    // watchSlidesProgress: true,
    breakpoints: {
      1366: {
        simulateTouch: false
      }
    },
    navigation: {
      nextEl: '.swiper-button-next-reviews',
      prevEl: '.swiper-button-prev-reviews',
    },

  });
};

export { initJuriSlider, initiReviewsSlider };
