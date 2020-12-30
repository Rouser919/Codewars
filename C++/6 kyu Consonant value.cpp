#include <string>

bool is_consonant( char const c ) {
  return c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';  
}

int solve( std::string const& s){
  int highest = 0;
  int current_streak = 0;
  
  for ( char const c : s ) {
    if ( is_consonant( c ) ) {
      current_streak += c - 'a' + 1;
    } 
    else {
      highest = std::max( highest, current_streak );
      current_streak = 0;
    }
  }
  
  highest = std::max( highest, current_streak );
  
  return highest;
}
