/* speed.exe 0085d930 _strtok; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007cd100 __getptd
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    _strtok
   
   Library: Visual Studio 2003 Debug */

char * __cdecl _strtok(char *_Str,char *_Delim)

{
  byte bVar1;
  _ptiddata p_Var2;
  byte *pbVar3;
  byte *local_38;
  byte abStack_34 [32];
  undefined4 local_14;
  byte *local_10;
  int local_8;
  
  local_14 = DAT_00906980;
  local_10 = (byte *)_Delim;
  p_Var2 = __getptd();
  for (local_8 = 0; local_8 < 0x20; local_8 = local_8 + 1) {
    abStack_34[local_8] = 0;
  }
  do {
    abStack_34[(int)(uint)*local_10 >> 3] =
         abStack_34[(int)(uint)*local_10 >> 3] | (byte)(1 << (*local_10 & 7));
    bVar1 = *local_10;
    local_10 = local_10 + 1;
  } while (bVar1 != 0);
  if (_Str == (char *)0x0) {
    local_38 = (byte *)p_Var2->_token;
  }
  else {
    local_38 = (byte *)_Str;
  }
  for (; (pbVar3 = local_38,
         ((uint)abStack_34[(int)(uint)*local_38 >> 3] & 1 << (*local_38 & 7)) != 0 &&
         (*local_38 != 0)); local_38 = local_38 + 1) {
  }
  do {
    if (*local_38 == 0) {
LAB_0085da4c:
      p_Var2->_token = (char *)local_38;
      if (pbVar3 == local_38) {
        pbVar3 = (byte *)0x0;
      }
      return (char *)pbVar3;
    }
    if (((uint)abStack_34[(int)(uint)*local_38 >> 3] & 1 << (*local_38 & 7)) != 0) {
      *local_38 = 0;
      local_38 = local_38 + 1;
      goto LAB_0085da4c;
    }
    local_38 = local_38 + 1;
  } while( true );
}

