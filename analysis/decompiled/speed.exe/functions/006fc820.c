/* speed.exe 006fc820 FUN_006fc820; analysis pseudocode, not buildable source.
 * calls 006fba20 FUN_006fba20
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006fc820(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  undefined4 *local_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087f678;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006fba20(param_1 + 0x3c);
  local_4 = 0;
  for (puVar2 = local_18; puVar2 != local_14; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 0x60))();
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x48) - iVar1 >> 2) * 4,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_4 = 0xffffffff;
  if (local_18 != (undefined4 *)0x0) {
    FUN_005d0370(local_18,(iStack_10 - (int)local_18 >> 2) << 2,0);
  }
  ExceptionList = pvStack_c;
  return;
}

