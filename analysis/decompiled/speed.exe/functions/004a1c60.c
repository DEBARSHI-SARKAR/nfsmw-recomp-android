/* speed.exe 004a1c60 FUN_004a1c60; analysis pseudocode, not buildable source.
 * calls 004909f0 FUN_004909f0
 * calls 0048d7d0 FUN_0048d7d0
 * calls 0048ff00 FUN_0048ff00
 * calls 0048fe20 FUN_0048fe20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004a1c60(int param_1,float param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_10 [16];
  
  if (param_4 != *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(int *)(param_1 + 0x20) = param_4;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = *(ushort *)(iVar3 + 0xc);
  iVar6 = *(int *)(iVar3 + 8);
  if ((*(int *)(param_1 + 0x1c) == 0) && (**(ushort **)(iVar3 + 4) != 0)) {
    uVar8 = (uint)**(ushort **)(iVar3 + 4);
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))(uVar8 * 2);
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    if (uVar8 != 0) {
      iVar9 = (uVar8 - 1 >> 2) + 1;
      do {
        uVar8 = *(ushort *)(iVar3 + 0xe + iVar7 * 2) / 0xc;
        if ((*(uint *)(param_4 + ((int)(uVar8 & 0xff) >> 5) * 4) & 1 << ((byte)uVar8 & 0x1f)) != 0)
        {
          *(short *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) * 2) = (short)iVar7;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  iVar7 = FUN_0048fe20(param_2);
  FUN_004909f0(4,*(undefined4 *)(param_1 + 0x10),iVar7,*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x10) = iVar7;
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar6 + -2 + iVar7 * 2);
  }
  if ((((float)uVar8 == param_2) ||
      ((iVar7 == uVar2 - 1 && ((float)*(ushort *)(iVar6 + -4 + (uint)uVar2 * 2) < param_2)))) ||
     ((iVar7 == 0 && (param_2 < _DAT_00890968)))) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + iVar6 * 2);
        puVar10 = (undefined4 *)(uVar8 * 0x10 + *(int *)(param_1 + 0x14));
        puVar1 = (undefined4 *)(param_3 + (uint)*(ushort *)(iVar3 + 0xe + uVar8 * 2) * 4);
        *puVar1 = *puVar10;
        puVar1[1] = puVar10[1];
        puVar1[2] = puVar10[2];
        puVar1[3] = puVar10[3];
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x18));
    }
  }
  else {
    uVar2 = *(ushort *)(iVar6 + iVar7 * 2);
    iVar6 = *(int *)(param_1 + 0x18);
    iVar9 = 0;
    if (0 < iVar6) {
      do {
        uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + iVar9 * 2);
        FUN_0048ff00(uVar5 << 2,4,iVar7,iVar7 + 1,uVar5 * 0x10 + *(int *)(param_1 + 0x14),auStack_10
                    );
        uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + iVar9 * 2);
        FUN_0048d7d0((param_2 - (float)uVar8) / (float)(int)(uVar2 - uVar8),
                     uVar5 * 0x10 + *(int *)(param_1 + 0x14),auStack_10,
                     param_3 + (uint)*(ushort *)(iVar3 + 0xe + uVar5 * 2) * 4);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x18));
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x18) >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}

