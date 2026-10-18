/* speed.exe 006700e0 FUN_006700e0; analysis pseudocode, not buildable source.
 * calls 00623ad0 FUN_00623ad0
 * calls 00627400 FUN_00627400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006700e0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a78f;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x48) != 0) && (*(float *)(param_1 + 0xb4) <= _DAT_00890968)) {
    if (*(int *)(param_1 + 0x94) == 0) {
      if (_DAT_00890968 < *(float *)(param_1 + 0xb8)) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0xb4) = 0x40900000;
        iVar1 = FUN_00627400(0x10);
        local_4 = 0;
        if (iVar1 != 0) {
          FUN_00623ad0(*(undefined4 *)(param_1 + -0x78),*(undefined4 *)(param_1 + 0xb8));
          ExceptionList = local_c;
          return;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  ExceptionList = local_c;
  return;
}

