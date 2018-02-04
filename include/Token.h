#ifndef INCLUDE_GUARD_10401297D13D414B9AA13AD3D00B1C6E
#define INCLUDE_GUARD_10401297D13D414B9AA13AD3D00B1C6E


/////////////////////
// Data structures //
/////////////////////

/**
 * User defined struct of unions to hold data about a token
 */
typedef struct Token_Data Token_Data;

typedef struct Token
{
	int type;
	int position, len;
	int line, column;
	Token_Data *data;
}Token;


////////////////////////////////
// Constructors & Destructors //
////////////////////////////////

/**
 * User defined function which allocates and returns a pointer to an instance of
 * user defined @p Token_Data struct
 * @return Pointer to allocated struct
 */
Token_Data *Token_Data_new();

/**
 * User defined function which deallocates the @p Token_Data struct whose
 * pointer is passed to it
 * @param  tdt_ptr Pointer to struct to be destroyed
 */
void Token_Data_destroy(Token_Data *tdt_ptr);

/**
 * Allocates and returns a pointer to @p Token struct
 * @return Ponter to struct
 */
Token *Token_new();

/**
 * Deallocates an instance of @p Token struct
 * @param tkn_ptr Pointer to struct to be destroyed
 */
void Token_destroy(Token *tkn_ptr);


#endif
