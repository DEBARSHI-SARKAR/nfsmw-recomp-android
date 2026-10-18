/* speed.exe 00834580 FUN_00834580; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00834580(void)

{
  undefined4 uVar1;
  
  if (DAT_009c2c08 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0083458c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_009c2c08)();
    return uVar1;
  }
  return 0;
}

