// source/scripts/video.js
var video = document.getElementById("my-video");
var play = document.querySelector(".video__play");
var playStop = () => {
  video.src = video.dataset.src;
  play.style.display = "none";
};
play.addEventListener("click", playStop);
//# sourceMappingURL=video.js.map
