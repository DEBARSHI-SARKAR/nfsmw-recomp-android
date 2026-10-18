/* speed.exe 0045b4c0 FUN_0045b4c0; analysis pseudocode, not buildable source.
 * calls 0045b450 FUN_0045b450
 * calls 005d29d0 FUN_005d29d0
 */

undefined4 __thiscall FUN_0045b4c0(int param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (0x3fffffff < param_2) {
    param_2 = FUN_0045b450();
  }
  iVar1 = FUN_005d29d0(param_2 * 4,&PTR_LAB_004c5452_1_00890f10);
  *(uint *)(param_1 + 0xc) = param_2 * 4 + iVar1;
  *(int *)(param_1 + 4) = iVar1;
  *(int *)(param_1 + 8) = iVar1;
  return 1;
}

