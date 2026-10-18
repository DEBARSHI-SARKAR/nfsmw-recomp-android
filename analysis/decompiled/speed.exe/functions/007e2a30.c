/* speed.exe 007e2a30 _TranslateName; analysis pseudocode, not buildable source.
 * calls 007e6630 __stricmp
 */

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2003 Debug */

bool _TranslateName(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  int local_c;
  
  local_10 = 1;
  local_c = 0;
  while ((local_c <= param_2 && (local_10 != 0))) {
    iVar1 = (local_c + param_2) / 2;
    local_10 = __stricmp((char *)*param_3,*(char **)(param_1 + iVar1 * 8));
    if (local_10 == 0) {
      *param_3 = param_1 + 4 + iVar1 * 8;
    }
    else if (local_10 < 0) {
      param_2 = iVar1 + -1;
    }
    else {
      local_c = iVar1 + 1;
    }
  }
  return local_10 == 0;
}

