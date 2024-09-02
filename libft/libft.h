/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampoy- <pcampoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:59:25 by pcampoy-          #+#    #+#             */
/*   Updated: 2024/04/25 14:11:12 by pcampoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/// @brief Comprueba si el caracter es alfabetico (tanto mayusculas 
/// como minusculas)
/// @param c Numero correspondiente al caracter en la tabla ASCII
/// @return Devuelve 1 si el caracter es alfabetico y 0 si no lo es
int		ft_isalpha(int c);

/// @brief Comprueba si el caracter es numerico
/// @param c  Numero correspondiente al caracter en la tabla ASCII
/// @return Devuelve 1 si el caracter es numerico y 0 si no lo es
int		ft_isdigit(int c);

/// @brief Comprueba si el caracter es alfanumerico
/// @param c Numero correspondiente al caracter en la tabla ASCII
/// @return Devuelve 1 si el caracter es alfanumerico y 0 si no lo es
int		ft_isalnum(int c);

/// @brief Comprueba si el caracter esta en la tabla ASCII
/// @param c Numero correspondiente al caracter en la tabla ASCII
/// @return Devuelve 1 si el caracter esta en la tabla ASCII y 0 si no lo esta
int		ft_isascii(int c);

/// @brief Comprueba si el caracter se puede imprimir por pantalla 
/// (incluyendo el espacio)
/// @param c 
/// @return Devuelve 0 si el caracter no se puede imprimir por pantalla 
/// y 1 si sí se puede
int		ft_isprint(int c);

/// @brief Calcula la longitud de una cadena.
/// @param s Cadena de la que se quiere saber la longitud
/// @return Numero de caracteres que preceden al caracter nulo
size_t	ft_strlen(const char *s);

/// @brief Escribe len bytes del valor c (convertido a unsigned char) 
/// en la cadena b
/// @param b Cadena en la que se quiere escribir
/// @param c Caracter a escribir
/// @param len Longitud a escribir
/// @return Devuelve el primer argumento
void	*ft_memset(void *b, int c, size_t len);

/// @brief Escribe n bytes a cero (NULL) de la cadena s
/// @param s Cadena en la que escribir
/// @param n Cantidad de bytes a cero a escribir
void	ft_bzero(void *s, size_t n);

/// @brief Copia n bytes desde la memoria de src a la memoria de dst. 
/// Si dst y src se superponen,
/// el comportamiento no está definido
/// @param dst Cadena destino en la que se copian los n bytes
/// @param src Cadena fuente desde la que se copian los n bytes
/// @param n Numero de bytes a copiar
/// @return Devuelve el valor original de dst
void	*ft_memcpy(void *dst, const void *src, size_t n);

/// @brief Copia len bytes desde la cadena src en la cadena dst. 
/// Las cadenas pueden sobreponerse; la copia está siempre hecha de forma no
/// destructiva.
/// @param dst Cadena destino en la que se copian los len bytes
/// @param src Cadena fuente desde la que se copian los len bytes
/// @param len Numero de bytes a copiar
/// @return Devuelve el valor original de dst
void	*ft_memmove(void *dst, const void *src, size_t len);

/// @brief Copia la cadena src en la cadena dst de forma segura. 
/// Toma todo el tamaño del buffer dst y garantiza que termine en NULL
/// @param dst Cadena destino en la que copiar
/// @param src Cadena fuente de la que copiar
/// @param dstsize Maximo numero de caracteres a copiar, 
/// generalmente es el tamaño de dst
/// @return Devuelve el tamaño de src
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/// @brief Concatena la cadena src en la cadena dst de forma segura.
/// @param dst Cadena destino en la que concatenar
/// @param src Cadena fuente de la que concatenar
/// @param dstsize Maximo numero de caracteres a concatenar
/// @return 
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/// @brief Convierte un caracter minuscula en su correspondiente en mayusculas
/// @param c Caracter a convertir
/// @return Si c es una letra minuscula, devuelve su correspondiente mayuscula,
/// en caso contrario, el caracter no se modifica
int		ft_toupper(int c);

/// @brief Convierte un caracter mayuscula en su correspondiente en minusculas
/// @param c Caracter a convertir
/// @return Si c es una letra mayuscula, devuelve su correspondiente minuscula,
/// en caso contrario, el caracter no se modifica
int		ft_tolower(int c);

/// @brief Localiza la primera aparicion de c 
/// (convertido a caracter) en la cadena s.
/// El caracter terminador tambien es considerado parte de la cadena. 
/// De hecho, si c es '\0', la funcion localiza el terminador '\0'
/// @param s Cadena en la que queremos buscar
/// @param c Caracter a buscar en la cadena
/// @return Devuelve un puntero al caracter localizado, 
/// o NULL si el caracter no aparece en la cadena
char	*ft_strchr(const char *s, int c);

/// @brief Localiza la ultima aparicion de c (convertido a caracter) 
/// en la cadena s. El caracter terminador tambien es considerado   
/// parte de la cadena. De hecho, si c es '\0', 
/// la funcion localiza el terminador '\0'
/// @param s Cadena en la que queremos buscar
/// @param c Caracter que queremos buscar
/// @return Devuelve el puntero al caracter localizado, 
/// o NULL si el caracter no aparece en la cadena
char	*ft_strrchr(const char *s, int c);

/// @brief Compara no más de n caracteres. 
/// Los caracteres que aparecen despues de '\0' no se comparan
/// @param s1 Primera cadena a comparar
/// @param s2 Segunda cadena a comparar
/// @param n Numero de caracteres a comparar
/// @return Devuelve un entero mayor, igual o menor a 0, dependiendo de 
/// si s1 es mayor, igual o menor que s2.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/// @brief Localiza la primera ocurrencia de c (convertido a unsigned char) 
/// en la cadena s
/// @param s Cadena en la que localizar el caracter
/// @param c Caracter que se quiere localizar
/// @param n Numero de caracteres que se comprobaran
/// @return Devuelve un puntero a la primera ocurrencia de c en la cadena
void	*ft_memchr(const void *s, int c, size_t n);

/// @brief Compara byte por byte la cadena s1 y la cadena s2. Se asume que ambas
/// cadenas tienen n bytes
/// @param s1 Primera cadena a comparar
/// @param s2 Segunda cadena a comparar
/// @param n Numero de bytes a comparar
/// @return Devuelve 0 si las cadenas son identicas, 
/// en cualquier otro caso devuelve la 
/// diferencia entre los primeros dos bytes distintos
int		ft_memcmp(const void *s1, const void *s2, size_t len);

/// @brief Localiza la primera ocurrencia de la cadena, 
/// terminada en null, needle en la
/// cadena haystack, donde no mas de len caracteres son comprobados 
/// @param haystack Cadena en la que buscar
/// @param needle Cadena que buscamos
/// @param len Numeros de caracteres a buscar
/// @return Si needle es una cadena vacia, se devuelve haystack; 
/// si needle no se encuentra
/// en haystack, se devuelve NULL; 
/// en otro caso se devuelve un puntero al primer caracter
/// de la primera ocurrencia de needle
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/// @brief Convierte la porcion inicial de la cadena apuntada por 
/// str a entero
/// @param str Cadena a convertir
/// @return   Devuelve el entero contenido en la cadena
int		ft_atoi(const char *str);

/// @brief Contigoudly allocates enough space for count
/// objects that are size bytes of memory each and
/// returns a pointer to the allocated memory. The allocated 
/// memory is filled with bytes of value zero
/// @param count Number of objects
/// @param size Size in bytes of each object
/// @return If successful, returns a pointer to allocated
/// memory. If there is an error, it returns a NULL pointer
/// and set errno to ENOMEM
void	*ft_calloc(size_t count, size_t size);

/// @brief Allocates sufficient memory for a copy of the 
/// string s1, does the copy, and returns a pointer to it.
/// @param s1 String to be duplicated
/// @return If successful, returnrs a pointer to the new
/// duplicated string. If insufficient memory is available,
/// NULL is returned
char	*ft_strdup(const char *s1);

/// @brief Reserva con malloc y devuelve un substring
/// de la string 's'. El substring empieza desde el
/// indice 'start' y tiene una longitud máxima 'len'
/// @param s String desde la que crear el substring
/// @param start Indice del caracter en 's'
/// @param len Longitud maxima del substring
/// @return Devuelve un puntero al substring creado
char	*ft_substr(const char *s, unsigned int start, size_t len);

/// @brief Devuelve un nuevo string, formado por la
/// concatenación de s1 y s2 
/// @param s1 Primer string
/// @param s2 String a añadir a s1
/// @return Un nuevo string con s2 concatenado a s1
char	*ft_strjoin(const char *s1, const char *s2);

/// @brief Elimina todos los caracteres del string
/// set desde el principio y desde el final de s1,
/// hasta encontrar un caracter no perteneciente a
/// a set
/// @param s1 String que debe ser recortado 
/// @param set Caracteres a eliminar del string
/// @return El string recortado o NULL si falla
/// la reserva de memoria
char	*ft_strtrim(const char *s1, const char *set);

/// @brief Reserva un array de strings resultante
/// de separar el string s en substrings 
/// utilizando el caracter c como delimitador.
/// El array debe terminar con un puntero NULL
/// @param s String a separar
/// @param c Caracter delimitador
/// @return El array de nuevos strings resultante
/// de la separacion. NULL si falla la reserva de
/// memoria
char	**ft_split(const char *s, char c);

/// @brief Genera un string que represente el 
/// valor entero recibido commo argumento.
/// Los números negativos tienen que gestionarse.
/// @param n Entero a convertir
/// @return El string 
char	*ft_itoa(int n);

/// @brief A cada caracter del string 's' aplica
/// la función 'f' dando como parametros el indice de
/// cada caracter dentro de 's' y el propio caracter.
/// Genera una nueva string con el resultado del uso sucesivo de 'f'
/// @param s String que iterar
/// @param f Funcion a aplicar sobre cada caracter
/// @return El string creado tras el correcto uso de 'f' sobre
/// cada caracter. NULL si falla la reserva de memoria
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

/// @brief A cada caracter del string 's' aplica la función 'f'
/// dando como parametros el indice de cada caracter dentro de
/// 's' y la dirección del propio caracter, que podrá modificarse
/// si es necesario
/// @param s String que iterar
/// @param f Funcion a aplicar sobre cada caracter 
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/// @brief Envía el caracter 'c' al file descriptor especificado
/// @param c Caracter a enviar
/// @param fd File descriptor sobre el que escribir
void	ft_putchar_fd(char c, int fd);

/// @brief Envia el string 's' al file descriptor especificado
/// @param s String a enviar
/// @param fd File descriptor sobre el que escribir
void	ft_putstr_fd(char *s, int fd);

/// @brief Envia el string 's' al file descriptor dado, seguido
/// de un salto de linea
/// @param s String a enviar
/// @param fd File descriptor sobre el que escribir
void	ft_putendl_fd(char *s, int fd);

///	@brief Envia el numero 'n' al file descriptor dado
/// @param n Numero que enviar
/// @param fd File descriptor sobre el que escribir
void	ft_putnbr_fd(int n, int fd);

/// @brief Crea un nuevo nodo. La variable miembro 'content'
/// se inicializa con el contenido del parametro 'content'.
/// La variable 'next', con NULL
/// @param content Contenido con el que crear el nodo
/// @return El nuevo nodo
t_list	*ft_lstnew(void *content);

/// @brief Añade el nodo 'new' al principio de la lista
/// @param lst Dirección de un puntero al primer nodo de una lista 
/// @param  new Puntero al nodo que añadir al principio de la lista
void	ft_lstadd_front(t_list **lst, t_list *new);

/// @brief Cuenta el número de nodos de una lista
/// @param lst Principio de la lista 
/// @return La longitud de la lista
int		ft_lstsize(t_list *lst);

/// @brief Devuelve el ultimo nodo de la lista
/// @param lst Principio de la lista
/// @return Ultimo nodo de la lista
t_list	*ft_lstlast(t_list	*lst);

/// @brief Añade el nodo 'new' al final de la lista 'lst'
/// @param lst Puntero al primer nodo de una lista 
/// @param new Puntero a un nodo que añadir a la lista
void	ft_lstadd_back(t_list **lst, t_list *new);

/// @brief Toma como parametro un nodo 'lst' y libera la
/// memoria del contenido utilizando la función 'del'
/// dada como parametro, además de liberar el nodo. La
/// memoria de 'next' no debe liberarse
/// @param lst Nodo a liberar
/// @param del Puntero a la funcion utilizada para liberar
/// el contenido del nodo
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/// @brief Elimina y libera el nodo 'lst' dado y todos los
/// consecutivos de ese nodo, utilizando la función 'del'
/// y free. Al final, el puntero a la lista debe ser NULL
/// @param lst Dirección de un puntero a un nodo
/// @param del Puntero a función utilizado para eliminar el contenido de un nodo
void	ft_lstclear(t_list **lst, void (*del)(void *));

/// @brief Itera la lista 'lst' y aplica la función 'f' en el contenido de cada
/// nodo
/// @param lst Puntero al primer nodo 
/// @param f un puntero a la función que utilizará cada nodo
void	ft_lstiter(t_list *lst, void (*f) (void *));

/// @brief Itera la lista 'lst' y aplica la funcion 'f' al contenido de cada
/// nodo. Crea una lista resultante de la aplicacion correcta y sucesiva de la
/// función 'f' sobre cada nodo. La funcion 'del' se utiliza para eliminar el 
/// contenido de un nodo si hace falta
/// @param lst Puntero a un nodo
/// @param f Direccion de un puntero a una funcion usada en la iteracion de cada
/// elemento de la lista
/// @param del Puntero a una funcion utilizado para eliminar el contenido
/// de un nodo si hace falta
/// @return La nueva lista. NULL si falla la memoria
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif