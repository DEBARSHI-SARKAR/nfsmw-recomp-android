/* speed.exe 006e9e40 FUN_006e9e40; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_006e9e40(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 4))(param_1,param_2);
    return uVar1;
  }
  return 0;
}

