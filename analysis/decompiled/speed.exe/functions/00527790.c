/* speed.exe 00527790 FUN_00527790; analysis pseudocode, not buildable source.
 * calls 00515d70 FUN_00515d70
 * calls 00519670 FUN_00519670
 * calls 004611c0 FUN_004611c0
 */

void __thiscall FUN_00527790(int param_1,undefined4 param_2)

{
  undefined1 local_800 [2048];
  
  FUN_00515d70(*(undefined4 *)(param_1 + 0x30),param_2);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_00515d70(*(int *)(param_1 + 0x34),param_2);
  }
  FUN_004611c0(local_800,param_2);
  FUN_00519670(local_800);
  return;
}

