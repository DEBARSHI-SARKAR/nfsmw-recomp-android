/* speed.exe 007b0e00 FUN_007b0e00; analysis pseudocode, not buildable source.
 * calls 005252d0 FUN_005252d0
 * calls 007afc90 FUN_007afc90
 * calls 0058ae50 FUN_0058ae50
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00573870 FUN_00573870
 * calls 00524920 FUN_00524920
 * calls 007afdb0 FUN_007afdb0
 * calls 00515b90 FUN_00515b90
 * calls 0056f7b0 FUN_0056f7b0
 * calls 00575b00 FUN_00575b00
 * calls 007a58d0 FUN_007a58d0
 * calls 0056f120 FUN_0056f120
 * calls 005251a0 FUN_005251a0
 * calls 007aed80 FUN_007aed80
 * calls 00524850 FUN_00524850
 * calls 007a5aa0 FUN_007a5aa0
 * calls 00525220 FUN_00525220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007b0e00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  FUN_00573870();
  iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 0x54);
  if (iVar3 == 2) {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xcffb7033);
    FUN_00514cc0(uVar2);
    uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xcffb7033,0xf0574bb2);
    FUN_00515b90(uVar2);
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xcffb7033,0x5079c8f8,1);
  }
  else if (iVar3 == 3) {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xcffb7033);
    FUN_00514cc0(uVar2);
    uVar2 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xcffb7033,0xcffb7033);
    FUN_00515b90(uVar2);
    FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xcffb7033,0x5079c8f8,1);
  }
  else {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xcffb7033);
    FUN_00514c70(uVar2);
  }
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) && (DAT_009b9e8d == '\0')) {
    FUN_00514c70(*(undefined4 *)(param_1 + 0x1a4));
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x8d1559a4);
    FUN_00514c70(uVar2);
    return;
  }
  if (DAT_009b9ec4 != 0) {
    iVar3 = FUN_0056f120(*(undefined1 *)(DAT_009b9ec4 + 0x11));
    if (iVar3 != 0) {
      fVar5 = (float10)FUN_0056f7b0();
      goto LAB_007b0f07;
    }
  }
  fVar5 = (float10)_DAT_00890da8;
LAB_007b0f07:
  if (fVar5 <= (float10)*(float *)(param_1 + 0x15c)) {
    fVar5 = (float10)*(float *)(param_1 + 0x15c);
  }
  if ((float10)*(float *)(param_1 + 0x160) <= fVar5) {
    fVar5 = (float10)*(float *)(param_1 + 0x160);
  }
  *(float *)(param_1 + 0x164) = (float)fVar5;
  fVar5 = (float10)FUN_007afc90();
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x168);
  if (fVar5 <= (float10)*(float *)(param_1 + 0x15c)) {
    fVar5 = (float10)*(float *)(param_1 + 0x15c);
  }
  if ((float10)*(float *)(param_1 + 0x160) <= fVar5) {
    fVar5 = (float10)*(float *)(param_1 + 0x160);
  }
  *(float *)(param_1 + 0x168) = (float)fVar5;
  FUN_007a5aa0();
  cVar1 = FUN_00575b00();
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  if (cVar1 != '\0') {
    uVar4 = FUN_007afdb0(*(undefined4 *)(param_1 + 0x150));
    FUN_00525220(uVar2,0x63ca8308,uVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_007a58d0(*(undefined4 *)(param_1 + 0x150));
    FUN_005252d0(uVar2,0x83e3cd39,&DAT_0089c2d0,uVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_0058ae50();
    FUN_005252d0(uVar2,0x23d918fe,&DAT_0089c2d0,uVar4);
    return;
  }
  uVar4 = FUN_007aed80(2);
  FUN_005252d0(uVar2,0x7a6d2f71,&DAT_0089c2d0,uVar4);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xc60adcfd,&DAT_0089c2d0,
               *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4));
  return;
}

