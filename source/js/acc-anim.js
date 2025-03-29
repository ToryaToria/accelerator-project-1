const accordions = document.querySelectorAll('.faq__details');
console.log('ky');

accordions.forEach(el => {
  el.addEventListener('click', (e) => {
    e.preventDefault();
    const self = e.currentTarget;

    const content = self.querySelector('.faq_content-answer');

    self.classList.toggle('js-open');
    self.classList.remove('js-open-init');

    // если открыт аккордеон
    if (self.classList.contains('js-open')) {
      content.style.maxHeight = content.scrollHeight + 'px';

    } else {
      content.style.maxHeight = null;

    }
  });
});
