/* speed.exe 004c8e00 FUN_004c8e00; analysis pseudocode, not buildable source.
 * calls 004c5c00 FUN_004c5c00
 * calls 004be8e0 FUN_004be8e0
 * calls 004be4a0 FUN_004be4a0
 * calls 004beb40 FUN_004beb40
 * calls 004bea70 FUN_004bea70
 * calls 004d9680 FUN_004d9680
 */

void __thiscall FUN_004c8e00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_00911f68 != 0) {
    FUN_004d9680(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10));
  }
  FUN_004c5c00(param_2);
  FUN_004be4a0(param_2);
  FUN_004bea70(param_2);
  FUN_004beb40(param_2);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x228);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    FUN_004be8e0(param_2);
  }
  return;
}

