/* speed.exe 007d3eb0 ___lc_strtolc; analysis pseudocode, not buildable source.
 * calls 007c64e0 _strncpy
 * calls 007d4aa0 _memset
 * calls 007cae00 _strcspn
 */

/* Library Function - Single Match
    ___lc_strtolc
   
   Library: Visual Studio 2003 Debug */

undefined4 ___lc_strtolc(char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  size_t _Count;
  int local_8;
  
  _memset(param_1,0,0x90);
  if (*param_2 == '\0') {
    uVar2 = 0;
  }
  else if ((*param_2 == '.') && (param_2[1] != '\0')) {
    _strncpy(param_1 + 0x80,param_2 + 1,0xf);
    param_1[0x8f] = '\0';
    uVar2 = 0;
  }
  else {
    local_8 = 0;
    while (_Count = _strcspn(param_2,"_.,"), _Count != 0) {
      cVar1 = param_2[_Count];
      if (((local_8 == 0) && (_Count < 0x40)) && (cVar1 != '.')) {
        _strncpy(param_1,param_2,_Count);
      }
      else if (((local_8 == 1) && (_Count < 0x40)) && (cVar1 != '_')) {
        _strncpy(param_1 + 0x40,param_2,_Count);
      }
      else {
        if (((local_8 != 2) || (0xf < _Count)) || ((cVar1 != '\0' && (cVar1 != ',')))) {
          return 0xffffffff;
        }
        _strncpy(param_1 + 0x80,param_2,_Count);
      }
      if ((cVar1 == ',') || (cVar1 == '\0')) {
        return 0;
      }
      param_2 = param_2 + _Count + 1;
      local_8 = local_8 + 1;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

