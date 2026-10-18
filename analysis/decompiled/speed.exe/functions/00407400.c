/* speed.exe 00407400 FUN_00407400; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00407400(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))(0x3f800000);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x24))(0);
                    /* WARNING: Could not recover jumptable at 0x00407446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x20))(0);
  return;
}

