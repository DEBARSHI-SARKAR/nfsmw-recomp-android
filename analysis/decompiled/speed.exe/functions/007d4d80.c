/* speed.exe 007d4d80 FUN_007d4d80; analysis pseudocode, not buildable source.
 * calls 007d5018 FUN_007d5018
 * calls 007d52c0 ___sbh_free_block
 * calls EXTERNAL:00000077 HeapReAlloc
 * calls 007d4f49 FUN_007d4f49
 * calls 007d5200 ___sbh_find_block
 * calls 007d0fd0 __lock
 * calls 007d1050 FUN_007d1050
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007d60a0 ___sbh_resize_block
 * calls EXTERNAL:00000076 HeapAlloc
 * calls 007d4f54 FUN_007d4f54
 * calls 007d4a70 __callnewh
 * calls 007d5880 ___sbh_alloc_block
 * calls 007d4b00 __malloc_base
 */

void FUN_007d4d80(void *param_1,uint param_2)

{
  void **ppvVar1;
  int iVar2;
  LPVOID _Dst;
  uint uVar3;
  size_t local_34;
  uint local_30;
  int local_2c;
  void *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd1b8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  if (param_1 == (void *)0x0) {
    ExceptionList = &pvStack_14;
    __malloc_base(param_2);
    FUN_007d5018();
    return;
  }
  if (param_2 == 0) {
    ExceptionList = &pvStack_14;
    FUN_007d1050(param_1);
    FUN_007d5018();
    return;
  }
  ExceptionList = &pvStack_14;
  ppvVar1 = &pvStack_14;
  if (DAT_009c531c != 3) {
    while( true ) {
      ExceptionList = ppvVar1;
      local_20 = (LPVOID)0x0;
      if (param_2 < 0xffffffe1) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        local_20 = HeapReAlloc(DAT_009c5318,0,param_1,param_2);
      }
      if ((local_20 != (LPVOID)0x0) || (DAT_009bad8c == 0)) break;
      iVar2 = __callnewh(param_2);
      ppvVar1 = ExceptionList;
      if (iVar2 == 0) {
        FUN_007d5018();
        return;
      }
    }
    FUN_007d5018();
    return;
  }
  while( true ) {
    local_20 = (void *)0x0;
    if (param_2 < 0xffffffe1) {
      __lock(4);
      local_8 = 0;
      local_2c = ___sbh_find_block(param_1);
      if (local_2c != 0) {
        if (param_2 <= DAT_009c52f0) {
          iVar2 = ___sbh_resize_block(local_2c,param_1,param_2);
          if (iVar2 == 0) {
            local_20 = (void *)___sbh_alloc_block(param_2);
            if (local_20 != (void *)0x0) {
              local_30 = *(int *)((int)param_1 + -4) - 1;
              if (param_2 <= local_30) {
                local_30 = param_2;
              }
              FID_conflict__memcpy(local_20,param_1,local_30);
              local_2c = ___sbh_find_block(param_1);
              ___sbh_free_block(local_2c,param_1);
            }
          }
          else {
            local_20 = param_1;
          }
        }
        if (local_20 == (void *)0x0) {
          if (param_2 == 0) {
            param_2 = 1;
          }
          local_34 = param_2 + 0xf & 0xfffffff0;
          _Dst = HeapAlloc(DAT_009c5318,0,local_34);
          if (_Dst != (LPVOID)0x0) {
            uVar3 = *(int *)((int)param_1 + -4) - 1;
            if (uVar3 < local_34) {
              local_34 = uVar3;
            }
            FID_conflict__memcpy(_Dst,param_1,local_34);
            ___sbh_free_block(local_2c,param_1);
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_007d4f49();
      FUN_007d4f54();
      return;
    }
    if (DAT_009bad8c == 0) break;
    iVar2 = __callnewh(param_2);
    if (iVar2 == 0) {
      FUN_007d5018();
      return;
    }
  }
  FUN_007d5018();
  return;
}

