/* speed.exe 005e3ca0 FUN_005e3ca0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_005e3ca0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    piVar1 = (int *)0x0;
    if ((~*(byte *)(param_1 + 0x4d) & 1) != 0) {
      piVar1 = (int *)FUN_005d59f0(&LAB_00402830);
    }
    (**(code **)(*(int *)(param_1 + 0x28) + 8))(*(undefined4 *)(param_1 + 0x6c));
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005e3cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 8))();
      return;
    }
  }
  return;
}

