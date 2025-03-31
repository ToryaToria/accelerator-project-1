const video = document.getElementById('myVideo');
const play = document.querySelector('.video__play');

const playStop = () => {
  video.src = video.dataset.src;
  play.style.display = 'none';
};

play.addEventListener('click', playStop);
