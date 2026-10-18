/* speed.exe 007451d0 FUN_007451d0; analysis pseudocode, not buildable source.
 * calls 0050c7b0 FUN_0050c7b0
 * calls 0045a430 FUN_0045a430
 * calls 004ff180 FUN_004ff180
 * calls 00503c30 FUN_00503c30
 * calls 00744890 FUN_00744890
 * calls 004ff160 FUN_004ff160
 */

void __fastcall FUN_007451d0(undefined1 *param_1)

{
  uint *puVar1;
  int iVar2;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880bd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 8) + 0x18);
    ExceptionList = &local_c;
    *puVar1 = *puVar1 | 0x80000;
    FUN_004ff180();
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((iVar2 != 0) && (iVar2 != -0x113dd8e6)) {
    FUN_00744890(iVar2,0,0);
    local_4 = 0;
    if (local_1c != 0) {
      iVar2 = FUN_0050c7b0(local_1c,0x40000000);
      *(int *)(param_1 + 8) = iVar2;
      if (iVar2 != 0) {
        FUN_00503c30();
        FUN_004ff160(param_1,&LAB_00738c60);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_c;
  return;
}

