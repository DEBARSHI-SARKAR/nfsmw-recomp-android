/* speed.exe 004df7e0 FUN_004df7e0; analysis pseudocode, not buildable source.
 * calls 004b00c0 FUN_004b00c0
 * calls 004b0010 FUN_004b0010
 * calls 007c4b80 FUN_007c4b80
 * calls 004b0000 FUN_004b0000
 * calls 004b0040 FUN_004b0040
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004ba280 FUN_004ba280
 * calls 00652ad0 _malloc
 * calls 004b0120 FUN_004b0120
 */

void __thiscall FUN_004df7e0(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086cce8;
  local_c = ExceptionList;
  if (*(int *)(DAT_00911fa8 + 0x70) == 10) {
    ExceptionList = &local_c;
    if ((*(int *)(DAT_00911fa8 + 0x74) != 10) &&
       (ExceptionList = &local_c, *(int *)(param_1 + 0x154) == 0)) {
      ExceptionList = &local_c;
      pvVar2 = _malloc(0x7c);
      local_4 = 0;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004ba280();
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x154) = uVar3;
      FUN_004b0040(0x477fff00,0x441d8000,1000,5);
      FUN_004b00c0(0x44e10000,1000,5);
    }
  }
  else {
    ExceptionList = &local_c;
    if (*(int *)(DAT_00911fa8 + 0x74) == 10) {
      if (*(int *)(param_1 + 0x154) == 0) {
        local_14 = 0x708;
        ExceptionList = &local_c;
        pvVar2 = _malloc(0x7c);
        local_4 = 1;
        if (pvVar2 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004ba280();
        }
        local_4 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x154) = uVar3;
      }
      else {
        ExceptionList = &local_c;
        local_14 = FUN_007c4b80();
      }
      if (*(int *)(param_1 + 0x154) != 0) {
        FUN_004b0010();
        FUN_004b0040((float)local_14,0x477fff00,1000,5);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x154);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x78) != '\0')) && (*(int *)(DAT_00911fa8 + 0x70) != 10))
  {
    FUN_004b0000();
    thunk_FUN_007c7250(iVar1);
    *(undefined4 *)(param_1 + 0x154) = 0;
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_004b0120(param_2);
  }
  if (*(int *)(param_1 + 0x154) == 0) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = FUN_007c4b80();
  }
  *(undefined4 *)(param_1 + 0x158) = uVar3;
  ExceptionList = local_c;
  return;
}

