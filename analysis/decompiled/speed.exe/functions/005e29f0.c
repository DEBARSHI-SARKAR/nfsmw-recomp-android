/* speed.exe 005e29f0 FUN_005e29f0; analysis pseudocode, not buildable source.
 * calls 00444fe0 FUN_00444fe0
 * calls 007477a0 FUN_007477a0
 */

void __thiscall FUN_005e29f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (iVar1 != 0) {
    FUN_00444fe0(iVar1 + 0x60,param_2);
    if (*(int *)(iVar1 + 0xf4) == 0) {
      FUN_007477a0();
    }
    return;
  }
  FUN_00444fe0(param_1 + 0x40,param_2);
  return;
}

