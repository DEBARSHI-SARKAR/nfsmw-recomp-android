/* speed.exe 0061f7b0 FUN_0061f7b0; analysis pseudocode, not buildable source.
 * calls 0061f170 FUN_0061f170
 * calls 00652b00 thunk_FUN_007c7250
 */

void FUN_0061f7b0(void)

{
  int iVar1;
  
  iVar1 = DAT_0091e0d8;
  if (DAT_0091e0d8 != 0) {
    FUN_0061f170();
    thunk_FUN_007c7250(iVar1);
  }
  DAT_0091e0d8 = 0;
  return;
}

