/* speed.exe 00660c10 FUN_00660c10; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 00460d20 FUN_00460d20
 * calls 00660270 FUN_00660270
 * calls 00460e30 FUN_00460e30
 */

uint __thiscall FUN_00660c10(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 in_EAX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_c;
  undefined2 local_8;
  
  sVar1 = *(short *)(param_1 + 0x12);
  uVar5 = CONCAT22((short)((uint)in_EAX >> 0x10),sVar1);
  if (9 < sVar1) {
    return uVar5 & 0xffffff00;
  }
  if ((*(int *)(param_2 + 0x18) == 0) && (*(char *)(param_2 + 0x24) == '\0')) {
    if (0 < sVar1) {
      uVar5 = FUN_00460d20(*(undefined4 *)(param_2 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc));
      if (uVar5 != 0) goto LAB_00660c35;
    }
    iVar2 = *(int *)(param_2 + 0x14);
    iVar3 = *(int *)(param_1 + 0xc);
    local_c = *(uint *)(param_2 + 0x10) + iVar2;
    uVar5 = *(uint *)(param_2 + 0x10) & 0xfffff800;
    if (0 < *(short *)(param_1 + 0x12)) {
      if ((int)*(uint *)(param_1 + 4) < (int)uVar5) {
        uVar5 = *(uint *)(param_1 + 4);
      }
      if ((int)local_c < (int)*(uint *)(param_1 + 8)) {
        local_c = *(uint *)(param_1 + 8);
      }
    }
    iVar8 = local_c - uVar5;
    uVar7 = local_c;
    if ((iVar8 < 0x40001) &&
       (uVar7 = *(uint *)(param_1 + 8),
       (int)(((*(int *)(param_1 + 4) - *(int *)(param_2 + 0x14)) - uVar7) + iVar8) < 0x8001)) {
      iVar6 = FUN_00464080(0);
      bVar4 = iVar6 + -0x10000 < iVar8 * 2;
      local_8 = 0;
      if (bVar4) {
        iVar6 = FUN_00460e30(*(undefined4 *)(param_2 + 0xc),"CARS\\",5);
        if (iVar6 == 0) {
          iVar6 = FUN_00464080(DAT_00904a00);
          bVar4 = iVar6 < iVar8;
          local_8 = (undefined2)DAT_00904a00;
        }
      }
      iVar8 = FUN_00660270(bVar4,1,6);
      if ((iVar8 != 0) != bVar4) {
        bVar4 = iVar8 != 0;
      }
      uVar7 = CONCAT31((int3)((uint)iVar8 >> 8),bVar4);
      if (bVar4 == false) {
        *(undefined2 *)(param_1 + 0x10) = local_8;
        sVar1 = *(short *)(param_1 + 0x12);
        *(uint *)(param_1 + 4) = uVar5;
        *(uint *)(param_1 + 8) = local_c;
        *(int *)(param_1 + 0xc) = iVar3 + iVar2;
        *(int *)(param_1 + 0x14 + sVar1 * 4) = param_2;
        *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
        return CONCAT31((int3)(char)((ushort)sVar1 >> 8),1);
      }
    }
    return uVar7 & 0xffffff00;
  }
LAB_00660c35:
  return uVar5 & 0xffffff00;
}

