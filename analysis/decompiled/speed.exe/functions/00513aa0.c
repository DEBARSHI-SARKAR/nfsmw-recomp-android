/* speed.exe 00513aa0 FUN_00513aa0; analysis pseudocode, not buildable source.
 * calls 00588280 FUN_00588280
 */

void FUN_00513aa0(void)

{
  int *piVar1;
  
  DAT_0091cbec = 0;
  piVar1 = (int *)FUN_00588280(3);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_00588280(3);
  (**(code **)(*piVar1 + 0x20))();
  DAT_0091cbf0 = 0;
  piVar1 = (int *)FUN_00588280(4);
  (**(code **)(*piVar1 + 0xc))();
  piVar1 = (int *)FUN_00588280(4);
                    /* WARNING: Could not recover jumptable at 0x00513af3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x20))();
  return;
}

