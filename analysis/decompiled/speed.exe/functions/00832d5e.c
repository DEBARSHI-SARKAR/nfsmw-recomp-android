/* speed.exe 00832d5e FUN_00832d5e; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00832d5e(void)

{
  undefined4 uVar1;
  
  if (DAT_009c2bf8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00832d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_009c2bf8)();
    return uVar1;
  }
  return 0;
}

