/* speed.exe 00407000 FUN_00407000; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00407000(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x48) + 0x18))(0);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x1c))(0x3f800000);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x14))(0);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x2c))(0);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x24))(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00407049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x48) + 0x20))(0);
  return;
}

