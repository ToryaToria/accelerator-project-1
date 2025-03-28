<!DOCTYPE html>
<html lang="ru" data-validate="html" class="page">

<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<title>SUPERGYM</title>
	<link rel="stylesheet" href="sass/style.scss">
</head>

<!-- пример использования спрайта -->
<!-- <img src="/__spritemap#sprite-logo-view" alt="Это спрайт">
    <svg>
      <use href="/__spritemap#sprite-user"></use>
    </svg> -->


<body class="page__body text-base">
	<header class="hero container" data-test="hero">
		<div class="hero__wrapp">
			<img class="hero__logo" src="./__spritemap#sprite-logo_mob-view" alt="Это спрайт" width="100" height="20">

			<a class=" hero__tel text-nav text-invert" href="tel:88005555555">8 800 555-55-55</a>
		</div>

		<div class="hero__contein1">

			<div class="hero__contein">
				<ul class="hero__list">
					<li class="text-base text-invert">Тренажёрный зал</li>
					<li class="text-base text-invert">Групповые занятия</li>
					<li class="text-base text-invert">Кардио-зона</li>
				</ul>

				<div class="hero__title-wrapp">
					<h2 class="hero__omsk title-section text-invert">Омск</h2>
					<h1 class="hero__title title-main text-invert">
						Фитнес <br> центр
					</h1>
				</div>
				<a class="hero__button button text-btn-M text-invert" href="#price">Купить абонемент</a>
			</div>

			<picture class="hero__img">
				<source type="image/webp" media="(min-width: 1366px)" srcset="./img/hero/hero-img_deskt@1x.webp 1x,
            ./img/hero/hero-img_deskt@2x.webp 2x" width="500" height="524">

				<source type="image/webp" srcset="./img/hero/hero-img_tabl@1x.webp 1x,
          ./img/hero/hero-img_tabl@2x.webp 2x" width="324" height="390">

				<source type="image/jpg" media="(min-width:1366px)" srcset="./img/hero/hero-img_deskt@1x.jpg 1x,
          ./img/hero/hero-img_deskt@2x.jpg 2x" width="500" height="524">


				<img class="hero__img" src="./img/hero/hero-img_tabl@1x.jpg" srcset="./img/hero/hero-img_tabl@2x.jpg 2x"
					alt="тренер" width="324" height="390">
			</picture>
		</div>
	</header>

	<main class="page__main">
		<section class="about container" data-test="about">
			<div class="about__wrapp">
				<h2 class="about__title title-section">Тренажёрный зал</h2>
				<p class="about__subtitle subtitle">Просторный зал площадью 900 кв/м</p>
				<p class="about__text text-basic-M">
					Supergym – самый большой фитнес центр за&nbsp;Уралом и идеальное место для укрепления тела и здоровья.
					Тренажёрный зал оснащён всем необходимым современным оборудованием для&nbsp;всех спортсменов.
				</p>
				<p p class="about__text about__text--desktop text-basic-M">
					В зале расположены отдельная зона для Crossfit и кардио-зона с 40 тренажёрами. Также в фитнес центре
					есть несколько оборудованных залов для различных видов групповых занятий.
				</p>
			</div>

			<picture>
				<source type="image/webp" media="(min-width: 1366px)" srcset="./img/main/main-img_deskt@1x.webp 1x,
					./img/main/main-img_deskt@2x.webp 2x" width="360" height="230">

				<source type="image/webp" media="(min-width: 768px)" srcset="./img/main/main-img_tabl@1x.webp 1x,
					./img/main/main-img_tabl@2x.webp 2x" width="270" height="170">

				<source type="image/webp" srcset="./img/main/main-img_mob@1x.webp 1x,
				./img/main/main-img_mob@2x.webp 2x" width="320" height="280">

				<source type="image/jpg" media="(min-width:1366px)" srcset="./img/main/main-img_deskt@1x.jpg 1x,
				./img/main/main-img_deskt@2x.jpg 2x" width="360" height="230">

				<source type="image/jpg" media="(min-width:768px)" srcset="./img/main/main-img_tabl@1x.jpg 1x,
				./img/main/main-img_tabl@2x.jpg 2x" width="270" height="170">

				<img class="about__img" src="./img/main/main-img_mob@1x.jpg" srcset="./img/main/main-img_mob@2x.jpg 2x"
					alt="Тренажёрный зал" width="320" height="280">
			</picture>

			<div class="about__video">

				<div class="video-wrapp">
					<iframe class="video" id="myVideo" width="320" height="170" loading="lazy" tabindex="-1" frameborder="0"
						title="YouTube video player" allowfullscreen referrerpolicy="strict-origin-when-cross-origin"
						data-src="https://www.youtube.com/embed/9TZXsZItgdw?si=lhUb-X2bliaV0EZ0?&autoplay=1">
						>
					</iframe>
				</div>

				<button class="video__play" type="button">
					<span class="visually-hidden">кнопка пуск</span>
				</button>
			</div>
		</section>

		<section class="price container tab-price" data-test="price" id="price">
			<h2 class="price__title title-section">Абонементы</h2>

			<div class="price__month">
				<label for="tab-price-1">
					<input class="tab-price__radio visually-hidden tab1" type="radio" name="tab-price" value="1" id="tab-price-1"
						checked>
					<span class="tab-price__button tab-price__button--current text-btn-month">1 месяц</span>
					</input>
				</label>

				<label for="tab-price-2">
					<input class="tab-price__radio visually-hidden tab2" type="radio" name="tab-price" value="6" id="tab-price-2">
					<span class="tab-price__button text-btn-month">6 месяцев</span>
				</label>

				<label for="tab-price-3">
					<input class="tab-price__radio visually-hidden tab3" type="radio" name="tab-price" value="12"
						id="tab-price-3">
					<span class="tab-price__button text-btn-month">12 месяцев</span>
				</label>
			</div>

			<ul class="price__cards-list">
				<li class="price__card card" id="price__card1">
					<h3 class="title-price">С тренером</h3>
					<p class="text-basic-M">12 занятий</p>
					<p class="card__prise text-number-M tab-price__show1" data-tip="5000">5000
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>

					<p class="card__prise text-number-M tab-price__show2" data-tip="30000">30000
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>
					<p class="card__prise text-number-M tab-price__show3" data-tip="60000">60000
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>

					<a class="card__btn button button--color-dark text-btn-M" href="#" id="card__btn1">Купить абонемент</a>
				</li>

				<li class="price__card card" id="price__card2">
					<h3 class="title-price">Дневной</h3>
					<p class="text-basic-M">с 8:00 до 17:00</p>
					<p class="card__prise text-number-M tab-price__show1" data-tip="1700">1700
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>

					<p class="card__prise text-number-M tab-price__show2" data-tip="10200">10200
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>
					<p class="card__prise text-number-M tab-price__show3" data-tip="20400">20400
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>

					<a class=" card__btn button button--color-dark  text-btn-M" href="#" id="card__btn2">Купить абонемент</a>
				</li>

				<li class="price__card card" id="price__card3">
					<h3 class="title-price">Полный день</h3>
					<p class="text-basic-M">с 8:00 до 22:00</p>
					<p class="card__prise text-number-M tab-price__show1" data-tip="2700" id="tab-price__show1">2700
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>

					<p class="card__prise text-number-M tab-price__show2" data-tip="16200">16200
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>
					<p class="card__prise text-number-M tab-price__show3" data-tip="32400" id="tab-price__show3">32400
						<span class="card__ruble-symbol" role="img" aria-label="рублей">
						</span>
					</p>

					<a class="card__btn button  button--color-dark text-btn-M" href="#" id="card__btn3">Купить абонемент</a>
				</li>
			</ul>
		</section>

		<section class="games container" data-test="games">
			<div class=" games__color">
				<div class="games__wrapp">
					<h2 class="title-super text-invert ">Super games</h2>

					<dl class="games__link">
						<dt class="games__term">
							<p class="text-games-term text-invert">Дата</p>
						</dt>

						<dd class="games__definition">
							<p class="text-games-number text-invert">7</p>
							<p class="text-games-month text-invert">
								Марта
								<span class="games__year">2019</span>
							</p>
						</dd>

						<dt class="games__term">
							<p class="text-games-term text-invert">Время</p>
						</dt>
						<dd class="games__definition">
							<p class="text-games-number text-invert">12:00</p>
						</dd>
					</dl>
				</div>
				<p class="games__text text-games text-invert">Ежегодные соревнования по&nbsp;CrossFit</p>

				<a class="games__button button text-btn-M text-invert" href="#">заполнить заявку</a>
			</div>


			<picture>
				<source type="image/webp" media="(min-width: 1366px)" srcset="./img/games/games_deskt@1x.webp 1x,
					./img/games/games_deskt@2x.webp 2x" width="660" height="500">

				<source type="image/webp" media="(min-width: 768px)" srcset="./img/games/games_tabl@1x.webp 1x,
					./img/games/games_tabl@2x.webp 2x" width="378" height="348">

				<source type="image/webp" srcset="./img/games/games_mob@1x.webp 1x,
				./img/games/games_mob@2x.webp 2x" width="290" height="290">

				<source type="image/jpg" media="(min-width:1366px)" srcset="./img/games/games_deskt@1x.jpg 1x,
				./img/games/games_deskt@2x.jpg 2x" width="660" height="500">

				<source type="image/jpg" media="(min-width:768px)" srcset="./img/games/games_tabl@1x.jpg 1x,
				./img/games/games_tabl@2x.jpg 2x" width="378" height="348">

				<img class="games__img" src="./img/games/games_mob@1x.jpg" srcset="./img/games/games_mob@2x.jpg 2x"
					alt="спортсмен" width="290" height="290">
			</picture>
		</section>

		<section class="juri container container--juri slider" data-test="juri">
			<h2 class="juri__title title-section title-section--big">Жюри</h2>

			<div class="slider__container slider__container--juri swiper">
				<ul class="juri__list swiper-wrapper">

					<li class="juri-card swiper-slide" name="juri" open tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-anna_mob@1x.webp 1x,
						./img/iuri/juri-anna_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-anna_mob@1x.jpg"
								srcset="./img/iuri/juri-anna_mob@2x.jpg 2x" alt="Анна Павлова" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Анна Павлова</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Анна Павлова</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

					<li class="juri-card swiper-slide" name="juri" tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-lavr_mob@1x.webp 1x,
						./img/iuri/juri-lavr_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-lavr_mob@1x.jpg"
								srcset="./img/iuri/juri-lavr_mob@2x.jpg 2x" alt="Алексей Лавров" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Алексей Лавров</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Алексей Лавров</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

					<li class="juri-card swiper-slide" name="juri" tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-pash_mob@1x.webp 1x,
							./img/iuri/juri-pash_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-pash_mob@1x.jpg"
								srcset="./img/iuri/juri-pash_mob@2x.jpg 2x" alt="Александр Пашков" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Александр Пашков</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Александр Пашков</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

					<li class="juri-card swiper-slide" name="juri" tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-mari_mob@1x.webp 1x,
							./img/iuri/juri-mari_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-mari_mob@1x.jpg"
								srcset="./img/iuri/juri-mari_mob@2x.jpg 2x" alt="Мария Кетова" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Мария Кетова</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Мария Кетова</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

					<li class="juri-card swiper-slide" name="juri" open tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-anna_mob@1x.webp 1x,
						./img/iuri/juri-anna_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-anna_mob@1x.jpg"
								srcset="./img/iuri/juri-anna_mob@2x.jpg 2x" alt="Анна Павлова" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Анна Павлова-2</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Анна Павлова</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

					<li class="juri-card swiper-slide" name="juri" tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-lavr_mob@1x.webp 1x,
						./img/iuri/juri-lavr_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-lavr_mob@1x.jpg"
								srcset="./img/iuri/juri-lavr_mob@2x.jpg 2x" alt="Алексей Лавров" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Алексей Лавров-2</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Алексей Лавров</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

					<li class="juri-card swiper-slide" name="juri" tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-pash_mob@1x.webp 1x,
							./img/iuri/juri-pash_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-pash_mob@1x.jpg"
								srcset="./img/iuri/juri-pash_mob@2x.jpg 2x" alt="Александр Пашков" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Александр Пашков-2</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Александр Пашков</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

					<li class="juri-card swiper-slide" name="juri" tabindex="0">
						<picture>
							<source type="image/webp" srcset="./img/iuri/juri-mari_mob@1x.webp 1x,
							./img/iuri/juri-mari_mob@2x.webp 2x" width="260" height="300">

							<img class="juri-card__img" src="./img/iuri/juri-mari_mob@1x.jpg"
								srcset="./img/iuri/juri-mari_mob@2x.jpg 2x" alt="Мария Кетова" width="260" height="300">
						</picture>

						<p class="juri-card__name text-juri">Мария Кетова-2</p>

						<div class="juri-card__info">
							<h3 class="juri-card__title">Мария Кетова</h3>
							<p class="juri-card__specialty">CrossFit</p>
							<ul class="juri-card__list">
								<li class="juri-card__skills">Certified Level 3 Trainer</li>
								<li class="juri-card__skills">Победитель чемпионата России по CrossFit </li>
								<li class="juri-card__skills">Опыт — 6 лет</li>
							</ul>
						</div>
					</li>

				</ul>
			</div>

			<button class="slider__button slider__button--l swiper-button-prev swiper-button-prev-juri" type="button">
				<span class="visually-hidden">туда</span>
			</button>

			<button class="slider__button swiper-button-next swiper-button-next-juri" type="button">
				<span class="visually-hidden">сюда</span>
			</button>
		</section>

		<section class="features container" data-test="features">
			<h2 class="features__title title-section container">Наши преимущества</h2>

			<ul class="features__list">
				<li class="features__item">
					<p class="features__digit text-number-L">900
						<span class="features__name text-name">кв/м</span>
					</p>
					<div class="features__item-wrapp">
						<h3 class="features__subtitle subtitle">Площадь</h3>
						<p class="features__text text-basic-M">Занимайтесь без очередей и толкучки</p>
					</div>
				</li>

				<li class="features__item">
					<p class="features__digit text-number-L">70
						<span class="features__name text-name">машин </span>
					</p>

					<div class="features__item-wrapp">
						<h3 class="features__subtitle subtitle">Собственная парковка</h3>
						<p class="features__text text-basic-M">Вы всегда найдёте место для своей машины на нашей парковке</p>
					</div>
				</li>

				<li class="features__item-container">
					<div class="features__item-dark">
						<p class="features__digit features__digit--dark  features__subtitle text-number-L text-invert">100
							<span class="features__name features__name--invert subtitle-features ">Тренажёров </span>
						</p>

						<p class="features__text text-basic-M text-invert">Современные тренажёры на все группы мышц</p>
					</div>
				</li>

				<li class="features__item features__item--bottom">
					<p class="features__digit text-number-L">350
						<span class="features__name text-name">мест</span>
					</p>

					<div class="features__item-wrapp">
						<h3 class="features__subtitle subtitle">Комфорт</h3>
						<p class="features__text text-basic-M">Просторные раздевалки, душевые, фен, Wi-Fi, кулеры</p>
					</div>
				</li>

				<li class="features__item features__item--bottom">
					<p class="features__digit  text-number-L">5+
						<span class="features__name text-name">лет</span>
					</p>

					<div class="features__item-wrapp">
						<h3 class="features__subtitle  subtitle">Тренерский опыт</h3>
						<p class="features__text text-basic-M">Добивайтесь своих целей быстрее с профессиональным тренером</p>
					</div>
				</li>
			</ul>
		</section>

		<section class="offers container" data-test="offers">
			<h2 class="offers__title title-section container">Акции</h2>

			<div class="offers__wrapper">
				<div class="offers__wrapp">
					<!-- bid - заявка -->
					<div class="offers__bid">
						<p class="offers__year">Год</p>
						<p class="offers__number text-number-L text-invert">4999</p>
						<p class="offers__text offers__text--invert subtitle-offers ">Безлимитный абонемент <br> в тренажёрный зал
						</p>
						<a class="offers__link offers__link--invert text-btn-L" href="#">подробнее</a>
					</div>

					<picture>
						<source type="image/webp" media="(min-width: 1366px)" srcset="./img/girl/girl_deskt@1x.webp 1x,
							./img/girl/girl_deskt@2x.webp 2x" width="280" height="460">

						<source type="image/webp" media="(min-width: 768px)" srcset="./img/girl/girl_tabl@1x.webp 1x,
							./img/girl/girl_tabl@2x.webp 2x" width="400" height="462">

						<source type="image/webp" srcset="./img/girl/girl_mob@1x.webp 1x,
						./img/girl/girl_mob@2x.webp 2x" width="320" height="360">

						<source type="image/jpg" media="(min-width:1366px)" srcset="./img/girl/girl_deskt@1x.jpg 1x,
						./img/girl/girl_deskt@2x.jpg 2x" width="280" height="460">

						<source type="image/jpg" media="(min-width:768px)" srcset="./img/girl/girl_tabl@1x.jpg 1x,
						./img/girl/girl_tabl@2x.jpg 2x" width="400" height="462">

						<img class="offers__img" src="./img/girl/girl_mob@1x.jpg" srcset="./img/girl/girl_mob@2x.jpg 2x"
							alt="стройная девушка" width="320" height="360">
					</picture>
				</div>

				<ul class="offers__list">
					<li class="offers__item">
						<h3 class="offers__title-item title-offers">Месяц бесплатно</h3>
						<p class="offers__text text-offers">Приведи друга, получи абонемент в&nbsp;подарок</p>
						<a class="offers__link offers__link--color  text-btn-L" href="#">подробнее</a>
					</li>

					<li class="offers__item">
						<h3 class="offers__title-item title-offers">Скидка 20%</h3>
						<p class="offers__text text-offers">Корпоративный фитнес с командой</p>
						<a class="offers__link offers__link--color  text-btn-L" href="#">подробнее</a>
					</li>
				</ul>
			</div>
		</section>

		<section class="faq container" data-test="faq">
			<h2 class="faq__title title-section">Вопросы и ответы</h2>

			<div class="faq__wrapp tab-faq">

				<div class="faq__tabs">

					<label for="tab-faq-1">
						<input class="tab-faq__radio visually-hidden" type="radio" name="tab-faq" value="Центр" id="tab-faq-1"
							checked>
						<span class="tab-faq__button text-btn-faq">Центр</span>
					</label>

					<label for="tab-faq-2">
						<input class="tab-faq__radio visually-hidden" type="radio" name="tab-faq" value="Абонемент" id="tab-faq-2">
						<span class="tab-faq__button text-btn-faq">Абонемент</span>
					</label>

					<label for="tab-faq-3">
						<input class="tab-faq__radio visually-hidden" type="radio" name="tab-faq" value="Услуги" id="tab-faq-3">
						<span class="tab-faq__button text-btn-faq">Услуги</span>
					</label>

					<label for="tab-faq-4">
						<input class="tab-faq__radio visually-hidden" type="radio" name="tab-faq" value="Правила" id="tab-faq-4">
						<span class="tab-faq__button text-btn-faq">Правила</span>
					</label>
				</div>


				<!-- <li class="accordion">
					<button class="accordion__control" aria-expanded="false">
						<span class="accordion__title">Accordion 1</span>
						<span class="accordion__icon"></span>
					</button>
					<div class="accordion__content" -->



				<ul class="faq__list tab-faq__show1">
					<li class="faq__item accordion">
						<!-- <details class="faq__details" open> -->
							<button class="faq__summary accordion__control" type="button">
								<h3 class="title-faq accordion__title">Как стать членом фитнес-центра?</h3>
							</button>

							<p class="faq__text text-faq accordion__content">
								При первом посещении и&nbsp;покупке абонемента, необходимо заполнить анкету и&nbsp;подписать договор.
								При&nbsp;покупке абонемента онлайн, анкета также&nbsp;заполняется онлайн и&nbsp;договор придёт вам на
								почту.
							</p>
						<!-- </details> -->
					</li>

					<li class="faq__item accordion">
						<!-- <details class="faq__details"> -->
							<button class="faq__summary accordion__control" type="button">
								<h3 class="title-faq">Где можно посмотреть расписание?</h3>
							</button>

							<p class="faq__text text-faq accordion__content">
								Вы можете ознакомиться с расписание на стойке информации, на нашем официальном сайте. Так же есть
								возможность оформить подписку на наши новости и получать расписание и обновления на почту каждую неделю.
							</p>
						<!-- </details> -->
					</li>

					<li class="faq__item accordion">
						<!-- <details class="faq__details"> -->
							<button class="faq__summary accordion__control" type="button">
								<h3 class="title-faq">Есть кулеры в центре? Предоставляются полотенца?</h3>
							</button>

							<p class="faq__text text-faq accordion__content">
								Текст-рыба :))
							</p>
						<!-- </details> -->
					</li>

					<li class="faq__item accordion">
						<!-- <details class="faq__details"> -->
							<button class="faq__summary faq__summary--1 accordion__control" type="button">
								<h3 class="title-faq">Сколько тренеров работает в&nbsp;клубе и какова их&nbsp;квалификация?</h3>
							</button>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						<!-- </details> -->
					</li>
				</ul>


				<ul class="faq__list tab-faq__show2">
					<li class="faq__item">
						<details class="faq__details" open>
							<summary class="faq__summary">
								<h3 class="title-faq">Занятия с тренером входят в абонемент?</h3>
							</summary>

							<p class="faq__text text-faq">
								При посещении тренажерного зала вам необходимо оплатить занятия с тренером отдельно. В зале всегда
								присутствует дежурный тренер, которому можно задать вопрос, получить небольшую консультацию по тренажеру
								или технике выполнения упражнения.
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Можно ли заморозить абонемент?</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Есть ли лимит по посещениям тренажерного зала и групповых занятий?</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>


					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Что такое семейный доступ и доступ для друзей?</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>
				</ul>

				<ul class="faq__list tab-faq__show3">
					<li class="faq__item">
						<details class="faq__details" open>
							<summary class="faq__summary">
								<h3 class="title-faq">Рыбные услуги 1</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Рыбные услуги 2</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Рыбные услуги 3</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Рыбные услуги 4</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>
				</ul>

				<ul class="faq__list tab-faq__show4">
					<li class="faq__item">
						<details class="faq__details" open>
							<summary class="faq__summary">
								<h3 class="title-faq">Есть в фитнес-центре дресс-код?</h3>
							</summary>

							<p class="faq__text text-faq">
								Для тренировок необходимо иметь предназначенную для этого закрытую спортивную обувь и одежду. Верхняя и
								нижняя части тела должны быть закрыты (используйте футболки, майки, спортивные брюки, шорты, кроссовки).
								В
								целях безопасности, запрещается тренироваться босиком, в пляжных или домашних тапочках и т. п.,
								исключения
								составляют специальные классы (например, йога, пилатес).
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Можно ли приводить с собой детей на тренировки?</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Какие дополнительные правила посещения центра?</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>

					<li class="faq__item">
						<details class="faq__details">
							<summary class="faq__summary">
								<h3 class="title-faq">Нужна ли медицинская справка для посещения залов и бассейна?</h3>
							</summary>

							<p class="faq__text text-faq">
								Текст-рыба :))
							</p>
						</details>
					</li>
				</ul>

			</div>
		</section>

		<section class="reviews container container--reviews slider" data-test="reviews">
			<h2 class="reviews__title title-section">Отзывы</h2>

			<div class="slider__container slider__container--reviews swiper">

				<ul class="reviews__list swiper-wrapper">
					<li class="reviews__item swiper-slide">
						<img class="reviews__img" src="./img/avatar/Rectangle.jpg" alt="Анна Орлова" width="80" height="80">

						<!-- <picture>
							<source type="image/webp" srcset="./img/avatar/avatar_mob@1x.webp 1x,
						./img/avatar/avatar_mob@2x.webp 2x" width="68" height="68">

							<img class="reviews__img" src="./img/avatar/avatar_mob@1x.jpeg" srcset="./avatar/avatar_mob@2x.jpg 2x"
								alt="Анна Орлова" width="68" height="68">
						</picture> -->

						<div>
							<h3 class="reviews__subtitle subtitle-rewiews text-invert">Анна Орлова</h3>
							<p class="reviews__text text-basic-M text-invert">
								«Хожу в Supergym уже больше года. Нравится, что в клубе всегда чисто, тренажёры обновляют, персонал
								дружелюбный. Зал просторный, даже в вечернее время нет очередей»
							</p>
						</div>
					</li>

					<li class="reviews__item swiper-slide">
						<picture>
							<source type="image/webp" srcset="./img/avatar/avatar_mob@1x.webp 1x,
						./img/avatar/avatar_mob@2x.webp 2x" width="68" height="68">

							<img class="reviews__img" src="./img/avatar/avatar_mob@1x.jpeg" srcset="./avatar/avatar_mob@2x.jpg 2x"
								alt="Анна Орлова" width="68" height="68">
						</picture>

						<div>
							<h3 class="reviews__subtitle subtitle-rewiews text-invert">Анна Орлова-2</h3>
							<p class="reviews__text text-basic-M text-invert">
								«Хожу в Supergym уже больше года. Нравится, что в клубе всегда чисто, тренажёры обновляют, персонал
								дружелюбный. Зал просторный, даже в вечернее время нет очередей»
							</p>
						</div>
					</li>

					<li class="reviews__item swiper-slide">
						<picture>
							<source type="image/webp" srcset="./img/avatar/avatar_mob@1x.webp 1x,
						./img/avatar/avatar_mob@2x.webp 2x" width="68" height="68">

							<img class="reviews__img" src="./img/avatar/avatar_mob@1x.jpeg" srcset="./avatar/avatar_mob@2x.jpg 2x"
								alt="Анна Орлова" width="68" height="68">
						</picture>

						<div>
							<h3 class="reviews__subtitle subtitle-rewiews text-invert">Анна Орлова-3</h3>
							<p class="reviews__text text-basic-M text-invert">
								«Хожу в Supergym уже больше года. Нравится, что в клубе всегда чисто, тренажёры обновляют, персонал
								дружелюбный. Зал просторный, даже в вечернее время нет очередей»
							</p>
						</div>
					</li>

					<li class="reviews__item swiper-slide">
						<picture>
							<source type="image/webp" srcset="./img/avatar/avatar_mob@1x.webp 1x,
						./img/avatar/avatar_mob@2x.webp 2x" width="68" height="68">

							<img class="reviews__img" src="./img/avatar/avatar_mob@1x.jpeg" srcset="./avatar/avatar_mob@2x.jpg 2x"
								alt="Анна Орлова" width="68" height="68">
						</picture>

						<div>
							<h3 class="reviews__subtitle subtitle-rewiews text-invert">Анна Орлова-4</h3>
							<p class="reviews__text text-basic-M text-invert">
								«Хожу в Supergym уже больше года. Нравится, что в клубе всегда чисто, тренажёры обновляют, персонал
								дружелюбный. Зал просторный, даже в вечернее время нет очередей»
							</p>
						</div>
					</li>
				</ul>
			</div>

			<button
				class="slider__button  slider__button--l slider__button--reviews swiper-button-prev swiper-button-prev-reviews"
				type="button">
				<span class="visually-hidden">туда</span>
			</button>

			<button
				class="slider__button slider__button--reviews slider__button--reviews--r swiper-button-next swiper-button-next-reviews"
				type="button">
				<span class="visually-hidden">сюда</span>
			</button>
		</section>

		<div class="page__section-wrapp" data-test="form">
			<section class="request container">
				<h2 class="request__title title-section text-invert">Бесплатное занятие</h2>
				<form class="request__form" action="https://echo.htmlacademy.ru/" method="post">
					<div class="request__wrapp">
						<label class="request__label" for="">
							<input class="request__field text-form" type="text" placeholder="Имя" required
								pattern="[A-Za-zА-Яа-яЁё\s]+$" name="name" disabled>
							<span class="equest__err">Только буквы и пробел!</span>
						</label>

						<label class="request__label" for="">
							<input class="request__field text-form" type="text" placeholder="Телефон" required
								pattern="[^A-Za-zА-Яа-яЁё]+$" name="tel">
							<span class="equest__err">Только не буквы!</span>
						</label>
					</div>
					<button class="request__btn button text-btn-M text-invert" type="submit">отправить</button>
				</form>
			</section>

			<section class="contacts container">
				<h2 class="contacts__title title-section">Контакты</h2>
				<ul class="contacts__list">
					<li class="contacts__item contacts__item--1">
						<h3 class="contacts__name title-contacts">Адрес:</h3>
						<p class="text-name">г. Омск, ул. 60 лет Октября, 7</p>
					</li>

					<li class="contacts__item contacts__item--2">
						<h3 class="contacts__name title-contacts">График работы:</h3>
						<p class="text-name">Пн-Вс: с 8:00 до 22:00</p>
					</li>

					<li class="contacts__item contacts__item--3">
						<h3 class="contacts__name title-contacts">Телефон:</h3>
						<a class="text-name" href="tel:88005555555">8 800 555-55-55</a>
					</li>	

					<li class="contacts__item   contacts__item--4">
						<h3 class="contacts__name title-contacts">Email:</h3>
						<a class="text-name" href="mailto:oмск@supergym.ru">oмск@supergym.ru</a>
					</li>
				</ul>
			</section>
		</div>
	</main>

	<footer class="page__footer footer container" data-test="footer">
		<img class="footer__logo" src="./img/sprite/logo_mob.svg" alt="logo" width="100" height="20">
		<ul class="footer__list-user">
			<li>
				<a class="footer__link text-name text-invert" href="#">Услуги</a>
			</li>

			<li>
				<a class="footer__link text-name text-invert" href="#">Абонементы </a>
			</li>

			<li>
				<a class="footer__link text-name text-invert" href="#">Акции </a>
			</li>

			<li>
				<a class="footer__link text-name text-invert" href="#">Тренеры </a>
			</li>

			<li>
				<a class="footer__link text-name  text-invert" href="#">Расписание</a>
			</li>
		</ul>

		<ul class="footer__social-list">
			<li>
				<a class="footer__social-link footer__social-link--vk" href="#"><span class="visually-hidden">vk</span></a>
			</li>

			<li>
				<a class="footer__social-link footer__social-link--ok" href="#"><span class="visually-hidden">ok</span></a>
			</li>

			<li>
				<a class="footer__social-link footer__social-link--reddit" href="#"><span class="visually-hidden">xz</span></a>
			</li>
		</ul>
	</footer>
	<script src="./js/vendor/swiper-bundle.js"></script>
	<!-- <script src="./js/vendor/swiper.js"></script> -->

	<script src="js/main.js" type="module"></script>
</body>

</html>