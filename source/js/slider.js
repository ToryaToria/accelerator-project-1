console.log('ky')

const dataSliderJuri = {
  elem: '.slider__container--juri',
  btnNext: ".swiper-button-next-juri",
  btnPrev: ".swiper-button-prev-juri",
  loop: true,
  slidesPerView768: 2,
  slidesPerView1366: 4,
  spaceBetween: 40,
};

const dataSliderReviews = {
  elem: '.slider__container--reviews',
  btnNext: ".swiper-button-next-reviews",
  btnPrev: ".swiper-button-prev-reviews",
  loop: false,
  slidesPerView768: 1,
  slidesPerView1366: 1,
  spaceBetween: 0,
}

function slider(data) {
  console.log(data);

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
      }
    }
  });

  return slider;
}

// slider(dataSliderJuri);
// slider(dataSliderReviews);

// slider('.slider__container--reviews', ".swiper-button-next-reviews", ".swiper-button-prev-reviews", false, 1, 0);

// const sliderJuri = new Swiper('.slider__container--juri', {
//   loop: true,

//   breakpoints: {
//     768: {
//       slidesPerView: 2,
//       spaceBetween: 40,
//       navigation: {
//         nextEl: ".swiper-button-next-juri",
//         prevEl: ".swiper-button-prev-juri",
//       },
//     },
//     1366: {
//       slidesPerView: 4,
//       spaceBetween: 40,
//     }
//   }
// });

// console.log(sliderJuri)

// const sliderReviews = new Swiper('.slider__container--reviews', {
//    loop: false,

//   breakpoints: {
//     768: {
//       navigation: {
//         nextEl: ".swiper-button-next-reviews",
//         prevEl: ".swiper-button-prev-reviews",
//       },
//     },
//   }
// });

// console.log(sliderReviews)

