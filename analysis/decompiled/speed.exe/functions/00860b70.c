/* speed.exe 00860b70 __putwc_lk; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007cb270 FUN_007cb270
 * calls 007d47d0 __flsbuf
 * calls 007df050 _wctomb
 * calls 00860d20 __flswbuf
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __putwc_lk
   
   Library: Visual Studio 2003 Debug */

uint __putwc_lk(wchar_t param_1,FILE *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint local_20;
  undefined *local_1c;
  char local_18 [8];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = DAT_00906980;
  if ((param_2->_flag & 0x40U) == 0) {
    if (param_2->_file == -1) {
      local_1c = &DAT_00906808;
    }
    else {
      local_1c = (undefined *)
                 ((param_2->_file & 0x1fU) * 0x24 + (&DAT_009c5340)[param_2->_file >> 5]);
    }
    if (((int)(char)local_1c[4] & 0x80U) != 0) {
      local_c = _wctomb(local_18,param_1);
      if (local_c == -1) {
        puVar1 = (undefined4 *)FUN_007cb270();
        *puVar1 = 0x2a;
        return 0xffff;
      }
      local_8 = 0;
      while( true ) {
        if (local_c <= local_8) {
          return (uint)(ushort)param_1;
        }
        param_2->_cnt = param_2->_cnt + -1;
        if (param_2->_cnt < 0) {
          local_20 = __flsbuf((int)local_18[local_8],param_2);
        }
        else {
          *param_2->_ptr = local_18[local_8];
          local_20 = (uint)(byte)*param_2->_ptr;
          param_2->_ptr = param_2->_ptr + 1;
        }
        if (local_20 == 0xffffffff) break;
        local_8 = local_8 + 1;
      }
      return 0xffff;
    }
  }
  param_2->_cnt = param_2->_cnt + -2;
  if (param_2->_cnt < 0) {
    uVar2 = __flswbuf((uint)(ushort)param_1,param_2);
  }
  else {
    *(wchar_t *)param_2->_ptr = param_1;
    param_2->_ptr = param_2->_ptr + 2;
    uVar2 = (uint)(ushort)param_1;
  }
  return uVar2;
}

