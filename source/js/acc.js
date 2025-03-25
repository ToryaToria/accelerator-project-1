const animationDuration = 300;

document.querySelectorAll('.qna__item').forEach(item => {
  const question = item.querySelector('.qna__question');
  const answer = item.querySelector('.qna__answer');

  const setHeight = () => answer.style.setProperty('--details-height', `${answer.scrollHeight}px`);


  const onClick = event => {
    item.classList.add('js-details');

    setHeight();

    let isAnimating = true;
    item.classList.toggle('is-open');
    item.classList.add('is-animating');

    setTimeout(() => {
      item.classList.remove('is-animating')
    }, animationDuration);

    if (item.open) {
      event.preventDefault();
      if (isAnimating) return;
      setTimeout(() => {
        item.open = false
        isAnimating = false
      }, animationDuration);
    }
  }

  question.addEventListener('click', onClick)
})