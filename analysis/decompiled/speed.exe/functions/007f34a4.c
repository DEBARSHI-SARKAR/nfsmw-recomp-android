/* speed.exe 007f34a4 FUN_007f34a4; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f34a4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x1c] = 0;
  param_1[0x1b] = param_2;
  puVar2 = param_1;
  for (iVar1 = 0x1a; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
  }
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return;
}

