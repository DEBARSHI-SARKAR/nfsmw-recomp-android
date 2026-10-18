/* speed.exe 007a96c0 FUN_007a96c0; analysis pseudocode, not buildable source.
 * calls 00516e10 FUN_00516e10
 * calls 006bd940 FUN_006bd940
 * calls 004af820 FUN_004af820
 * calls 006bdc60 FUN_006bdc60
 * calls 00737b60 FUN_00737b60
 * calls 00404db0 FUN_00404db0
 * calls 006bdd20 FUN_006bdd20
 * calls 007c4b80 FUN_007c4b80
 * calls 006bdbb0 FUN_006bdbb0
 * calls 00516e20 FUN_00516e20
 * calls 00444fe0 FUN_00444fe0
 * calls 00737ad0 FUN_00737ad0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007a96c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  float local_31c;
  float *local_318;
  float local_314;
  undefined4 local_310;
  undefined4 local_30c;
  float local_308;
  int local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  float local_260 [64];
  float local_160 [64];
  float local_60 [4];
  float local_50 [19];
  
  if ((((int *)(param_2 + 8) == (int *)0x0) || (*(int *)(param_2 + 8) == -1)) ||
     (*(int *)(param_1 + 0x6c) != 0)) {
    *(undefined4 *)(param_2 + 0x574) = 0;
  }
  else {
    if (DAT_009b09dc != 0) {
      DAT_009b09dc = 0;
    }
    local_2f4 = param_1;
    FUN_00404db0(local_50,0x10,4,&LAB_00402310);
    local_318 = local_60;
    local_314 = 0.0;
    local_31c = 0.0;
    uVar8 = 0;
    pfVar7 = local_50 + 2;
    do {
      cVar4 = FUN_00737ad0(uVar8,pfVar7 + -2);
      if (cVar4 == '\0') {
        pfVar7[-2] = 0.0;
        pfVar7[-1] = 0.0;
        *pfVar7 = 0.0;
        pfVar7[1] = 1.0;
      }
      cVar4 = FUN_00737b60(uVar8,local_318);
      if (cVar4 == '\0') {
        *local_318 = 1.5;
      }
      local_314 = local_314 + *local_318;
      pfVar7[1] = 1.0;
      uVar8 = uVar8 + 1;
      local_318 = local_318 + 1;
      local_31c = local_31c + *pfVar7;
      pfVar7 = pfVar7 + 4;
    } while (uVar8 < 4);
    local_314 = local_314 * _DAT_008910f0;
    *(undefined4 *)(param_2 + 0x580) = 0;
    *(undefined4 *)(param_2 + 0x584) = 0;
    local_310 = DAT_009b9e50;
    local_30c = DAT_009b9e54;
    local_308 = (local_314 - local_31c * _DAT_008910f0) - _DAT_008916cc;
    local_2b0 = 0x3f800000;
    local_2ac = 0;
    local_2a8 = 0;
    local_2a4 = 0;
    local_2a0 = 0;
    local_29c = 0x3f800000;
    local_298 = 0;
    local_294 = 0;
    local_290 = 0;
    local_28c = 0;
    local_288 = 0x3f800000;
    local_284 = 0;
    local_280 = 0;
    local_27c = 0;
    local_278 = 0;
    local_274 = 0x3f800000;
    FUN_00516e10();
    FUN_00516e20();
    iVar5 = FUN_007c4b80();
    FUN_006bdd20(&local_2b0,&local_2b0,iVar5 / 0x168);
    FUN_006bd940(&local_310,&local_2b0,&local_310);
    *(undefined4 *)(param_2 + 800) = local_310;
    *(undefined4 *)(param_2 + 0x324) = local_30c;
    *(float *)(param_2 + 0x328) = local_308;
    local_2f0 = 0x3f800000;
    local_2ec = 0;
    local_2e8 = 0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2dc = 0x3f800000;
    local_2d8 = 0;
    local_2d4 = 0;
    local_2d0 = 0;
    local_2cc = 0;
    local_2c8 = 0x3f800000;
    local_2c4 = 0;
    local_2c0 = 0;
    local_2bc = 0;
    local_2b8 = 0;
    local_2b4 = 0x3f800000;
    FUN_00516e10();
    FUN_00516e20();
    iVar5 = FUN_007c4b80();
    FUN_006bdd20(&local_2f0,&local_2f0,iVar5 / 0x168);
    FUN_00516e10();
    FUN_00516e20();
    iVar5 = FUN_007c4b80();
    FUN_006bdbb0(&local_2f0,&local_2f0,iVar5 / 0x168);
    FUN_00516e10();
    FUN_00516e20();
    iVar5 = FUN_007c4b80();
    FUN_006bdc60(&local_2f0,&local_2f0,iVar5 / 0x168);
    FUN_00444fe0(param_2 + 0x330,&local_2f0);
    iVar5 = FUN_007c4b80();
    pfVar7 = local_50 + 2;
    iVar6 = 0;
    do {
      puVar1 = (undefined4 *)((int)local_160 + iVar6);
      *(undefined4 *)((int)local_260 + iVar6) = 0x3f800000;
      *(undefined4 *)((int)local_260 + iVar6 + 4) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 8) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0xc) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x10) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x14) = 0x3f800000;
      *(undefined4 *)((int)local_260 + iVar6 + 0x18) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x1c) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x20) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x24) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x28) = 0x3f800000;
      *(undefined4 *)((int)local_260 + iVar6 + 0x2c) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x30) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x34) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x38) = 0;
      *(undefined4 *)((int)local_260 + iVar6 + 0x3c) = 0x3f800000;
      *puVar1 = 0x3f800000;
      *(undefined4 *)((int)local_160 + iVar6 + 4) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 8) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0xc) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x10) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x14) = 0x3f800000;
      *(undefined4 *)((int)local_160 + iVar6 + 0x18) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x1c) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x20) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x24) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x28) = 0x3f800000;
      *(undefined4 *)((int)local_160 + iVar6 + 0x2c) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x30) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x34) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x38) = 0;
      *(undefined4 *)((int)local_160 + iVar6 + 0x3c) = 0x3f800000;
      if (iVar6 < 0x41) {
        FUN_006bdd20(puVar1,puVar1,iVar5 / 0x168);
        FUN_006bdd20((int)local_260 + iVar6,(int)local_260 + iVar6,iVar5 / 0x168);
      }
      fVar2 = pfVar7[-1];
      *(float *)((int)local_260 + iVar6 + 0x30) = pfVar7[-2];
      fVar3 = *pfVar7;
      *(float *)((int)local_260 + iVar6 + 0x34) = fVar2;
      fVar2 = pfVar7[1];
      *(float *)((int)local_260 + iVar6 + 0x38) = fVar3;
      fVar3 = pfVar7[-2];
      *(float *)((int)local_260 + iVar6 + 0x3c) = fVar2;
      fVar2 = pfVar7[-1];
      *(float *)((int)local_160 + iVar6 + 0x30) = fVar3;
      fVar3 = *pfVar7;
      *(float *)((int)local_160 + iVar6 + 0x34) = fVar2;
      fVar2 = pfVar7[1];
      *(float *)((int)local_160 + iVar6 + 0x38) = fVar3;
      *(float *)((int)local_160 + iVar6 + 0x3c) = fVar2;
      iVar6 = iVar6 + 0x40;
      pfVar7 = pfVar7 + 4;
    } while (iVar6 < 0x100);
    pfVar7 = local_260;
    iVar5 = param_2 + 0x370;
    local_31c = 5.60519e-45;
    do {
      FUN_00444fe0(iVar5,pfVar7);
      pfVar7 = pfVar7 + 0x10;
      iVar5 = iVar5 + 0x40;
      local_31c = (float)((int)local_31c + -1);
    } while (local_31c != 0.0);
    pfVar7 = local_160;
    param_2 = param_2 + 0x470;
    local_31c = 5.60519e-45;
    do {
      FUN_00444fe0(param_2,pfVar7);
      pfVar7 = pfVar7 + 0x10;
      param_2 = param_2 + 0x40;
      local_31c = (float)((int)local_31c + -1);
    } while (local_31c != 0.0);
    if (((*(int *)(DAT_00911fa8 + 0x58) != 0) &&
        (*(char *)(*(int *)(local_2f4 + 0x2c) + 0x621) != '\0')) &&
       (*(int *)(local_2f4 + 0x2c) != -0x310)) {
      local_270 = 0;
      local_26c = 0;
      local_268 = 0;
      FUN_004af820(&local_310,&local_270,DAT_00919690,*(undefined4 *)(local_2f4 + 0x70));
      return;
    }
  }
  return;
}

