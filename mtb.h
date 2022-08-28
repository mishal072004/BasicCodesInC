#ifndef MTB_H_INCLUDED
#define MTB_H_INCLUDED
#include<time.h>
typedef struct user{
    char userid[100];
    char username[100];
    char password[100];
    char usertype[100];
    char question_id[100];
    char hint_answer[100];
    char mobile_number[11];
}user;

typedef struct question{
    char question_id[100];
    char question[100];
}question;

typedef struct seat{
    int seat_number;
    int seat_is_booked;
}seat;

typedef struct movie{
    char theater_id[100];
    char movie_id[100];
    char movie_name[100];
    int first_block_price[100];
    int secound_block_price[100];
    int third_block_price[100];
    struct tm show_date;
    seat seats[100];
}movie;

typedef struct theater{
    char theater_id[100];
    char theater_name[100];
    int is_booked;
}theater;

typedef struct ticket{
    char ticket_id[100];
    char theater_id[100];
    char movie_id[100];
    struct tm show_date;
    int seat_number;
    char user_id[100];
}ticket;

//screen decoration function
void print_char(char,int,int,int);
void print_title(char*,int,int,int);
void print_title_in_middle(char*,int,int);
void print_basic_screen();

//input validate function
void input_password(user*,int,int);
int is_valid_integer(char*);
void get_string(char*,int);
void get_password(char*,unsigned int);
char* get_mobile_number(int,int);
void add_questions();
void set_master_admin();
user* get_user_details();
void creat_user(char*);
user* get_credentials(char*);
int check_user_details(user*);
void forget_credentials(user*);
char* get_question_id();
int check_mobile_number_in_records(char*);
user* login (char*);
void add_questions();//due to missing semicolon you get all these errors
#endif // MTB_H_INCLUDED
