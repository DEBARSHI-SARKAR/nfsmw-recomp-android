/* speed.exe 00747050 FUN_00747050; analysis pseudocode, not buildable source.
 * calls 00404db0 FUN_00404db0
 * calls 006269b0 FUN_006269b0
 * calls 0045e300 FUN_0045e300
 * calls 006bd900 FUN_006bd900
 * calls 00444fe0 FUN_00444fe0
 * calls 00454810 FUN_00454810
 * calls 006bdbb0 FUN_006bdbb0
 * calls 006bdc60 FUN_006bdc60
 * calls 007c4b80 FUN_007c4b80
 * calls 00744c00 FUN_00744c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00747050(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int local_3ac;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined1 local_350 [64];
  undefined1 local_310 [64];
  undefined1 local_2d0 [64];
  undefined1 local_290 [64];
  undefined1 local_250 [64];
  undefined1 local_210 [256];
  undefined1 local_110 [268];
  
  fVar2 = _DAT_008f2260 * _DAT_008b2f7c;
  if (((DAT_009885c8 != 0) || (cVar4 = FUN_00744c00(), cVar4 != '\0')) ||
     ((*(uint *)(param_1 + 0x3c8) <= *(uint *)(param_1 + 0x3cc) &&
      ((*(uint *)(param_1 + 0x3cc) != 0 && (*(float *)(param_1 + 0x3d0) <= fVar2)))))) {
    FUN_00404db0(local_210,0x40,4,&LAB_00402350);
    FUN_00404db0(local_110,0x40,4,&LAB_00402350);
    local_3ac = param_1 + 0x230;
    iVar8 = param_1 + 0x330;
    iVar7 = 0;
    do {
      FUN_006bd900(local_210 + iVar7,local_3ac + -0x100,iVar8);
      FUN_006bd900(local_110 + iVar7,local_3ac,iVar8);
      iVar7 = iVar7 + 0x40;
      local_3ac = local_3ac + 0x40;
    } while (iVar7 < 0x100);
    iVar7 = FUN_00454810(0xe95257c2,0);
    if (iVar7 == 0) {
      FUN_006269b0(4);
    }
    local_390 = 0x3f800000;
    local_38c = 0;
    local_388 = 0;
    local_384 = 0;
    local_380 = 0;
    local_37c = 0x3f800000;
    local_378 = 0;
    local_374 = 0;
    local_370 = 0;
    fVar2 = *(float *)(*(int *)(param_1 + 0x1c) + 0xfc) * _DAT_008a9388 +
            *(float *)(param_1 + 0x398) + *(float *)(param_1 + 0x38c) + *(float *)(param_1 + 0x380);
    local_36c = 0;
    local_368 = 0x3f800000;
    local_364 = 0;
    local_360 = 0;
    local_35c = 0;
    local_358 = 0;
    local_354 = 0x3f800000;
    uVar5 = FUN_007c4b80();
    FUN_006bdbb0(local_290,&local_390,uVar5);
    uVar5 = FUN_007c4b80();
    FUN_006bdc60(local_250,&local_390,uVar5);
    FUN_006bd900(local_2d0,local_290,local_250);
    FUN_00444fe0(local_310,iVar8);
    FUN_006bd900(iVar8,local_2d0,local_310);
    *(float *)(param_1 + 0x360) = fVar2 * *(float *)(param_1 + 0x350) + *(float *)(param_1 + 0x360);
    *(float *)(param_1 + 0x364) = fVar2 * *(float *)(param_1 + 0x354) + *(float *)(param_1 + 0x364);
    *(float *)(param_1 + 0x368) = fVar2 * *(float *)(param_1 + 0x358) + *(float *)(param_1 + 0x368);
    FUN_0045e300(local_350,iVar8);
    iVar8 = param_1 + 0x230;
    iVar7 = 0;
    do {
      FUN_006bd900(iVar8 + -0x100,local_210 + iVar7,local_350);
      FUN_006bd900(iVar8,local_110 + iVar7,local_350);
      iVar7 = iVar7 + 0x40;
      iVar8 = iVar8 + 0x40;
    } while (iVar7 < 0x100);
    pfVar6 = (float *)FUN_00454810(0x24cb15ea,0);
    if (pfVar6 == (float *)0x0) {
      pfVar6 = (float *)FUN_006269b0(4);
    }
    fVar2 = *pfVar6 * _DAT_008a9388;
    if (_DAT_00890968 < fVar2) {
      fVar3 = *(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0x168);
      fVar1 = *(float *)(param_1 + 0x1a8) + *(float *)(param_1 + 0xd4);
      if (fVar3 <= fVar1) {
        fVar3 = fVar1;
      }
      fVar1 = *(float *)(param_1 + 0x1e8) + *(float *)(param_1 + 0xd8);
      if (fVar3 <= fVar1) {
        fVar3 = fVar1;
      }
      fVar1 = *(float *)(param_1 + 0x228) + *(float *)(param_1 + 0xdc);
      if (fVar3 <= fVar1) {
        fVar3 = fVar1;
      }
      if (fVar2 < fVar3) {
        fVar3 = fVar3 - fVar2;
        fVar2 = fVar3 * _DAT_00890968;
        *(float *)(param_1 + 0x360) =
             *(float *)(param_1 + 0x350) * fVar3 + *(float *)(param_1 + 0x360);
        *(float *)(param_1 + 0x364) =
             *(float *)(param_1 + 0x354) * fVar3 + *(float *)(param_1 + 0x364);
        *(float *)(param_1 + 0x368) =
             *(float *)(param_1 + 0x358) * fVar3 + *(float *)(param_1 + 0x368);
        *(float *)(param_1 + 0x36c) = fVar2 + *(float *)(param_1 + 0x36c);
        *(float *)(param_1 + 0x168) = *(float *)(param_1 + 0x168) - fVar3;
        *(float *)(param_1 + 0x268) = *(float *)(param_1 + 0x268) - fVar3;
        *(float *)(param_1 + 0x1a8) = *(float *)(param_1 + 0x1a8) - fVar3;
        *(float *)(param_1 + 0x2a8) = *(float *)(param_1 + 0x2a8) - fVar3;
        *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x1e8) - fVar3;
        *(float *)(param_1 + 0x2e8) = *(float *)(param_1 + 0x2e8) - fVar3;
        *(float *)(param_1 + 0x228) = *(float *)(param_1 + 0x228) - fVar3;
        *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x328) - fVar3;
      }
    }
  }
  return;
}

