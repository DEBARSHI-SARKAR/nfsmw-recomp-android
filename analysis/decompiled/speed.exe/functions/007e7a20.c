/* speed.exe 007e7a20 findenv; analysis pseudocode, not buildable source.
 * calls 007e6f30 __mbsnbicoll
 */

/* Library Function - Single Match
    _findenv
   
   Library: Visual Studio 2003 Debug */

int __cdecl findenv(uchar *param_1,size_t param_2)

{
  int iVar1;
  int *local_8;
  
  local_8 = DAT_009baa40;
  while( true ) {
    if (*local_8 == 0) {
      return -((int)local_8 - (int)DAT_009baa40 >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,(uchar *)*local_8,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*local_8 + param_2) == '=' || (*(char *)(*local_8 + param_2) == '\0')))) break;
    local_8 = local_8 + 1;
  }
  return (int)local_8 - (int)DAT_009baa40 >> 2;
}

