/* speed.exe 00402610 FUN_00402610; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 */

void __thiscall FUN_00402610(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_006269b0(param_2);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}

