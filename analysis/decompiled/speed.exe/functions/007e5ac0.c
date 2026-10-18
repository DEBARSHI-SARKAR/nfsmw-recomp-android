/* speed.exe 007e5ac0 __getenv_lk; analysis pseudocode, not buildable source.
 * calls 007e6f30 __mbsnbicoll
 * calls 007e6fa0 ___wtomb_environ
 * calls 007d0cd0 _strlen
 */

/* Library Function - Single Match
    __getenv_lk
   
   Library: Visual Studio 2003 Debug */

int __getenv_lk(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *local_c;
  
  local_c = DAT_009baa40;
  if (DAT_009c5444 != 0) {
    if ((DAT_009baa40 == (int *)0x0) && (DAT_009baa48 != 0)) {
      iVar1 = ___wtomb_environ();
      if (iVar1 != 0) {
        return 0;
      }
      local_c = DAT_009baa40;
    }
    DAT_009baa40 = local_c;
    if ((local_c != (int *)0x0) && (param_1 != (uchar *)0x0)) {
      _MaxCount = _strlen((char *)param_1);
      for (; *local_c != 0; local_c = local_c + 1) {
        sVar2 = _strlen((char *)*local_c);
        if (((_MaxCount < sVar2) && (*(char *)(*local_c + _MaxCount) == '=')) &&
           (iVar1 = __mbsnbicoll((uchar *)*local_c,param_1,_MaxCount), iVar1 == 0)) {
          return *local_c + 1 + _MaxCount;
        }
      }
    }
  }
  return 0;
}

