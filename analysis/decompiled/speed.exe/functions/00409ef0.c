/* speed.exe 00409ef0 FUN_00409ef0; analysis pseudocode, not buildable source.
 */

undefined4 * __fastcall FUN_00409ef0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x54))();
                    /* WARNING: Could not recover jumptable at 0x00409f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x24))();
    return puVar2;
  }
  return &DAT_008a2fb4;
}

