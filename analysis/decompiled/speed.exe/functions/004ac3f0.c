/* speed.exe 004ac3f0 FUN_004ac3f0; analysis pseudocode, not buildable source.
 * calls 0083198b FUN_0083198b
 */

uint FUN_004ac3f0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0083198b(&PTR_s_PlayCommonSample_008f02b8);
  uVar2 = FUN_0083198b(&PTR_s_PlayFrontEndSample_008f02c0);
  uVar3 = FUN_0083198b(&PTR_s_PlayFrontEndSample_RS_008f02c8);
  uVar4 = FUN_0083198b(&PTR_s_FEDriveOn_008f02d0);
  return uVar4 | uVar1 | uVar2 | uVar3;
}

