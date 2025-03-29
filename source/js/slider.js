// import './vendor/swiper-bundle.js';
// import "./vendor/swiper.js";
// import Swiper from "./vendor/swiper.js";
// import Swiper from "swiper";
// import Navigation from "swiper/modules";

// console.log('ky');

const dataSliderJuri = {
  elem: '.slider__container--juri',
  btnNext: '.swiper-button-next-juri',
  btnPrev: '.swiper-button-prev-juri',
  loop: true,
  slidesPerView768: 2,
  slidesPerView1366: 4,
  spaceBetween: 40,
};

const dataSliderReviews = {
  elem: '.slider__container--reviews',
  btnNext: '.swiper-button-next-reviews',
  btnPrev: '.swiper-button-prev-reviews',
  loop: false,
  slidesPerView768: 1,
  slidesPerView1366: 1,
  spaceBetween: 0,
};

function sliders(data) {
  // console.log(data);

  const slider = new Swiper(data.elem, {
    loop: data.loop,
    breakpoints: {
      768: {
        slidesPerView: data.slidesPerView768,
        spaceBetween: data.spaceBetween,
        navigation: {
          nextEl: data.btnNext,
          prevEl: data.btnPrev,
        },
      },
      1366: {
        slidesPerView: data.slidesPerView1366,
        spaceBetween: data.spaceBetween,
        navigation: {
          nextEl: data.btnNext,
          prevEl: data.btnPrev,
        },
        simulateTouch: false
      }
    }
  });

  return slider;
}

sliders(dataSliderJuri);
sliders(dataSliderReviews);

export{
  sliders,
  dataSliderReviews,
  dataSliderJuri
};

// const sliderReviews = new Swiper('.slider__container--reviews', {
//   loop: false,

//  breakpoints: {
//    768: {
//      navigation: {
//        nextEl: ".swiper-button-next-reviews",
//        prevEl: ".swiper-button-prev-reviews",
//      },
//    },
//  }
// });

// const sliderJuri = new Swiper('.slider__container--juri', {
//   loop: true,

//   breakpoints: {
//     768: {
//       slidesPerView: 2,
//       spaceBetween: 40,
//       navigation: {
//         nextEl: ".swiper-button-next",
//         prevEl: ".swiper-button-prev",
//       },
//     },
//     1366: {
//       slidesPerView: 4,
//       spaceBetween: 40,
//       navigation: {
//         nextEl: ".swiper-button-next",
//         prevEl: ".swiper-button-prev",
//       },
//     }
//   }
// });

// const sliderReviews = new Swiper('.slider__container--juri', {
//   loop: false,

//  breakpoints: {
//    768: {
//      navigation: {
//        nextEl: ".swiper-button-next",
//        prevEl: ".swiper-button-prev",
//      },
//    },
//  }
// });

// console.log(sliderJuri)


// console.log(sliderReviews)

