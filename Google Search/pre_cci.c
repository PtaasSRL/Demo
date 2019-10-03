# 1 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\google search\\\\combined_Google Search.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\google search\\\\combined_Google Search.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\google search\\\\combined_Google Search.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\Virtual User Generator\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\google search\\\\combined_Google Search.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\google search\\\\combined_Google Search.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-76.0.3809.132");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=76.0.3809.132&lang=en-US&acceptformat=crx2,crx3&x=id%3Dkbfnbcaeplbcioakkpcpgfkobkghlhen%26v%3D14.928.7183%26installedby%3Dinternal%26uc%26brand%3DCHBF", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=76", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("LSOLH=A9P-yLj5M08U0G_YM8TvfvBvS_67mRY:25884952:5d14; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIs40B; DOMAIN=accounts.google.com");

	web_add_cookie("OGPC=19013527-2:; DOMAIN=accounts.google.com");

	web_add_cookie("OGP=-19013527:; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=AHWqTUn5Rv2VJfSIYA96PhAGtdZlPPiLqVfztpjp1Ikb2IQsaT7uds6jjwxLPsdS; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI4GehmZ4gJv2HX8dPnizA9WhxMfmHc0TL6O3WXrQqoyPSckv1HablEIZiSYQ8g7X8Pf_RDPUlJ0OlbWsN8R1-6ydOwOwW_xLgFybfKI2h-cYgQPypkks2nQyxzgPoT_FpiZ5m_ceabNFH6cbaK7T1eR_V17d5kD4-6snnBjxAMA_Z8ZmyaeujVTpRqPli_9Mg6c8YNazHJtZFU8rpmppky89kMt0A; DOMAIN=accounts.google.com");

	web_add_cookie("CONSENT=YES+US.en+201908; DOMAIN=accounts.google.com");

	web_add_cookie("NID=188=Mmw9cNd48LkWQzxJrBPzl57RO_yRe5Sv4PDU1H1Svdyv4fVFTudcGCm-prAdOvjhqoFmHEA05plXCM_tYNivc-BIXB5yEELdnagYQHFmttLWKIrKaUat4rZ_2Golyc6py8vYskMyIZnP43DaIs2q5YJ4ympgh8jhdONcp79YT-XKR2ZVhxOtvDHfOXRzx7oX0zE8pTRDSYGeCojSpg; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:zUKalBsYBQ9lqUvHCDLsZi1roReaNCGEYKZiua5gR5akK3-rgnzCSFU2YMRNwHirUImB23JJ35VpWVEzXDkuBgCQD0VT0w:vTr415QDfq8EeqR-; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2019-09-10-20; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body= ", 
		"EXTRARES", 
		"Url=https://d3cv4a9a9wh0bt.cloudfront.net/dynamicConfig.json", "Referer=", "ENDITEM", 
		"LAST");

	web_add_cookie("gnar_containerId=FJxCZgNqjdTx; DOMAIN=auth.grammarly.com");

	web_add_cookie("_ga=GA1.2.221876747.1551797089; DOMAIN=auth.grammarly.com");

	web_add_cookie("ga_clientId=221876747.1551797089; DOMAIN=auth.grammarly.com");

	web_add_cookie("tdi=qdyyv2pcd26sy1hc; DOMAIN=auth.grammarly.com");

	web_add_cookie("grauth=AABG07kQQvLQlXsGPmz8K8UW71KwYbH_-97txzc-xxMv-ve-xmiacNZJnFTOmZBARaaSZiBaMsLxhEI1; DOMAIN=auth.grammarly.com");

	web_add_cookie("csrf-token=AABG03Ig+wyFmB7n1kaNkBuHGL84wJhKH0mL+Q; DOMAIN=auth.grammarly.com");

	web_add_cookie("experiment_groups=denali_link_to_kaza_enabled|denali_rtf_existing_u_enabled|fluid_gdocs_rollout_enabled|safari_migration_backup_notif1_enabled|officeaddin_ue_exp3_enabled|google_display_ads_incrementality_control_enabled|safari_migration_inline_disabled_enabled|safari_migration_popup_editor_disabled_enabled|officeaddin_proofit_exp3_enabled|gb_in_editor_free_Test1|safari_migration_inline_warning_enabled|safari_migration_app_extension|officeaddin_perf_exp3_enabled|drift_custom_email_test"
		"; DOMAIN=auth.grammarly.com");

	web_add_cookie("v1WNonKA7u=v1WNonKA7u; DOMAIN=auth.grammarly.com");

	web_add_cookie("MPz0lkmXWo=MPz0lkmXWo; DOMAIN=auth.grammarly.com");

	web_add_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("x-client-type", 
		"extension-chrome");

	web_add_header("x-client-version", 
		"14.928.7183");

	web_add_header("x-container-id", 
		"FJxCZgNqjdTx");

	web_add_header("x-csrf-token", 
		"AABG03Ig+wyFmB7n1kaNkBuHGL84wJhKH0mL+Q");

	web_custom_request("oranonymous", 
		"URL=https://auth.grammarly.com/v3/user/oranonymous?app=chromeExt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("X-Rlz-String", 
		"1C2CHBF_enCR838");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", "Referer=", "ENDITEM", 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", "Referer=", "ENDITEM", 
		"Url=https://www.google.com/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/images/searchbox/desktop_searchbox_sprites302_hr.webp", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/images/nav_logo299.webp", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://ssl.gstatic.com/gb/images/i1_1967ca6a.png", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.o8oOKUtoWPU.O/ck=xjs.s.ZAYdcy2q3LQ.L.W.O/m=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,cdos,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff,d,csi/am=AgAAWATY7z4Q5P8rAAD4AgCAAHeBDRaIA6FiWA2IgA/d=1/dg=2/br=1/ct=zgms/rs=ACT90oEIFIbOanXtGqmg4GXxQPc3DnxJ1Q", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOmCnqEu92Fr1Mu4mxK.woff2", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://fonts.gstatic.com/s/roboto/v18/KFOlCnqEu92Fr1MmWUlfBBc4.woff2", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.gstatic.com/images/branding/googlemic/2x/googlemic_color_24dp.png", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.gstatic.com/og/_/js/k=og.og2.en_US.m5OoxdGM7fM.O/rt=j/m=def,aswid/exm=in,fot/d=1/ed=1/rs=AA2YrTs0IcG2a12QVd2sqDU4p2pTnea2dQ", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.o8oOKUtoWPU.O/ck=xjs.s.ZAYdcy2q3LQ.L.W.O/am=AgAAWATY7z4Q5P8rAAD4AgCAAHeBDRaIA6FiWA2IgA/d=1/exm=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,cdos,csi,d,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oEIFIbOanXtGqmg4GXxQPc3DnxJ1Q/m=aa,abd,async,dvl,fEVMic,foot,ifl,lu,m,mUpTid,mu,sb_wiz,sf,sonic,spch,wft,xz7cCd?xjs=s1", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://apis.google.com/_/scs/abc-static/_/js/k=gapi.gapi.en.4CFxRrSvxq0.O/m=gapi_iframes,googleapis_client,plusone/rt=j/sv=1/d=1/ed=1/rs=AHpOoo8skdVJHB5uqGRXCunlhzuKwaF7Ag/cb=gapi.loaded_0", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/images/branding/googlelogo/2x/googlelogo_color_92x30dp.png", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.gstatic.com/ui/v1/activityindicator/loading_24.gif", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.gstatic.com/og/_/js/k=og.qtm.en_US.OjPiiDkP6rY.O/rt=j/m=qabr,q_d,qcwid,qmutsd/exm=qaaw,qadd,qaid,qein,qhaw,qhbr,qhch,qhga,qhid,qhin,qhpr/d=1/ed=1/rs=AA2YrTuO2VKnI2hsONoUjbWalPweOFMAkg", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.o8oOKUtoWPU.O/ck=xjs.s.ZAYdcy2q3LQ.L.W.O/m=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,ZyRBae,cdos,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff,d,csi/am=AgAAWATY7z6Q5_8rgAD4AgCAAHeBDRaIAaFiWA2IgA/d=1/dg=2/br=1/ct=zgms/rs=ACT90oEy63c12-cIKM9PsbYbPHm3q9dIYg", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/maps/vt/data="
		"7AqWyPiEKX1S0ExlydgD02xB3LxywULr5sTs342wPr24g84_znDIdobTDRx6yDVbZhPrP9gfStDTfO7cmIrWKi8Q1D8XLHHBtdFk3Y3SmdQKJMmBTs0zivPoitr1r6VZxtBySDv134FXLhLXYNyhbNUebNwVNF_APEQhL8Zp_jD-4nvnL6C7ZZXr9j-APy7Pe2qFzBRnbY60V9eLaEs4Ziyu2cNmoMdEvJiIsUmSKbO9nAJH9RxNJPLiKzmfSpwqR__5BWnZGMXvXr9W34sgF21LVKX_6iqSzo0sfCfF8ePnevl1r7um1Rcc3eZzn9bNEtxDN8zQmgiLG9PZBsnVP64EddUZoU5IaO9riX874UtJkgAAwuBgxe3K56ppyxtiGnlp82LCeBceeLWX0rAMXJyKwii9dZAR5ZkwMAo3nZQHSGBDuJZhidV9B4guredt_HisfAdOPqF9c-wfXWx2wmaoJcc0EelymbpbESUPLaft4WATbKwaUu"
		"y6QFtV6n4j_S3RxeZPYfzm4nCwFtBU1iTPqZTQgCP5tWZOzcGJNphr35lDTOiN1qlcwcktQmXk1hagAvUmuutgc52Fes9vCUFX0VKgtqofy3RDk-5lckOCWG8zJ8pqPkAkN1WNcmkpK4O8wTI-lu8OiQ5cFGL59bTanPfbe_eCBoyX4O3f1zrJbB83yMDfmQtdCB9l1rYI9ZF0uHlEPJLxprY6UrSt1DamTmZPp6VvPbgg4l14hFrROtPiIOspHwe4fb9kQPQlkYAN6iEf8FW2w1mbYQExmIYSQFiu50LRILdLAfcSjylXsK7QbViMChnSV0RdOsRxO8SphdBPYchYQZq9WiTvuUhcbz_zquEpTtsIutMkqSJjKoyvb5mUKq_gCmkShwRkpLQDjZ0cOxGbs3V_IU3EKWDcJHxo8jg2a2UyORSagQB5kMZcr5aFxJtzuAVQ-Wsf_84QUvtBbNk_50A5P1j9aBDGYAGdSq3hEqWScaW3J_64"
		"2OeV3t8Hum0u2OZEuMmekIM-fTs7yyXt2f0E6bnGE-QyzHsCPDBvH2e1w7Ewh8ANsP_CnOs1yTpdS7RDrHj1MBC8cx_eRPdZufcQDPWtyCiZFKiF6pVapdhCrXm40ww", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://id.google.com/verify/AAp5M_uo4FrSxA4Mh3hy3NLLHzLrsEn5GQEXlPJ5L09C45ZfgICLzRLd_Hl6QN-nnQg7ED20pB4whL20gXvRZW_E6HEmppCMaQg-eAJEKnXjdjr-3RMNZg", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.o8oOKUtoWPU.O/ck=xjs.s.ZAYdcy2q3LQ.L.W.O/am=AgAAWATY7z6Q5_8rgAD4AgCAAHeBDRaIAaFiWA2IgA/d=1/exm=Fkg7bd,HcFEGb,IvlUe,MC8mtf,OF7gzc,RMhBfe,T4BAC,TJw5qb,TbaHGc,Y33vzc,ZyRBae,cdos,csi,d,hsm,iDPoPb,jsa,mvYTse,tg8oTe,uz938c,vWNDde,ws9Tlc,yQ43ff/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oEy63c12-cIKM9PsbYbPHm3q9dIYg/m=F8FRnd,GxIAgd,NBZ7u,OG6ZHd,RqxLvf,T6sTsf,T7XTS,TxZWcc,URQPYc,Wq6lxf,XMgU6d,XjCeUc,aCZVp,aa,aam1T,abd,alc,aspn,async,bgd,clc,dvl,eN4qad,eZayvb,exdc,flum"
		",foot,kyn,lazG7b,lii,llb,lu,m,mI3LFb,mUpTid,mpck,mu,o02Jie,oc8g5d,pB6Zqd,qik19b,rHjpXd,safc,sb_wiz,sf,sonic,spch,tl,vs,wft,xz7cCd,zbML3c?xjs=s1", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.o8oOKUtoWPU.O/ck=xjs.s.ZAYdcy2q3LQ.L.W.O/am=AgAAWATY7z6Q5_8rgAD4AgCAAHeBDRaIAaFiWA2IgA/d=1/exm=F8FRnd,Fkg7bd,GxIAgd,HcFEGb,IvlUe,MC8mtf,NBZ7u,OF7gzc,OG6ZHd,RMhBfe,RqxLvf,T4BAC,T6sTsf,T7XTS,TJw5qb,TbaHGc,TxZWcc,URQPYc,Wq6lxf,XMgU6d,XjCeUc,Y33vzc,ZyRBae,aCZVp,aa,aam1T,abd,alc,aspn,async,bgd,cdos,clc,csi,d,dvl,eN4qad,eZayvb,exdc,flum,foot,hsm,iDPoPb,jsa,kyn,lazG7b,lii,llb,lu,m,mI3LFb,mUpTid,mpck,mu,mvYTse,o02Jie,oc8g5d,pB6Zqd,qik19b,rHjpXd,safc,sb_wiz"
		",sf,sonic,spch,tg8oTe,tl,uz938c,vWNDde,vs,wft,ws9Tlc,xz7cCd,yQ43ff,zbML3c/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oEy63c12-cIKM9PsbYbPHm3q9dIYg/m=ZuqZhb,c3JEL?xjs=s2", "Referer=https://www.google.com/", "ENDITEM", 
		"Url=https://www.google.com/xjs/_/js/k=xjs.s.en_US.o8oOKUtoWPU.O/ck=xjs.s.ZAYdcy2q3LQ.L.W.O/am=AgAAWATY7z6Q5_8rgAD4AgCAAHeBDRaIAaFiWA2IgA/d=1/exm=F8FRnd,Fkg7bd,GxIAgd,HcFEGb,IvlUe,MC8mtf,NBZ7u,OF7gzc,OG6ZHd,RMhBfe,RqxLvf,T4BAC,T6sTsf,T7XTS,TJw5qb,TbaHGc,TxZWcc,URQPYc,Wq6lxf,XMgU6d,XjCeUc,Y33vzc,ZuqZhb,ZyRBae,aCZVp,aa,aam1T,abd,alc,aspn,async,bgd,c3JEL,cdos,clc,csi,d,dvl,eN4qad,eZayvb,exdc,flum,foot,hsm,iDPoPb,jsa,kyn,lazG7b,lii,llb,lu,m,mI3LFb,mUpTid,mpck,mu,mvYTse,o02Jie,oc8g5d,pB6Zqd,qik19b,"
		"rHjpXd,safc,sb_wiz,sf,sonic,spch,tg8oTe,tl,uz938c,vWNDde,vs,wft,ws9Tlc,xz7cCd,yQ43ff,zbML3c/ed=1/dg=2/br=1/ct=zgms/rs=ACT90oEy63c12-cIKM9PsbYbPHm3q9dIYg/m=QPfswe,Uuupec,YmOPAf,r36a9c,xj7LNb?xjs=s2", "Referer=https://www.google.com/", "ENDITEM", 
		"LAST");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204", 
		"URL=https://www.google.com/gen_204?s=webhp&t=aft&atyp=csi&ei=bQ94XbzpOtL6sAXp3pGwAw&rt=wsrt.10162,aft.1231,prt.1112&bl=zMAX&ima=1&imad=0&imn=1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_cookie("gnar_containerId=FJxCZgNqjdTx; DOMAIN=data.grammarly.com");

	web_add_cookie("_ga=GA1.2.221876747.1551797089; DOMAIN=data.grammarly.com");

	web_add_cookie("ga_clientId=221876747.1551797089; DOMAIN=data.grammarly.com");

	web_add_cookie("tdi=qdyyv2pcd26sy1hc; DOMAIN=data.grammarly.com");

	web_add_cookie("grauth=AABG07kQQvLQlXsGPmz8K8UW71KwYbH_-97txzc-xxMv-ve-xmiacNZJnFTOmZBARaaSZiBaMsLxhEI1; DOMAIN=data.grammarly.com");

	web_add_cookie("csrf-token=AABG03Ig+wyFmB7n1kaNkBuHGL84wJhKH0mL+Q; DOMAIN=data.grammarly.com");

	web_add_cookie("experiment_groups=denali_link_to_kaza_enabled|denali_rtf_existing_u_enabled|fluid_gdocs_rollout_enabled|safari_migration_backup_notif1_enabled|officeaddin_ue_exp3_enabled|google_display_ads_incrementality_control_enabled|safari_migration_inline_disabled_enabled|safari_migration_popup_editor_disabled_enabled|officeaddin_proofit_exp3_enabled|gb_in_editor_free_Test1|safari_migration_inline_warning_enabled|safari_migration_app_extension|officeaddin_perf_exp3_enabled|drift_custom_email_test"
		"; DOMAIN=data.grammarly.com");

	web_add_cookie("v1WNonKA7u=v1WNonKA7u; DOMAIN=data.grammarly.com");

	web_add_cookie("MPz0lkmXWo=MPz0lkmXWo; DOMAIN=data.grammarly.com");

	web_add_cookie("1jVFgRGbYm=1jVFgRGbYm; DOMAIN=data.grammarly.com");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("x-client-type", 
		"extension-chrome");

	web_add_header("x-client-version", 
		"14.928.7183");

	web_add_header("x-container-id", 
		"FJxCZgNqjdTx");

	web_add_header("x-csrf-token", 
		"AABG03Ig+wyFmB7n1kaNkBuHGL84wJhKH0mL+Q");

	web_custom_request("mimic", 
		"URL=https://data.grammarly.com/api/mimic", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"originalUri\":\"\",\"newUser\":false}", 
		"EXTRARES", 
		"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ9dVUO7IApPEjLWlIR0ckFA==", "Referer=", "ENDITEM", 
		"LAST");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204_2", 
		"URL=https://www.google.com/gen_204?atyp=csi&ei=bQ94XbzpOtL6sAXp3pGwAw&s=jsa&jsi=s,t.0,et.focus,n.iDPoPb,cn.1&zx=1568149361410", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_cookie("sqqrttJZZ5=sqqrttJZZ5; DOMAIN=data.grammarly.com");

	web_add_auto_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("x-client-type", 
		"extension-chrome");

	web_add_auto_header("x-client-version", 
		"14.928.7183");

	web_add_auto_header("x-container-id", 
		"FJxCZgNqjdTx");

	web_add_auto_header("x-csrf-token", 
		"AABG03Ig+wyFmB7n1kaNkBuHGL84wJhKH0mL+Q");

	web_custom_request("find", 
		"URL=https://data.grammarly.com/api/props/v2/find", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"regex\":\"STAT:.*\"}", 
		"LAST");

	web_custom_request("dialectStrong", 
		"URL=https://data.grammarly.com/api/props/v2/dialectStrong", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	web_custom_request("emogenieEmojiState", 
		"URL=https://data.grammarly.com/api/props/v2/emogenieEmojiState", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	web_add_cookie("1P_JAR=2019-9-10-21; DOMAIN=ogs.google.com");

	(web_remove_auto_header("x-client-type", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("x-client-version", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("x-container-id", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("x-csrf-token", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Origin", 
		"https://www.google.com");

	web_add_header("Purpose", 
		"prefetch");

	web_url("so", 
		"URL=https://ogs.google.com/widget/app/so?hl=en&origin=https%3A%2F%2Fwww.google.com&pid=1&spid=1&usegapi=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("1P_JAR=2019-9-10-21; DOMAIN=www.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204_3", 
		"URL=https://www.google.com/gen_204?atyp=csi&ei=bQ94XbzpOtL6sAXp3pGwAw&s=webhp&t=all&bl=zMAX&imn=1&adh=&conn=onchange&ima=1&imad=0&ime=1&imeb=0&imeo=0&wh=1057&scp=0&net=dl.1500,ect.4g,rtt.100&mem=ujhs.11,tjhs.15,jhsl.2198,dm.8&sto=&sys=hc.8&rt=prt.1112,aft.1231,iml.1231,dcl.1114,xjsls.1121,xjses.3145,xjsee.3178,xjs.3178,ol.4384,wsrt.10162,cst.982,dnst.0,rqst.1065,rspt.279,sslt.767,rqstt.9376,unt.8090,cstt.8394,dit.11276&zx=1568149362609", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("logv2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.state.dapi.prop.initialize\",\"level\":\"INFO\",\"extra\":{\"json\":\"{\\\"name\\\":\\\"dialectStrong\\\"}\"},\"application\":\"extensionChrome\",\"version\":\"14.928.7183\",\"env\":\"prod\",\"userId\":\"690325164\"}", 
		"LAST");

	web_add_auto_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204_4", 
		"URL=https://www.google.com/gen_204?atyp=csi&ei=bQ94XbzpOtL6sAXp3pGwAw&s=jsa&jsi=s,et.click,n.iDPoPb,cn.2&zx=1568149362719", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_custom_request("gen_204_5", 
		"URL=https://www.google.com/gen_204?atyp=i&ei=bQ94XbzpOtL6sAXp3pGwAw&ved=0ahUKEwj8077Lk8fkAhVSPawKHWlvBDYQ39UDCAY&zx=1568149362720", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("search", 
		"URL=https://www.google.com/complete/search?q&cp=0&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en&authuser=0&psi=bQ94XbzpOtL6sAXp3pGwAw.1568149361420&ei=bQ94XbzpOtL6sAXp3pGwAw&nolsbt=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"chrome-extension://kbfnbcaeplbcioakkpcpgfkobkghlhen");

	web_custom_request("logv2_2", 
		"URL=https://f-log-extension.grammarly.io/logv2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"logger\":\"bg.state.dapi.prop.initialize\",\"level\":\"INFO\",\"extra\":{\"json\":\"{\\\"name\\\":\\\"emogenieEmojiState\\\"}\"},\"application\":\"extensionChrome\",\"version\":\"14.928.7183\",\"env\":\"prod\",\"userId\":\"690325164\"}", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("gen_204_6", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=webfont_timing&cad=@2sec,1.s.11180,1.ds.0,1.de.0,1.cs.446,1.ce.1242,1.rq.1256,1.rs.1431,1.re.1582,1.d.1582,2.s.11182,2.ds.0,2.de.0,2.cs.560,2.ce.1322,2.rq.1331,2.rs.1547,2.re.1630,2.d.1630&s=11177&er=12960&eb=12966&ei=bQ94XbzpOtL6sAXp3pGwAw&zx=1568149363841", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("1P_JAR=2019-9-10-21; DOMAIN=adservice.google.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("ui", 
		"URL=https://adservice.google.com/adsid/google/ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("gen_204_7", 
		"URL=https://www.google.com/gen_204?atyp=i&ei=bQ94XbzpOtL6sAXp3pGwAw&ved=0ahUKEwj8077Lk8fkAhVSPawKHWlvBDYQ39UDCAY&zx=1568149364390", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("search_2", 
		"URL=https://www.google.com/complete/search?q=a&cp=1&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en&authuser=0&psi=bQ94XbzpOtL6sAXp3pGwAw.1568149361420&ei=bQ94XbzpOtL6sAXp3pGwAw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("search_3", 
		"URL=https://www.google.com/complete/search?q=an&cp=2&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en&authuser=0&psi=bQ94XbzpOtL6sAXp3pGwAw.1568149361420&ei=bQ94XbzpOtL6sAXp3pGwAw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("search_4", 
		"URL=https://www.google.com/complete/search?q=ani&cp=3&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en&authuser=0&psi=bQ94XbzpOtL6sAXp3pGwAw.1568149361420&ei=bQ94XbzpOtL6sAXp3pGwAw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("search_5", 
		"URL=https://www.google.com/complete/search?q=anim&cp=4&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en&authuser=0&psi=bQ94XbzpOtL6sAXp3pGwAw.1568149361420&ei=bQ94XbzpOtL6sAXp3pGwAw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("search_6", 
		"URL=https://www.google.com/complete/search?q=anima&cp=5&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en&authuser=0&psi=bQ94XbzpOtL6sAXp3pGwAw.1568149361420&ei=bQ94XbzpOtL6sAXp3pGwAw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("search_7", 
		"URL=https://www.google.com/complete/search?q={Farm}&cp=6&client=psy-ab&xssi=t&gs_ri=gws-wiz&hl=en&authuser=0&psi=bQ94XbzpOtL6sAXp3pGwAw.1568149361420&ei=bQ94XbzpOtL6sAXp3pGwAw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"LAST");

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("search_8", 
		"URL=https://www.google.com/search?rlz=1C2CHBF_enCR838&source=hp&ei=bQ94XbzpOtL6sAXp3pGwAw&q={Farm}&oq={Farm}&gs_l=psy-ab.3..0j0i131j0l4j0i131j0l3.2981.5154..5870...0.0..0.227.1095.0j6j1......0....1..gws-wiz.....0.HyVNezGFM_Y&ved=0ahUKEwj8077Lk8fkAhVSPawKHWlvBDYQ4dUDCAc&uact=5", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,fbpiglieekigmkeebmeohkelfpjjlaia,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,kbfnbcaeplbcioakkpcpgfkobkghlhen,kcehcblfpidimbihdfophhhdejckolgh,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-76.0.3809.132");

	web_url("crx_2", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=76.0.3809.132&lang=en-US&acceptformat=crx2,crx3&x=id%3Daapocclcgogkmnckokdopfmhonfmgoek%26v%3D0.10%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Daohghmighlieiainnegkcijnfilokake%26v%3D0.10%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dapdfllckaahabafndbhieahigkjlhalf%26v%3D14.2%26installedby%3Dinternal%26uc%26brand%3DCHBF&x="
		"id%3Dblpcfgokakmgnkcojhhkbfbldkacnbeo%26v%3D4.2.8%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dfbpiglieekigmkeebmeohkelfpjjlaia%26v%3D2.5.14%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dfelcaaldnbdncclmgdcncolpebgiejap%26v%3D1.2%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dghbmnnjooekpmoecnnnilnnbdlolhkhi%26v%3D1.7%26installedby%3Dexternal%26uc%26brand%3DCHBF&x=id%3Dkbfnbcaeplbcioakkpcpgfkobkghlhen%26v%3D14.928.7183%26installedby%3Dinternal%26uc%26brand%3DCHBF&x="
		"id%3Dkcehcblfpidimbihdfophhhdejckolgh%26v%3D119.10910.10836.0%26installedby%3Dexternal%26uc%26brand%3DCHBF&x=id%3Dnmmhkkegccagdldgiimedpiccmgmieda%26v%3D1.0.0.4%26installedby%3Dother%26uc%26brand%3DCHBF&x=id%3Dpjkljhegncpnkpknbcohdijeoejaedia%26v%3D8.2%26installedby%3Dinternal%26uc%26brand%3DCHBF&x=id%3Dpkedcjkdefgpdelpbcmbmeomcjbeemfm%26v%3D7619.603.0.2%26installedby%3Dother%26uc%26brand%3DCHBF", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("gen_204_8", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=rfl&cad=&ei=dw94XZ-TGM_SsAX07Zi4DA&zx=1568149368685", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("gen_204_9", 
		"URL=https://www.google.com/gen_204?s=web&t=aft&atyp=csi&ei=dw94XZ-TGM_SsAX07Zi4DA&rt=wsrt.213,aft.2272,prt.1096,sct.647&bl=zMAX&ima=5&imad=5&imn=12", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_url("client_204", 
		"URL=https://www.google.com/client_204?&atyp=i&biw=1920&bih=1057&ei=dw94XZ-TGM_SsAX07Zi4DA", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_header("Purpose", 
		"prefetch");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("so_2", 
		"URL=https://ogs.google.com/widget/app/so?hl=en&origin=https%3A%2F%2Fwww.google.com&pid=1&spid=1&usegapi=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("bgasy", 
		"URL=https://www.google.com/async/bgasy?ei=dw94XZ-TGM_SsAX07Zi4DA&rlz=1C2CHBF_enCR838&yv=3&async=_fmt:jspb", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("DV=01qb6LiW56onEFuauBIUhN171cbP0ZYtIbbBr4x5AQIAAAA; DOMAIN=www.google.com");

	web_add_auto_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("gen_204_10", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=&cad=udla=3&ei=dw94XZ-TGM_SsAX07Zi4DA&e=12&zx=1568149370546", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_custom_request("gen_204_11", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=&cad=udla=1&ei=dw94XZ-TGM_SsAX07Zi4DA&b=0&act=p&ps=3&zx=1568149370576", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_custom_request("gen_204_12", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=&cad=udla=3&ei=dw94XZ-TGM_SsAX07Zi4DA&pd=28&e=3&zx=1568149370575", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_custom_request("gen_204_13", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=&cad=udla=3&ei=dw94XZ-TGM_SsAX07Zi4DA&e=9&d=14&zx=1568149370591", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("ecr", 
		"URL=https://www.google.com/async/ecr?ei=dw94XZ-TGM_SsAX07Zi4DA&lei=dw94XZ-TGM_SsAX07Zi4DA&rlz=1C2CHBF_enCR838&yv=3&async=encoded_cache_key:ChMI36r-z5PH5AIVTymsCh30NgbHEgIYAg,version_info:01qb6LiW56oX0GvhL8Cv7YFz48bP0RY,attempt:1,_fmt:jspb", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.google.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("gen_204_14", 
		"URL=https://www.google.com/gen_204?atyp=csi&ei=dw94XZ-TGM_SsAX07Zi4DA&s=web&t=all&bl=zMAX&imn=12&adh=&conn=onchange&ima=7&imad=5&ime=2&imeb=4&imeo=0&wh=1057&scp=0&fld=2258&net=dl.1200,ect.4g,rtt.150&mem=ujhs.24,tjhs.39,jhsl.2198,dm.8&sto=&sys=hc.8&rt=sct.647,prt.1096,aft.2272,iml.2272,xjsls.1194,dcl.1195,xjses.2286,xjsee.2318,xjs.2318,ol.3657,wsrt.213,cst.0,dnst.0,rqst.1366,rspt.1176,rqstt.23,unt.19,ppunt.0,cstt.19,dit.1408&zx=1568149371155", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("ui_2", 
		"URL=https://adservice.google.com/adsid/google/ui", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("gen_204_15", 
		"URL=https://www.google.com/gen_204?atyp=i&ct=webfont_timing&cad=@2sec,1.s.342,1.ds.0,1.de.0,1.cs.0,1.ce.0,1.rq.0,1.rs.0,1.re.0,1.d.0,2.s.343,2.ds.0,2.de.0,2.cs.0,2.ce.0,2.rq.0,2.rs.0,2.re.0,2.d.0&c=3&t=861&s=340&er=343&eb=343&ei=dw94XZ-TGM_SsAX07Zi4DA&zx=1568149372511", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\google search\\\\combined_Google Search.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\mcarlosa\\documents\\vugen\\scripts\\google search\\\\combined_Google Search.c" 2

