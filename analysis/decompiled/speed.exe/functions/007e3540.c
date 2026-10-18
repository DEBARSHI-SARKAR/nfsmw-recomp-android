/* speed.exe 007e3540 _LcidFromHexString; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _LcidFromHexString
   
   Library: Visual Studio 2003 Debug */

int _LcidFromHexString(char *param_1)

{
  char local_9;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    local_9 = *param_1;
    param_1 = param_1 + 1;
    if (local_9 == '\0') break;
    if ((local_9 < 'a') || ('f' < local_9)) {
      if (('@' < local_9) && (local_9 < 'G')) {
        local_9 = local_9 + -7;
      }
    }
    else {
      local_9 = local_9 + -0x27;
    }
    local_8 = local_8 * 0x10 + -0x30 + (int)local_9;
  }
  return local_8;
}

