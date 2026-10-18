/* speed.exe 00454280 FUN_00454280; analysis pseudocode, not buildable source.
 * calls 004532c0 FUN_004532c0
 */

void __thiscall FUN_00454280(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004532c0(param_1,0xffffffff);
  if (iVar1 == 0) {
    FUN_004532c0(*(int *)(*(int *)(param_1 + 0x14) + 8) + 0xc,0xffffffff);
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

