/* speed.exe 007cb7b0 __fwrite_lk; analysis pseudocode, not buildable source.
 * calls 007dbbc0 __write
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007d47d0 __flsbuf
 * calls 007d7260 __flush
 */

/* Library Function - Single Match
    __fwrite_lk
   
   Library: Visual Studio 2003 Debug */

uint __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_2c;
  uint local_28;
  size_t local_24;
  char *local_1c;
  uint local_10;
  uint local_8;
  
  local_1c = param_1;
  uVar3 = param_2 * param_3;
  if (uVar3 == 0) {
    param_2 = 0;
  }
  else {
    local_8 = uVar3;
    if ((param_4->_flag & 0x10cU) == 0) {
      local_10 = 0x1000;
    }
    else {
      local_10 = param_4->_bufsiz;
    }
    do {
      while( true ) {
        while( true ) {
          if (local_8 == 0) {
            return param_3;
          }
          if (((param_4->_flag & 0x108U) == 0) || (param_4->_cnt == 0)) break;
          if (local_8 < (uint)param_4->_cnt) {
            local_24 = local_8;
          }
          else {
            local_24 = param_4->_cnt;
          }
          FID_conflict__memcpy(param_4->_ptr,local_1c,local_24);
          local_8 = local_8 - local_24;
          param_4->_cnt = param_4->_cnt - local_24;
          param_4->_ptr = param_4->_ptr + local_24;
          local_1c = local_1c + local_24;
        }
        if (local_10 <= local_8) break;
        iVar1 = __flsbuf((int)*local_1c,param_4);
        if (iVar1 == -1) {
          return (uVar3 - local_8) / param_2;
        }
        local_1c = local_1c + 1;
        local_8 = local_8 - 1;
        if (param_4->_bufsiz < 1) {
          local_2c = 1;
        }
        else {
          local_2c = param_4->_bufsiz;
        }
        local_10 = local_2c;
      }
      if (((param_4->_flag & 0x108U) != 0) && (iVar1 = __flush(param_4), iVar1 != 0)) {
        return (uVar3 - local_8) / param_2;
      }
      if (local_10 == 0) {
        local_28 = local_8;
      }
      else {
        local_28 = local_8 - local_8 % local_10;
      }
      uVar2 = __write(param_4->_file,local_1c,local_28);
      if (uVar2 == 0xffffffff) {
        param_4->_flag = param_4->_flag | 0x20;
        return (uVar3 - local_8) / param_2;
      }
      local_8 = local_8 - uVar2;
      local_1c = local_1c + uVar2;
    } while (local_28 <= uVar2);
    param_4->_flag = param_4->_flag | 0x20;
    param_2 = (uVar3 - local_8) / param_2;
  }
  return param_2;
}

