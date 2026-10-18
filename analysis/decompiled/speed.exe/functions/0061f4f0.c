/* speed.exe 0061f4f0 FUN_0061f4f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0061e5e0 FUN_0061e5e0
 */

void FUN_0061f4f0(void)

{
  int iVar1;
  
  iVar1 = DAT_0091e0c8;
  if (DAT_0091e0c8 != 0) {
    FUN_0061e5e0();
    thunk_FUN_007c7250(iVar1);
  }
  DAT_0091e0c8 = 0;
  return;
}

