/* speed.exe 007f6021 FUN_007f6021; analysis pseudocode, not buildable source.
 * calls 007f3df0 FUN_007f3df0
 */

void __fastcall FUN_007f6021(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_007f3df0();
  *(undefined1 *)(param_1 + 0x17) = 0;
  return;
}

