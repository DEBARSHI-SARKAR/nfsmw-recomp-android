/* speed.exe 004ac950 FUN_004ac950; analysis pseudocode, not buildable source.
 * calls 0083198b FUN_0083198b
 */

uint FUN_004ac950(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = FUN_0083198b(&PTR_s_FX_NITROUS_008f02d8);
  uVar2 = FUN_0083198b(&PTR_s_FX_PURGE_008f02e0);
  uVar3 = FUN_0083198b(&PTR_s_FX_SHIFTING_01_008f02e8);
  uVar4 = FUN_0083198b(&PTR_s_FX_SPARKCHATTER_008f02f0);
  uVar5 = FUN_0083198b(&PTR_s_FX_SKID_008f02f8);
  uVar6 = FUN_0083198b(&PTR_s_FX_Hydraulic_008f0300);
  uVar7 = FUN_0083198b(&PTR_s_FX_Helicopter_008f0308);
  uVar8 = FUN_0083198b(&PTR_s_FX_Hydr_Bounce_008f0310);
  uVar9 = FUN_0083198b(&PTR_s_FX_Weather_008f0318);
  uVar10 = FUN_0083198b(&PTR_s_FX_Camera_008f0320);
  uVar11 = FUN_0083198b(&PTR_s_FX_UVES_008f0328);
  uVar12 = FUN_0083198b(&PTR_s_FX_Radar_008f0330);
  uVar13 = FUN_0083198b(&PTR_s_FX_Scrape_008f0338);
  return uVar13 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 |
                  uVar11 | uVar12;
}

