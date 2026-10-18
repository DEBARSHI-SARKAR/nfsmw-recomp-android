/* speed.exe 00524570 FUN_00524570; analysis pseudocode, not buildable source.
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00837090 FUN_00837090
 * calls 00572360 FUN_00572360
 * calls 0078c730 FUN_0078c730
 */

void __fastcall FUN_00524570(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086e848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0089cbe4;
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0x14d) = 1;
  if (param_1[0xb] != 0) {
    FUN_0056c6e0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  iVar1 = FUN_0078c730();
  if (*(int *)(iVar1 + 0xfc) == 1) {
    iVar1 = FUN_0078c730();
    if (*(int *)(iVar1 + 0xf8) != 0) {
      iVar1 = FUN_0078c730();
      FUN_00837090(*(undefined4 *)(iVar1 + 0xf8));
    }
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

