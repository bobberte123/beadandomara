Írj stringeket kezelő könyvtárat, az alábbi függvényekkel.  

size_t my_strlen( const char *str );
char* my_strcpy( const char* src );
int my_strcmp( const char *lhs, const char *rhs );
Header fájlban deklaráld a függvényeket (my_string.h), a függvények definíciói .c kiterjesztésű fájban legyenek megadva (my_string.c). A viselkedésük legyen egyező a string.h könyvtárban található hasonló nevű függvényekével, a következő kivétellel: 

a my_strcpy nem paraméterben kapja meg, hogy hová kell másolni, hanem a heap-en foglal annyi memóriát, amibe pont belefér a string (a záró null karakterrel együtt), oda másolja, és erre mutató pointerrel tér vissza. 
A könyvtárat tesztelheted az alábbi kóddal: 
