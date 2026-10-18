/* speed.exe 004ad510 FUN_004ad510; analysis pseudocode, not buildable source.
 * calls 0083198b FUN_0083198b
 */

uint FUN_004ad510(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = FUN_0083198b(&PTR_s_FX_ROADNOISE_008f0278);
  uVar2 = FUN_0083198b(&PTR_s_FX_ROADNOISE_TRANS_008f0280);
  uVar3 = FUN_0083198b(&PTR_s_ENV_STATIC_008f0288);
  uVar4 = FUN_0083198b(&PTR_s_FX_MAIN_MEM_008f0290);
  uVar5 = FUN_0083198b(&PTR_s_FX_WIND_008f0298);
  uVar6 = FUN_0083198b(&PTR_s_FX_WIND_Weather_008f02a0);
  uVar7 = FUN_0083198b(&PTR_s_FX_TRAFFIC_008f02a8);
  uVar8 = FUN_0083198b(&PTR_s_FX_TRUCK_FX_008f02b0);
  return uVar8 | uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
}

