/* speed.exe 006ea700 FUN_006ea700; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 */

void __thiscall FUN_006ea700(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x370) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x370);
    uVar2 = FUN_005cc240(param_2,0);
    (**(code **)(iVar1 + 0x40))(uVar2);
  }
  return;
}

