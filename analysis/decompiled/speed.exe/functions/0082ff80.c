/* speed.exe 0082ff80 FUN_0082ff80; analysis pseudocode, not buildable source.
 * calls 0082fb80 FUN_0082fb80
 * calls 0082fa40 FUN_0082fa40
 * calls 0082f9f0 FUN_0082f9f0
 */

undefined4 FUN_0082ff80(int param_1)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  uint uVar10;
  undefined1 local_30 [4];
  uint local_2c;
  uint local_20;
  int local_14;
  uint local_10;
  int local_c;
  char local_6;
  char local_5;
  
  local_c = 0;
  local_14 = 0;
  if (-1 < *DAT_009c2964) {
    local_c = DAT_009c2964[*DAT_009c2964 + 0x10];
  }
  if (-1 < *(short *)(param_1 + 4)) {
    iVar8 = (int)*(short *)(param_1 + 4);
    if ((iVar8 < 0) || ((int)(uint)*(ushort *)(DAT_009c2964[6] + 0x12) < iVar8)) {
      psVar9 = (short *)0x0;
    }
    else {
      psVar9 = (short *)(DAT_009c2964[6] + (uint)*(ushort *)(DAT_009c2964[7] + iVar8 * 2) * 4);
    }
    if ((uint)*(ushort *)(DAT_009c2964[6] + 0x12) < (*(uint *)(psVar9 + 4) & 0xffff)) {
      iVar8 = 0;
    }
    else {
      iVar8 = DAT_009c2964[6] +
              (uint)*(ushort *)(DAT_009c2964[7] + (*(uint *)(psVar9 + 4) & 0xffff) * 2) * 4;
    }
    *(int *)(param_1 + 0x60) = iVar8;
    local_10 = *(uint *)(DAT_009c2964[0xf] + -4 + *psVar9 * 8);
    *(uint *)(param_1 + 0x68) = local_10;
    *(uint *)(param_1 + 100) = local_10;
    if (*(byte *)((int)psVar9 + 7) != 0) {
      *(uint *)(param_1 + 0x68) = local_10 / *(byte *)((int)psVar9 + 7);
    }
    if ((*(uint *)(psVar9 + 2) & 0xf00000) != 0) {
      *(uint *)(param_1 + 100) =
           local_10 / ((*(uint *)(psVar9 + 2) >> 0x14 & 0xf) * (uint)*(byte *)((int)psVar9 + 7));
    }
    if ((*(uint *)(param_1 + 8) & 0x8000000) == 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x1f00000;
    }
    else {
      if ((local_c == 0) || (local_c == param_1)) {
        bVar6 = false;
        bVar5 = false;
      }
      else {
        bVar5 = true;
        bVar6 = true;
      }
      if (((*(uint *)(iVar8 + 0xc) & 1) == 0) || (!bVar5)) {
        local_5 = '\0';
      }
      else {
        local_5 = '\x01';
      }
      local_6 = (*(uint *)(iVar8 + 0xc) & 2) != 0;
      local_20 = 0;
      local_2c = 0;
      if (bVar5) {
        FUN_0082fa40(local_c,local_30);
      }
      iVar8 = (int)(*(uint *)(param_1 + 8) << 7) >> 0x1b;
      if (iVar8 < 0) {
        if (((*(byte *)(*(int *)(param_1 + 0x60) + 0xb) & 0x30) != 0) && (bVar6)) {
          piVar1 = (int *)(param_1 + 0x6c);
          iVar8 = FUN_0082fb80((int)*(short *)(param_1 + 4),*(undefined4 *)(param_1 + 0x60),local_30
                               ,piVar1);
          *(uint *)(param_1 + 8) =
               *(uint *)(param_1 + 8) ^ (iVar8 << 0x14 ^ *(uint *)(param_1 + 8)) & 0x1f00000;
          *piVar1 = *piVar1 + DAT_009c2964[4] * -5;
          return 0;
        }
      }
      else if (((local_5 != '\0') && ((uint)DAT_009c2964[4] <= local_20)) &&
              (local_20 < local_2c >> 1)) {
        return 0xffffd8f1;
      }
      if (iVar8 < 1) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfe1fffff | 0x100000;
      }
      uVar4 = *(uint *)(param_1 + 8);
      local_14 = (int)(uVar4 << 7) >> 0x1b;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      if ((local_5 != '\0') && (local_2c != 0)) {
        uVar10 = local_20;
        if (local_20 < (uint)DAT_009c2964[4]) {
          uVar10 = local_20 + local_2c;
        }
        iVar8 = DAT_009c2980 + uVar10;
        *(int *)(param_1 + 0x6c) = iVar8;
        *(int *)(param_1 + 0x6c) = iVar8 + DAT_009c2964[4] * -5;
      }
      if ((local_6 == '\0') ||
         (uVar10 = *(uint *)(psVar9 + 2), bVar2 = *(byte *)((int)psVar9 + 7),
         *(uint *)(param_1 + 8) =
              (((int)((uVar4 & 0xfff00000) << 7) >> 7) + 0x100000U ^ uVar4) & 0x1f00000 ^ uVar4,
         (int)((uVar10 >> 0x14 & 0xf) * (uint)bVar2) <= local_14)) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfe0fffff;
      }
      if (local_6 != '\0') {
        local_10 = local_10 /
                   ((*(uint *)(psVar9 + 2) >> 0x14 & 0xf) * (uint)*(byte *)((int)psVar9 + 7));
      }
    }
    sVar3 = *(short *)(param_1 + 4);
    uVar7 = FUN_0082f9f0((int)sVar3);
    uVar7 = (**(code **)(**(int **)(param_1 + 300) + 0x28))((int)sVar3,uVar7,local_14,0,local_10);
    *(undefined4 *)(param_1 + 0x78) = uVar7;
    return uVar7;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x1f00000;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0xffff;
  return 0;
}

