const accordions = document.querySelectorAll('.accordion');
// console.log('kykykyky');

const start = accordions[0];
const startContent = start.querySelector('.accordion__content');
start.classList.toggle('open');
startContent.style.maxHeight = `${startContent.scrollHeight }px`;

accordions.forEach((el) => {
  el.addEventListener('click', (e) => {
    // e.preventDefault();
    const self = e.currentTarget;
    // console.log(self);


    // const control = self.querySelector('.accordion__control');
    const content = self.querySelector('.accordion__content');

    self.classList.toggle('open');

    // если открыт аккордеон
    if (self.classList.contains('open')) {
      // content.style.maxHeight = '100px';
      // content.style.display = 'block';


      content.style.maxHeight = `${content.scrollHeight }px`;
      // console.log(content.style.maxHeight);

    } else {
      content.style.maxHeight = null;
    }
  });
});
