/* speed.exe 0061f9a0 FUN_0061f9a0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0061f590 FUN_0061f590
 */

void FUN_0061f9a0(void)

{
  int iVar1;
  
  iVar1 = DAT_0091e0d0;
  if (DAT_0091e0d0 != 0) {
    FUN_0061f590();
    thunk_FUN_007c7250(iVar1);
  }
  DAT_0091e0d0 = 0;
  return;
}

