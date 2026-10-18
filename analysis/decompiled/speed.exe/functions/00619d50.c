/* speed.exe 00619d50 FUN_00619d50; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 * calls 006167e0 FUN_006167e0
 */

undefined4 __thiscall FUN_00619d50(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  uVar2 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    param_2 = FUN_006167e0();
    uVar2 = extraout_ECX;
  }
  iVar1 = FUN_005d29d0(param_2 * 4,uVar2);
  *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}

