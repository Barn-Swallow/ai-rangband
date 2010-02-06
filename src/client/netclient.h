#define MIN_RECEIVE_WINDOW_SIZE		1
#define MAX_RECEIVE_WINDOW_SIZE		4

#define CONN_PLAYING 1
#define CONN_SETUP	2 

extern int	receive_window_size;
//extern long	last_turns;

int Net_packet();
int Net_setup(void);
int Net_verify(void);
int Net_init(int fd);
void Net_cleanup(void);
int Net_flush(void);
int Net_fd(void);
int Net_input(void);
int Receive_resize_ack(void);
int Receive_motd(void);
int Receive_struct_info(void);
int Receive_basic_info(void);
int Receive_char_info(void);
int Receive_play(void);
int Receive_char_info_conn(void);
int Receive_start(void);
int Receive_end(void);
int Receive_leave(void);
int Receive_reliable(void);
int Receive_quit(void);
int Receive_reply(int *replyto, int *result);
int Send_ack(long rel_loops);
int Receive_magic(void);
int Receive_stat(void);
int Receive_maxstat(void);
int Receive_hp(void);
int Receive_oppose(void);
int Receive_ac(void);
int Receive_inven(void);
int Receive_equip(void);
int Receive_char_info(void);
int Receive_various(void);
int Receive_plusses(void);
int Receive_experience(void);
int Receive_gold(void);
int Receive_sp(void);
int Receive_objflags(void);
int Receive_history(void);
/*int Receive_char(void);*/
int Receive_message(void);
int Receive_state(void);
int Receive_title(void);
int Receive_depth(void);
int Receive_confused(void);
int Receive_poison(void);
int Receive_study(void);
int Receive_food(void);
int Receive_fear(void);
int Receive_speed(void);
int Receive_cut(void);
int Receive_keepalive(void);
int Receive_blind(void);
int Receive_stun(void);
int Receive_item(void);
int Receive_spell_info(void);
int Receive_direction(void);
int Receive_flush(void);
int Receive_term_info(void);
/*int Receive_line_info(void);*/
int Receive_floor(void);
int Receive_special_other(void);
int Receive_store(void);
int Receive_store_info(void);
int Receive_store_leave(void);
int Receive_player_store_info(void);
int Receive_sell(void);
int Receive_target_info(void);
int Receive_sound(void);
/*int Receive_mini_map(void);*/
/*int Receive_special_line(void);*/
int Receive_floor(void);
int Receive_pickup_check(void);
int Receive_party(void);
int Receive_channel(void);
int Receive_item_tester(void);
int Receive_custom_command(void);
int Receive_skills(void);
int Receive_pause(void);
int Receive_cursor(void);
int Receive_monster_health(void);
int Receive_stream_info(void);
int Receive_stream(void);

extern int Send_clear(void);
