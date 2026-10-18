/* speed.exe 007b13c0 FUN_007b13c0; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 00514c70 FUN_00514c70
 * calls 00524920 FUN_00524920
 * calls 007afdb0 FUN_007afdb0
 * calls 0056f7b0 FUN_0056f7b0
 * calls 00575b00 FUN_00575b00
 * calls 007afb60 FUN_007afb60
 * calls 007a58d0 FUN_007a58d0
 * calls 0056f120 FUN_0056f120
 * calls 007aed80 FUN_007aed80
 * calls 00524850 FUN_00524850
 * calls 007a5aa0 FUN_007a5aa0
 * calls 00525220 FUN_00525220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007b13c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) && (DAT_009b9e8d == '\0')) {
    FUN_00524920(*(undefined4 *)(param_1 + 4),0xcffb7033,0x16a259,1);
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 4),0x8d1559a4);
    FUN_00514c70(uVar4);
    FUN_00514c70(*(undefined4 *)(param_1 + 0x5c));
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 4),0x24c6bfad);
    FUN_00514c70(uVar4);
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 4),0xea903012);
    FUN_00514c70(uVar4);
    return;
  }
  cVar1 = FUN_00575b00();
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      if (DAT_009ba080 == 0) {
        FUN_005252d0(*(undefined4 *)(param_1 + 4),0xdbb80edd,&DAT_008b7a4c);
      }
      else {
        FUN_005252d0(*(undefined4 *)(param_1 + 4),0xdbb80edd,&DAT_0089c2d0,
                     *(undefined4 *)(DAT_009ba080 + 0x24));
      }
    }
    else {
      FUN_005252d0(*(undefined4 *)(param_1 + 4),0xdbb80edd,&DAT_0089c2d0,
                   *(undefined4 *)(param_2 + 0x24));
    }
    FUN_005252d0(*(undefined4 *)(param_1 + 4),0xc60adcfd,&DAT_0089c2d0,
                 *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_007aed80(2);
    FUN_005252d0(uVar4,0x7a6d2f71,&DAT_0089c2d0,uVar2);
    FUN_005252d0(*(undefined4 *)(param_1 + 4),0xa91eda8a,&DAT_0089c2d0,param_4);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_007afdb0(param_3);
    FUN_00525220(uVar4,0x63ca8308,uVar2);
    FUN_005252d0(*(undefined4 *)(param_1 + 4),0x23d918fe,&DAT_008a04fc);
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar2 = FUN_007a58d0(param_3);
    FUN_005252d0(uVar4,0x83e3cd39,&DAT_0089c2d0,uVar2);
  }
  if (DAT_009b9ec4 != 0) {
    iVar3 = FUN_0056f120(*(undefined1 *)(DAT_009b9ec4 + 0x11));
    if (iVar3 != 0) {
      fVar5 = (float10)FUN_0056f7b0();
      goto LAB_007b152f;
    }
  }
  fVar5 = (float10)_DAT_00890da8;
LAB_007b152f:
  if (fVar5 <= (float10)*(float *)(param_1 + 0x14)) {
    fVar5 = (float10)*(float *)(param_1 + 0x14);
  }
  if ((float10)*(float *)(param_1 + 0x18) <= fVar5) {
    fVar5 = (float10)*(float *)(param_1 + 0x18);
  }
  *(float *)(param_1 + 0x1c) = (float)fVar5;
  fVar5 = (float10)FUN_007afb60(param_2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  if (fVar5 <= (float10)*(float *)(param_1 + 0x14)) {
    fVar5 = (float10)*(float *)(param_1 + 0x14);
  }
  if ((float10)*(float *)(param_1 + 0x18) <= fVar5) {
    fVar5 = (float10)*(float *)(param_1 + 0x18);
  }
  *(float *)(param_1 + 0x20) = (float)fVar5;
  FUN_007a5aa0();
  return;
}

