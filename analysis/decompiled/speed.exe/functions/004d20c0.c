/* speed.exe 004d20c0 FUN_004d20c0; analysis pseudocode, not buildable source.
 * calls 00831a2a FUN_00831a2a
 * calls 0083196b FUN_0083196b
 */

void FUN_004d20c0(void)

{
  int iVar1;
  undefined1 local_8 [8];
  
  iVar1 = FUN_00831a2a(&DAT_00914a54,local_8);
  if (iVar1 < 0) {
    FUN_0083196b(&PTR_s_SoundFX_Select_008f0368);
    FUN_00831a2a(&DAT_00914a54,local_8);
  }
  return;
}

