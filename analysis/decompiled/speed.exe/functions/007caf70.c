/* speed.exe 007caf70 __fread_lk; analysis pseudocode, not buildable source.
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007db5b0 __read
 * calls 007db3e0 __filbuf
 */

/* Library Function - Single Match
    __fread_lk
   
   Library: Visual Studio 2003 Debug */

uint __fread_lk(undefined1 *param_1,uint param_2,uint param_3,FILE *param_4)

{
  int iVar1;
  uint uVar2;
  uint local_28;
  size_t local_24;
  undefined1 local_20;
  undefined1 *local_1c;
  uint local_c;
  uint local_8;
  
  local_1c = param_1;
  uVar2 = param_2 * param_3;
  if (uVar2 == 0) {
    param_3 = 0;
  }
  else {
    local_8 = uVar2;
    if ((param_4->_flag & 0x10cU) == 0) {
      local_c = 0x1000;
    }
    else {
      local_c = param_4->_bufsiz;
    }
    while (local_8 != 0) {
      if (((param_4->_flag & 0x10cU) == 0) || (param_4->_cnt == 0)) {
        if (local_8 < local_c) {
          iVar1 = __filbuf(param_4);
          if (iVar1 == -1) {
            return (uVar2 - local_8) / param_2;
          }
          local_20 = (undefined1)iVar1;
          *local_1c = local_20;
          local_1c = local_1c + 1;
          local_8 = local_8 - 1;
          local_c = param_4->_bufsiz;
        }
        else {
          if (local_c == 0) {
            local_28 = local_8;
          }
          else {
            local_28 = local_8 - local_8 % local_c;
          }
          iVar1 = __read(param_4->_file,local_1c,local_28);
          if (iVar1 == 0) {
            param_4->_flag = param_4->_flag | 0x10;
            return (uVar2 - local_8) / param_2;
          }
          if (iVar1 == -1) {
            param_4->_flag = param_4->_flag | 0x20;
            return (uVar2 - local_8) / param_2;
          }
          local_8 = local_8 - iVar1;
          local_1c = local_1c + iVar1;
        }
      }
      else {
        if (local_8 < (uint)param_4->_cnt) {
          local_24 = local_8;
        }
        else {
          local_24 = param_4->_cnt;
        }
        FID_conflict__memcpy(local_1c,param_4->_ptr,local_24);
        local_8 = local_8 - local_24;
        param_4->_cnt = param_4->_cnt - local_24;
        param_4->_ptr = param_4->_ptr + local_24;
        local_1c = local_1c + local_24;
      }
    }
  }
  return param_3;
}

