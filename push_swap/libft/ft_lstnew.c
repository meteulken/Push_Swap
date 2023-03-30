
#include "push_swap.h"

t_list *ft_lstnew(int content)
{
	t_list *root;

	root = malloc(sizeof(t_list *));
	if (root == NULL)
		return (0);
	root->content = content; //content bölümü contentimde sayım
	root->index = -1; // Sıralama işlemi yapmadan önce root'umun bütün indeksine -1 veriyorum ki bir işaret olsn ve sıralamayı yaptıktan sonra tekrar aynı liste elemanına dönmek istemediğim için
	root->next = NULL; //Root'un next'ini NULL'a eşitliyoruz
	return (root); //root'u dönüyoruz.
}
