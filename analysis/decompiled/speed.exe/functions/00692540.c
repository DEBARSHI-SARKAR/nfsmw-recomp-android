/* speed.exe 00692540 FUN_00692540; analysis pseudocode, not buildable source.
 * calls 0066c610 FUN_0066c610
 */

void __thiscall FUN_00692540(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0xcc))();
  FUN_0066c610(param_1 + 0x158,param_1 + 0x144,param_1 + 0x16c,param_2,param_3,uVar1);
  return;
}

