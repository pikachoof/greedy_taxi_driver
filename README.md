*Все в ветке main!*

# Задача - Жадный Таксист из MoneyLand
Наступило лето, и таксист Петя, живущий в городе MoneyLand хотел заработать на туристах, приезжающих в город на отдых. Пете нужно развезти туристов по отелям.

MoneyLand представляет себя **одномерную** координатную прямую, на которой расположены улицы. Координата улицы обозначается **pos[i]**.
На каждой обозначенной улице есть пассажир, предлагающий **price[i]** рублей за поездку.

В MoneyLand есть понятие **плохих точек**. Это такие точки, которые соблюдают следующие условия:
- Возьмем три индекса i, j, и обозначим их **расстояние** как:
**dist(i, j) = |pos[i] - pos[j]| + |i - j|**

- Тройка точек i, j, k **(i < j < k)** называется **плохой** если соблюдается:
**dist(i, k) = dist(i, j) + dist(j, k)**

Петя **может** взять **подмассив точек pos с индексами {i, i+1, i+2, ..., i+k} ** и развезти всех пассажиров в данном подмассиве **только если** в этом подмассиве нет **ни одной плохой тройки точек**.

При этом, каждого пассажира Петя может обслужить **только 1 раз**.

Помогите Пете рассчитать **максимальную прибыль** которую он сможет получить.

## Ввод
*(Нужно скопировать с файла **input.txt**)*
1) Число **N=50** - количество длины массивов **pos** и **price**.
2) Массив координат пассажиров **pos**, длины **N=50**.
- **(1000 <= pos[i] <= 100000)**
3) Массив цен, которые предлагают пассажиры **price**, длины **N=50**.
- **(1000 <= pos[i] <= 1000000000)**

## Вывод
1) Одно число X - **максимальная прибыль Пети**

## Пример
###1)
**Ввод:**
5
42 82 96 20 85 
46 53 60 97 38
**Ответ:**
248

###2)
**Ввод:**
5
96 43 38 2 16 
31 78 74 78 16
**Ответ:**
168

###3)
**Ввод:**
4
98 19 17 78 
96 11 39 47
**Ответ:**
97

## Объяснение
*Используется 0-индексация!*
###1)
Подмассив [1; 3] - хороший, прибавляем стоимости на соответсвующих индексах к ответу.
Подмассив [2; 4] - хороший, делаем то же самое, но индексы 2, 3 повторно не засчитываем.
Подмассив [1; 4] - хороший.

###2)
Подмассив [2; 4] - хороший.

###3)
Подмассив [1; 3] - хороший.

## Подсказка
*Не нужно проверять подмассивы **всех** длин!*
