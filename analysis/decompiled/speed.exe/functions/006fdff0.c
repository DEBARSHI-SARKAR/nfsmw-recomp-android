/* speed.exe 006fdff0 FUN_006fdff0; analysis pseudocode, not buildable source.
 * calls 0083196b FUN_0083196b
 */

uint FUN_006fdff0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_0083196b(&PTR_s_NIS_Select_Start_008f0360);
  uVar2 = FUN_0083196b(&PTR_s_SoundFX_Select_008f0368);
  uVar3 = FUN_0083196b(&PTR_s_NIS_Select_Blacklist_008f0370);
  uVar4 = FUN_0083196b(&PTR_s_NIS_Select_End_008f0378);
  return uVar4 | uVar1 | uVar2 | uVar3;
}

