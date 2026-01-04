// source/scripts/accordeon.js
var accordions = document.querySelectorAll(".faq__details");
accordions.forEach((el) => {
  el.addEventListener("click", (e) => {
    e.preventDefault();
    const self = e.currentTarget;
    const content = self.querySelector(".faq__content-answer");
    self.classList.toggle("js-open");
    self.classList.remove("js-open-init");
    if (self.classList.contains("js-open")) {
      content.style.maxHeight = `${content.scrollHeight}px`;
    } else {
      content.style.maxHeight = null;
    }
  });
});
//# sourceMappingURL=accordeon.js.map
