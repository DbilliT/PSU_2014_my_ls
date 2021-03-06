/*
** my.h for my in /home/bechad_p/rendu/Piscine_C_J09/include
** 
** Made by Pierre Bechade
** Login   <bechad_p@epitech.net>
** 
** Started on  Fri Oct 10 10:59:44 2014 Pierre Bechade
** Last update Sun Nov  2 22:17:03 2014 Pierre Bechade
*/

#ifndef _MY_H_
# define _MY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>

int     my_add(int a, int b);
int     my_sub(int a, int b);
int     my_mul(int a, int b);
int     my_div(int a, int b);
int     my_usage(int a, int b);
int     my_mod(int a, int b);
int     my_calcule3(char *str, int i, double nb_final, int nb_return);
void    my_calcule2(int nb);
int     my_put_nbr(int nb);
int     my_getnbr(char *str);
void	my_ope_erreur(char *str, char **av);
char	*my_epur_str(char *str, char **av);
void	my_gestion_erreur_calc(char *str, char **av);
char	*clean_param(char **av);
int	my_is_match_moins(char c, char *cmp);
int	my_is_match(char c, char *cmp);
void	my_check_bracket(char *str, char **av);
void	my_count_parent(char *str, char **av);
void    my_putchar(char c);
int	my_putstr(char *str);
int     my_strlen(char *str);
int     my_strcmp(char *s1, char *s2);
char    *my_strdup(char *src);
char    *my_strcat(char *dest, char *src);
int	gestion_erreur_size_read(char **av);
int	gestion_erreur_base_double(char **av);
int	gestion_erreur_operateur_double(char **av);
int	gestion_erreur_operateur(char **av);
int	gestion_erreur(int ac, char **av);
int	gestion_erreur_base(char **av);
void	my_parseur(char *str, char **av);
int     my_is_num(char *str);
char    *gauche(char *str, int a);
int     operateur_prio(char c);
int     operateur_bas(char c);
char    *my_clean_space(char *str);
int     do_op(int, char *, int);
DIR     *x_opendir(char *folder);
DIR	*opendir(const char *name);
DIR	*fdopendir(int fd);
struct dirent   *x_readdir(DIR *path);
void    my_swap_str(char **s1, char **s2);
void	my_trie(int j, char **tab);
char	*my_recup_option(char **av);
char	**my_recup_path(int ac, char **av);
void    *my_xmalloc(int size);
char    *my_xstrdup(char *src);
void	my_putchar_e(char c);
void	my_putstr_e(char *str);
void    my_parse_option(char *str);
void	my_char_cmp(char c);
char    *my_clean_option(char *opt);
void    my_apply_ls(char *opt, char **tab, int i);
void    my_ls_l(char *str, char **tab);
void	type(struct stat sb);
void	affiche_l(char *tab);
void	total(char *str, char **tab);
int	my_simple_ls(char *tab, int i);
void    affiche(char **tab);
void	my_ls_simple(char **tab, int a);
int     my_ls(char *str, int i);
void    my_ls_l1(char **tab, int a);
int	my_ls_l2(char *str, int i);
int     my_cpt_folder(char *str);
int	my_rempli_tab(char *str, int size);
int     my_xlstat(char *str, struct stat *sb);
char    *my_ajout_path(char *str, char *tabi);
void    my_ls_r(char **tab, int a);
int	my_ls_r1(char *str, int i);
void    my_ls_lr2(char *str, char **tab);
int     my_rempli_tab_lr(char *str, int size);
int     my_ls_lr1(char *str, int i);
void    my_ls_lr(char **tab, int a);
void    aff_link(char *copy);
#endif /* _MY_H_ */
