/* speed.exe 007b0620 FUN_007b0620; analysis pseudocode, not buildable source.
 * calls 007b01f0 FUN_007b01f0
 * calls 005252d0 FUN_005252d0
 * calls 007afc90 FUN_007afc90
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00575b40 FUN_00575b40
 * calls 00575b20 FUN_00575b20
 * calls 0056f7b0 FUN_0056f7b0
 * calls 00575b00 FUN_00575b00
 * calls 0056f120 FUN_0056f120
 * calls 00576f10 FUN_00576f10
 * calls 007aed80 FUN_007aed80
 * calls 00524850 FUN_00524850
 * calls 007a5aa0 FUN_007a5aa0
 * calls 00525220 FUN_00525220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007b0620(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x842b0e89);
    FUN_00514c70(uVar2);
  }
  else {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x842b0e89);
    FUN_00514cc0(uVar2);
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x34) + 0x54) + 0x14) == '\0') {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x62d74f3,0x28feadd);
    }
    else {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x62d74f3,0x5dabcbc0);
    }
  }
  if (DAT_009b9ec4 != 0) {
    iVar3 = FUN_0056f120(*(undefined1 *)(DAT_009b9ec4 + 0x11));
    if (iVar3 != 0) {
      fVar9 = (float10)FUN_0056f7b0();
      goto LAB_007b06be;
    }
  }
  fVar9 = (float10)_DAT_00890da8;
LAB_007b06be:
  if (fVar9 <= (float10)*(float *)(param_1 + 0x128)) {
    fVar9 = (float10)*(float *)(param_1 + 0x128);
  }
  if ((float10)*(float *)(param_1 + 300) <= fVar9) {
    fVar9 = (float10)*(float *)(param_1 + 300);
  }
  *(float *)(param_1 + 0x130) = (float)fVar9;
  fVar9 = (float10)FUN_007afc90();
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x134);
  if (fVar9 <= (float10)*(float *)(param_1 + 0x128)) {
    fVar9 = (float10)*(float *)(param_1 + 0x128);
  }
  if ((float10)*(float *)(param_1 + 300) <= fVar9) {
    fVar9 = (float10)*(float *)(param_1 + 300);
  }
  *(float *)(param_1 + 0x134) = (float)fVar9;
  FUN_007a5aa0();
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) && (DAT_009b9e8d == '\0')) {
    uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x9ea22e0b);
    FUN_00514c70(uVar2);
    return;
  }
  cVar1 = FUN_00575b00();
  if (cVar1 != '\0') {
    FUN_007b01f0();
    cVar1 = FUN_00575b40();
    if (cVar1 == '\0') {
      cVar1 = FUN_00575b20();
      if (cVar1 == '\0') {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x8cdcb8ed,0x93296e59);
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xd3d3b1f4,0x78f1c602);
        iVar3 = FUN_00576f10(0xe,0);
        iVar4 = FUN_00576f10(0xf,0);
        iVar3 = iVar3 + iVar4;
        iVar4 = FUN_00576f10(0x10,0);
        uVar2 = 0xd;
      }
      else {
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x8cdcb8ed,0x358db897);
        FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xd3d3b1f4,0x68342700);
        iVar4 = FUN_00576f10(1,0);
        iVar5 = FUN_00576f10(2,0);
        iVar8 = FUN_00576f10(3,0);
        iVar6 = FUN_00576f10(4,0);
        iVar3 = FUN_00576f10(5,0);
        iVar3 = iVar4 + iVar5 + iVar8 + iVar6 + iVar3;
        iVar4 = FUN_00576f10(6,0);
        uVar2 = 7;
      }
    }
    else {
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x8cdcb8ed,0xa03a752f);
      FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xd3d3b1f4,0x4ac68298);
      iVar4 = FUN_00576f10(8,0);
      iVar5 = FUN_00576f10(9,0);
      iVar3 = FUN_00576f10(10,0);
      iVar3 = iVar4 + iVar5 + iVar3;
      iVar4 = FUN_00576f10(0xb,0);
      uVar2 = 0xc;
    }
    iVar5 = FUN_00576f10(uVar2,0);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_007aed80(0);
    FUN_005252d0(uVar2,0xd1497a06,&DAT_0089c2d0,uVar7);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    iVar8 = FUN_007aed80(0);
    FUN_005252d0(uVar2,0x18661565,&DAT_0089c2d0,(iVar3 + iVar4 + iVar5) - iVar8);
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_007aed80(0);
  FUN_005252d0(uVar2,0xd1497a06,&DAT_0089c2d0,uVar7);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_007aed80(1);
  FUN_005252d0(uVar2,0x34f7c0e8,&DAT_0089c2d0,uVar7);
  iVar3 = FUN_007aed80(2);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x18661565,&DAT_0089c2d0,iVar3);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x8531e22e,&DAT_0089c2d0,
               *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb4) - iVar3);
  return;
}

