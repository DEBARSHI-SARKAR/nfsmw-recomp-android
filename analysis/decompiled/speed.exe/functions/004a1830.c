/* speed.exe 004a1830 FUN_004a1830; analysis pseudocode, not buildable source.
 * calls 00490e70 FUN_00490e70
 * calls 004909f0 FUN_004909f0
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 __thiscall FUN_004a1830(int param_1,float param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (param_4 != *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(int *)(param_1 + 0x20) = param_4;
  }
  iVar7 = *(int *)(param_1 + 0xc);
  uVar3 = *(ushort *)(iVar7 + 8);
  iVar1 = iVar7 + 10;
  if ((*(int *)(param_1 + 0x1c) == 0) && (**(ushort **)(iVar7 + 4) != 0)) {
    uVar5 = (uint)**(ushort **)(iVar7 + 4);
    uVar4 = (**(code **)(*DAT_009117f4 + 0x14))(uVar5 * 2);
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    if (uVar5 != 0) {
      iVar6 = (uVar5 - 1 >> 2) + 1;
      do {
        uVar5 = *(ushort *)(iVar1 + iVar7 * 2) / 0xc;
        if ((*(uint *)(param_4 + ((int)(uVar5 & 0xff) >> 5) * 4) & 1 << ((byte)uVar5 & 0x1f)) != 0)
        {
          *(short *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) * 2) = (short)iVar7;
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  iVar7 = FUN_007c4b80();
  uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0xc) + 8);
  if (iVar7 < (int)uVar5) {
    iVar6 = iVar7;
    if (iVar7 < 0) {
      iVar6 = 0;
    }
  }
  else {
    iVar6 = uVar5 - 1;
  }
  FUN_004909f0(4,*(undefined4 *)(param_1 + 0x10),iVar6,*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x1c));
  *(int *)(param_1 + 0x10) = iVar6;
  if ((param_2 != (float)iVar7) && (iVar7 + 1 < (int)(uint)uVar3)) {
    FUN_00490e70(iVar7,iVar7 + 1,*(undefined4 *)(param_1 + 0x14),param_3,4,iVar1,
                 param_2 - (float)iVar7,*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x1c));
    return 1;
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x1c) + iVar7 * 2);
      puVar8 = (undefined4 *)(uVar5 * 0x10 + *(int *)(param_1 + 0x14));
      puVar2 = (undefined4 *)(param_3 + (uint)*(ushort *)(iVar1 + uVar5 * 2) * 4);
      *puVar2 = *puVar8;
      puVar2[1] = puVar8[1];
      puVar2[2] = puVar8[2];
      puVar2[3] = puVar8[3];
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x18));
  }
  return 1;
}

