/* speed.exe 007f417f FUN_007f417f; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007f417f(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = param_2;
  return;
}

