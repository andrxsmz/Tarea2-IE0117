Este código genera un arreglo de tamaño especificado por el usuario, para posteriormente ordena utilizando los algoritmos Selection Sort y Bubble Sort. Finalmente, mide el rendimiento de ambos algoritmos, mostrando el tiempo que tarda cada uno en completar el ordenamiento.


En la siguiente imagen se puede odservar los resultados obtenidos al aplicar los algoritmos Bubble Sort y Selection Sort para arreglos de tamaño 10, 100, 1000 y 10000 elementos:

![Resultados](T2_C34587-1.png)

A partir de estos resultados se puede concluir que el algoritmo Selection Sort es más eficiente que Bubble Sort. Inicialmente, para arreglos pequeños la diferencia no es muy notable, pero a medida que incrementa el tamaño del arreglo, se observa claramente cómo Selection Sort es más eficiente que Bubble Sort.

Esto se puede notar en la logica de cada algoritmo. Mientras que Bubble Sort compara pares de elementos adyacentes y los intercambia si no están en orden, repitiendo este proceso hasta que el arreglo esté completamente ordenado, Selection Sort busca el elemento más pequeño del arreglo y lo intercambia con el primer elemento no ordenado, repitiendo este proceso hasta completar el ordenamiento.

