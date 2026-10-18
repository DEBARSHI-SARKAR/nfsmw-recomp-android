/* speed.exe 00420130 FUN_00420130; analysis pseudocode, not buildable source.
 * calls 00420040 FUN_00420040
 */

void __thiscall FUN_00420130(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + -0xc) + 0x58))();
  if ((iVar1 != 2) && (((byte)*(undefined4 *)(param_2 + 0x1c) & 7) == 1)) {
    FUN_00420040(*(undefined4 *)(param_2 + 0x3c),param_2 + 0x20,param_2);
    FUN_00420040(*(undefined4 *)(param_2 + 0x4c),param_2 + 0x20,param_2);
  }
  return;
}

