#ifndef RUBIKS_H
#define RUBIKS_H

#define PRINT_SQUARE_DEBUG_ 0

#define EMPTY 0
#define BLOCKED 1

void print_tab(int **tab);

void algo_line(int **tab, int line);
void algo_column(int **tab, int column);
void algo_square(int **tab, int square);

void algo_line_reverse(int **tab, int line);
void algo_column_reverse(int **tab, int column);
void algo_square_reverse(int **tab, int square);

int is_in_line(int **tab, int line, int value);
int is_in_col(int **tab, int column, int value);

int *look_for_space(int **table, int *lines, int *columns, int value);

int *look_for_value(int **table, int *lines, int *columns, int value);

void rotate_lines(int **table, int line, int offset);
void rotate_columns(int **table, int column, int offset);

void build_first_square(int **table);
void build_first_line(int **table);
void line_to_square(int **table, int line);

#endif
