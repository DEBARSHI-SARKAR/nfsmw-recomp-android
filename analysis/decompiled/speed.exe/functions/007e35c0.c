/* speed.exe 007e35c0 _GetPrimaryLen; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _GetPrimaryLen
   
   Library: Visual Studio 2003 Debug */

int _GetPrimaryLen(char *param_1)

{
  char local_9;
  int local_8;
  
  local_8 = 0;
  local_9 = *param_1;
  while (((param_1 = param_1 + 1, '@' < local_9 && (local_9 < '[')) ||
         (('`' < local_9 && (local_9 < '{'))))) {
    local_8 = local_8 + 1;
    local_9 = *param_1;
  }
  return local_8;
}

