/* speed.exe 00513b00 FUN_00513b00; analysis pseudocode, not buildable source.
 * calls 00588280 FUN_00588280
 */

void FUN_00513b00(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00588280(3);
  (**(code **)(*piVar1 + 0x1c))();
  piVar1 = (int *)FUN_00588280(3);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_00588280(4);
  (**(code **)(*piVar1 + 0x1c))();
  piVar1 = (int *)FUN_00588280(4);
                    /* WARNING: Could not recover jumptable at 0x00513b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))();
  return;
}

