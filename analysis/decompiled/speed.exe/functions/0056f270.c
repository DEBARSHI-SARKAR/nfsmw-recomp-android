/* speed.exe 0056f270 FUN_0056f270; analysis pseudocode, not buildable source.
 * calls 00747bb0 FUN_00747bb0
 */

void __thiscall FUN_0056f270(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 != 0) {
    FUN_00747bb0(param_3);
    uVar1 = FUN_00747bb0(param_3);
    *(undefined2 *)(param_1 + param_2 * 2) = uVar1;
    return;
  }
  *(undefined2 *)(param_1 + param_2 * 2) = 0xffff;
  return;
}

