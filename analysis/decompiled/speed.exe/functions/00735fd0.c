/* speed.exe 00735fd0 FUN_00735fd0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00735fd0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x80);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x111) = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  return;
}

