/* speed.exe 007fe2a1 FUN_007fe2a1; analysis pseudocode, not buildable source.
 * calls 007fdf1a FUN_007fdf1a
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fe1ff FUN_007fe1ff
 * calls 007fc943 FUN_007fc943
 * calls 007fbca3 FUN_007fbca3
 * calls 007fdff9 FUN_007fdff9
 */

undefined4 FUN_007fe2a1(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    FUN_007fbca3(param_1,1,*(int *)(param_1 + 0x1a8));
  }
  uVar9 = *(uint *)(param_1 + 0x1b0);
  uVar4 = *(uint *)(param_1 + 0x1b4);
  uVar10 = uVar9 * uVar4;
  *(uint *)(param_1 + 0x1f0) = uVar10 >> 2;
  uVar5 = uVar9 / *(uint *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(uint *)(param_1 + 0x1ec) = uVar10;
  *(uint *)(param_1 + 0x214) = uVar10;
  *(uint *)(param_1 + 0x1f8) = uVar5;
  uVar6 = uVar4 / *(uint *)(param_1 + 0x1c4);
  *(uint *)(param_1 + 500) = uVar6;
  uVar6 = uVar6 * uVar5;
  *(uint *)(param_1 + 0x200) = uVar6;
  *(uint *)(param_1 + 0x204) = uVar6 >> 2;
  *(uint *)(param_1 + 0x1fc) = uVar6 * 3 >> 1;
  *(uint *)(param_1 + 0x1b8) = uVar9 + 0x60;
  *(int *)(param_1 + 0x1bc) = (int)(uVar9 + 0x60) / 2;
  uVar5 = (uVar4 + 0x60) * (uVar9 + 0x60);
  uVar6 = uVar5 >> 2;
  *(uint *)(param_1 + 0x20c) = uVar6;
  *(uint *)(param_1 + 0x208) = uVar5;
  *(uint *)(param_1 + 0x220) = uVar5;
  *(uint *)(param_1 + 0x218) = (uVar10 >> 2) + uVar10;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(uint *)(param_1 + 0x224) = uVar6 + uVar5;
  iVar8 = ((uVar4 & 0xf) != 0) + 6 + (uVar4 >> 4);
  *(int *)(param_1 + 0x22c) = iVar8;
  iVar3 = ((uVar9 & 0xf) != 0) + 6 + (uVar9 >> 4);
  *(int *)(param_1 + 0x230) = iVar3;
  *(int *)(param_1 + 0x228) = iVar3 * iVar8;
  piVar7 = (int *)(param_1 + 0x6ac);
  uVar9 = 0;
  do {
    piVar1 = (int *)((int)&DAT_008c47c8 + uVar9);
    piVar2 = (int *)((int)&DAT_008c47cc + uVar9);
    uVar9 = uVar9 + 8;
    *piVar7 = *piVar1 * *(int *)(param_1 + 0x230) + *piVar2;
    piVar7 = piVar7 + 1;
  } while (uVar9 < 0x60);
  FUN_007fc943(*(undefined4 *)(param_1 + 0x29c),(int *)(param_1 + 0x1b0));
  iVar8 = FUN_007fdff9(param_1);
  if (iVar8 != 0) {
    iVar8 = FUN_007fe1ff(param_1,uVar5 + uVar6 * 2);
    if (iVar8 != 0) {
      if (((*(int *)(param_1 + 0x264) == 0) && (iVar8 = *(int *)(param_1 + 0x23c), iVar8 != 0)) &&
         ((*(int *)(param_1 + 0x1b0) != iVar8 ||
          (*(int *)(param_1 + 0x1b4) != *(int *)(param_1 + 0x240))))) {
        iVar8 = FUN_007fc5f5(((uint)((*(int *)(param_1 + 0x240) + 0x20) * (iVar8 + 0x20) * 3) >> 1)
                             + 0x20,0);
        *(int *)(param_1 + 0x268) = iVar8;
        *(uint *)(param_1 + 0x264) = iVar8 + 0x1fU & 0xffffffe0;
      }
      return 1;
    }
    FUN_007fdf1a(param_1);
  }
  return 0;
}

