/* speed.exe 004ad0f0 FUN_004ad0f0; analysis pseudocode, not buildable source.
 * calls 0083196b FUN_0083196b
 * calls 0083198b FUN_0083198b
 */

uint FUN_004ad0f0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = FUN_0083196b(&PTR_s_Sputter_Message_008f0240);
  uVar2 = FUN_0083198b(&PTR_DAT_008f0248);
  uVar3 = FUN_0083198b(&PTR_s_CAR_SWTN_008f0250);
  uVar4 = FUN_0083198b(&PTR_s_CAR_WHINE_008f0258);
  uVar5 = FUN_0083198b(&PTR_s_CAR_TRANNY_008f0260);
  uVar6 = FUN_0083198b(&PTR_s_CAR_Sputter_008f0268);
  uVar7 = FUN_0083198b(&PTR_s_CAR_SputOutput_008f0270);
  return uVar7 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
}

