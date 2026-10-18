/* speed.exe 007c2780 FUN_007c2780; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00524850 FUN_00524850
 * calls 005268a0 FUN_005268a0
 * calls 007bf7b0 FUN_007bf7b0
 * calls 007ada50 FUN_007ada50
 * calls 0056ecc0 FUN_0056ecc0
 * calls 004061b0 FUN_004061b0
 * calls 00516c90 FUN_00516c90
 * calls 0056dbe0 FUN_0056dbe0
 * calls 005af1c0 FUN_005af1c0
 */

void __fastcall FUN_007c2780(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(DAT_0091cf90 + 300);
  if ((uVar1 >> 0xf & 1) == 0) {
    if ((uVar1 >> 2 & 1) != 0) {
      if (((uVar1 & 4) == 0) || (*DAT_0091cf90 != '\x02')) {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = 0xde511657;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar5 = 0x2cf6c390;
      }
      goto LAB_007c2837;
    }
    if (((uVar1 >> 3 & 1) != 0) || ((uVar1 >> 6 & 1) != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 0x70fbb1e4;
      goto LAB_007c2837;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 0xa936c3a2;
      goto LAB_007c2837;
    }
    if ((DAT_0091cf90[300] & 1U) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 0x5415c3f1;
      goto LAB_007c2837;
    }
  }
  else {
    if (*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0) < 0x10) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 0x5415e304;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = 0x3a12d2f5;
    }
LAB_007c2837:
    FUN_00516c90(uVar5,uVar2,0);
  }
  uVar2 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x64f6d21f);
  FUN_00514c70(uVar2);
  if ((DAT_0091cf90[300] & 1U) == 0) {
    iVar4 = *(int *)(param_1 + 0x1a8);
    iVar3 = FUN_0056dbe0(0xb);
    iVar4 = *(int *)(iVar3 + 0x10 + iVar4 * 4);
    *(int *)(param_1 + 0x68) = iVar4;
    if (((*(uint *)(DAT_0091cf90 + 300) >> 5 & 1) == 0) && (iVar4 != 0x12345678)) {
      iVar3 = FUN_005af1c0("M3GTRCAREERSTART");
      if (iVar4 != iVar3) {
        FUN_004061b0(*(undefined4 *)(param_1 + 0x1a8));
        iVar4 = FUN_0056ecc0(iVar4);
        if (iVar4 != 0) {
          *(uint *)(param_1 + 0x1ac) = *(uint *)(iVar4 + 0xc) & 0x3f | 0xf0000;
          goto LAB_007c2966;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1ac) = 0xf0001;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8);
    if ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) == 0) {
      *(undefined4 *)(param_1 + 0x1ac) = 0xf0002;
    }
    else {
      *(undefined4 *)(param_1 + 0x1ac) = 0xf0001;
      if ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 1 & 1) == 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x10);
        uVar6 = 0;
        uVar5 = FUN_005af1c0("DISABLE_INPUTS",uVar2,0);
        FUN_00516c90(uVar5,uVar2,uVar6);
        FUN_005268a0();
      }
    }
  }
LAB_007c2966:
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  FUN_007bf7b0();
  FUN_007ada50();
  return;
}

