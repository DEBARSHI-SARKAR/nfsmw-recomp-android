/* speed.exe 00502130 FUN_00502130; analysis pseudocode, not buildable source.
 * calls 006bd940 FUN_006bd940
 * calls 004fc3c0 FUN_004fc3c0
 * calls 0045f490 FUN_0045f490
 * calls 006be140 FUN_006be140
 * calls 007c4b80 FUN_007c4b80
 * calls 006bd920 FUN_006bd920
 * calls 004fc320 FUN_004fc320
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00502130(int param_1,int param_2,float *param_3,int param_4,int param_5,int param_6)

{
  float *pfVar1;
  ushort uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_440;
  undefined4 local_43c;
  float local_438;
  undefined4 local_434;
  float local_430;
  float local_42c;
  float local_420 [76];
  float local_2f0 [76];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined1 local_90 [64];
  undefined1 local_50 [76];
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((param_6 != 0) && (*(int *)(param_6 + 0x40) != 0)) {
    param_5 = *(int *)(param_6 + 0x40);
  }
  FUN_006be140(local_90,param_5);
  pfVar3 = (float *)(param_2 + 0x24);
  iVar5 = 0;
  do {
    switch(pfVar3[-1]) {
    case 0.0:
      fVar8 = _DAT_00892fa8 - pfVar3[1];
      fVar7 = *pfVar3 + _DAT_00895b14;
      goto LAB_0050236f;
    case 1.4013e-45:
      pfVar1 = (float *)((int)local_2f0 + iVar5);
      FUN_004fc320(pfVar1,*pfVar3 + _DAT_00895b14,_DAT_00892fa8 - pfVar3[1],0x3f800000);
      local_438 = *pfVar1;
      *pfVar1 = -*(float *)((int)local_2f0 + iVar5 + 4);
      local_440 = *pfVar1;
      *(float *)((int)local_2f0 + iVar5 + 4) = -*(float *)((int)local_2f0 + iVar5 + 8);
      local_43c = *(undefined4 *)((int)local_2f0 + iVar5 + 4);
      *(float *)((int)local_2f0 + iVar5 + 8) = local_438;
      local_434 = 0;
      FUN_006bd920(&local_440,local_90,&local_440);
      *pfVar1 = local_440;
      *(undefined4 *)((int)local_2f0 + iVar5 + 4) = local_43c;
      *(float *)((int)local_2f0 + iVar5 + 8) = local_438;
      break;
    case 2.8026e-45:
    case 4.2039e-45:
      if (pfVar3[-1] == 2.8026e-45) {
        fVar8 = *(float *)(DAT_009b392c + 0x188);
        fVar7 = *(float *)(DAT_009b392c + 0x184);
        fVar6 = *(float *)(DAT_009b392c + 0x180);
      }
      else {
        fVar8 = -*(float *)(DAT_009b392c + 0x188);
        fVar7 = -*(float *)(DAT_009b392c + 0x184);
        fVar6 = -*(float *)(DAT_009b392c + 0x180);
      }
      FUN_004fc3c0(&local_430,fVar6,fVar7,fVar8);
      FUN_007c4b80();
      uVar2 = FUN_007c4b80();
      local_430 = (float)(extraout_ST0 + (float10)*pfVar3);
      local_42c = (float)uVar2 * _DAT_00894958 + _DAT_00892fa8 + pfVar3[1];
      fVar8 = _DAT_00892fa8 - local_42c;
      fVar7 = local_430 + _DAT_00895b14;
LAB_0050236f:
      FUN_004fc320((int)local_2f0 + iVar5,fVar7,fVar8,0x3f800000);
      break;
    case 5.60519e-45:
      *(float *)((int)local_2f0 + iVar5) = *(float *)(param_2 + 0x80) - *param_3;
      *(float *)((int)local_2f0 + iVar5 + 4) = *(float *)(param_2 + 0x84) - param_3[1];
      *(float *)((int)local_2f0 + iVar5 + 8) = *(float *)(param_2 + 0x88) - param_3[2];
    }
    fVar8 = pfVar3[5];
    *(undefined4 *)((int)local_420 + iVar5 + 0xc) = 0;
    iVar4 = iVar5 + 0x10;
    *(float *)((int)local_420 + iVar5) = fVar8 * pfVar3[2] * _DAT_00899dd8;
    *(float *)((int)local_420 + iVar5 + 4) = fVar8 * pfVar3[3] * _DAT_00899dd8;
    *(float *)((int)local_420 + iVar5 + 8) = fVar8 * pfVar3[4] * _DAT_00899dd8;
    pfVar3 = pfVar3 + 7;
    iVar5 = iVar4;
    if (0x2f < iVar4) {
      if (param_4 != 0) {
        FUN_006be140(local_50,param_4);
        pfVar3 = local_2f0;
        iVar5 = 3;
        do {
          FUN_006bd940(pfVar3,local_50,pfVar3);
          pfVar3 = pfVar3 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar5 = 0;
      do {
        FUN_0045f490((int)&local_1c0 + iVar5,(int)local_2f0 + iVar5);
        iVar4 = iVar5 + 0x10;
        *(float *)((int)local_420 + iVar5) = *(float *)((int)local_420 + iVar5) * _DAT_00899dd0;
        *(float *)((int)local_420 + iVar5 + 4) =
             *(float *)((int)local_420 + iVar5 + 4) * _DAT_00899dd0;
        *(float *)((int)local_420 + iVar5 + 8) =
             *(float *)((int)local_420 + iVar5 + 8) * _DAT_00899dd0;
        *(float *)((int)local_420 + iVar5 + 0xc) =
             *(float *)((int)local_420 + iVar5 + 0xc) * _DAT_00899dd0;
        iVar5 = iVar4;
      } while (iVar4 < 0x30);
      *(undefined4 *)(param_1 + 0x50) = local_1c0;
      *(undefined4 *)(param_1 + 0x60) = local_1bc;
      *(undefined4 *)(param_1 + 0x70) = local_1b8;
      *(undefined4 *)(param_1 + 0x54) = local_1b0;
      *(undefined4 *)(param_1 + 100) = local_1ac;
      *(undefined4 *)(param_1 + 0x74) = local_1a8;
      *(undefined4 *)(param_1 + 0x58) = local_1a0;
      *(undefined4 *)(param_1 + 0x68) = local_19c;
      *(undefined4 *)(param_1 + 0x78) = local_198;
      *(float *)(param_1 + 0x10) = local_420[0];
      *(float *)(param_1 + 0x14) = local_420[1];
      *(float *)(param_1 + 0x18) = local_420[2];
      *(float *)(param_1 + 0x20) = local_420[4];
      *(float *)(param_1 + 0x24) = local_420[5];
      *(float *)(param_1 + 0x28) = local_420[6];
      *(float *)(param_1 + 0x30) = local_420[8];
      *(float *)(param_1 + 0x34) = local_420[9];
      *(float *)(param_1 + 0x38) = local_420[10];
      return 1;
    }
  } while( true );
}

