/* speed.exe 00456d40 FUN_00456d40; analysis pseudocode, not buildable source.
 * calls 00455c40 FUN_00455c40
 */

void __thiscall FUN_00456d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00455c40(*puVar1,param_2,param_3);
    return;
  }
  FUN_00455c40(0,param_2,param_3);
  return;
}

