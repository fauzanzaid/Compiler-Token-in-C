#include <stdlib.h>

#include "Token.h"


////////////////////////////////
// Constructors & Destructors //
////////////////////////////////

Token *Token_new(){
	Token *tkn_ptr = malloc( sizeof(Token) );
	tkn_ptr->data = Token_Data_new();
}

void Token_destroy(Token *tkn_ptr){
	Token_Data_destroy(tkn_ptr->data);
	free(tkn_ptr);
}
