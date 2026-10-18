/* speed.exe 00723fa0 FUN_00723fa0; analysis pseudocode, not buildable source.
 * calls 006da9b0 FUN_006da9b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00723fa0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined *puVar10;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  if ((param_3 & 1) != 0) {
    local_c = 0x1000;
  }
  if ((param_3 & 0x400) != 0) {
    local_14 = 0x100000;
  }
  if ((char)param_3 < '\0') {
    local_c = local_c | 0x100;
  }
  if ((param_3 & 0x10) == 0) {
    if ((param_3 & 8) != 0) {
      local_10 = 0x2000;
    }
  }
  else {
    local_14 = 0x2000;
  }
  if (((param_3 & 0x100) != 0) || ((param_3 & 0x2200) != 0)) {
    local_14 = 0x10000;
  }
  if ((param_3 & 0x800) != 0) {
    local_10 = local_10 | 0x400000;
  }
  if ((param_3 & 0x1000) != 0) {
    local_14 = 0x1000000;
  }
  piVar1 = (int *)(param_1 + 0x9c0);
  iVar7 = 0;
  if (0 < *piVar1) {
    while (*(int *)(param_1 + 0x80) != param_2) {
      iVar7 = iVar7 + 1;
      param_1 = param_1 + 0xd0;
      if (*piVar1 <= iVar7) {
        return;
      }
    }
    puVar9 = *(uint **)(param_1 + 0x88);
    if (puVar9 < *(uint **)(param_1 + 0x8c)) {
      do {
        uVar2 = *(uint *)(puVar9[2] + 0x18);
        if ((((uVar2 & 0x80000) == 0) || (DAT_00982b9c == 0)) &&
           (((uVar2 & 0x40000) == 0 || ((DAT_00982b9c != 0 || ((uVar2 & 0x100) != 0)))))) {
          _DAT_009a3a78 = *puVar9 & 0xfffffffc;
          uVar2 = *(uint *)(puVar9[2] + 0x18);
          uVar8 = local_c;
          if ((char)uVar2 < '\0') {
            uVar8 = local_c | 0x2000;
          }
          if ((uVar2 & 0x1000000) != 0) {
            uVar8 = uVar8 | 0x100000;
          }
          if ((uVar2 & 0x100) != 0) {
            uVar8 = uVar8 | 0x1020000;
          }
          if ((uVar2 & 0x400000) != 0) {
            uVar8 = uVar8 | 0x40000;
          }
          if ((uVar2 & 0x20000) != 0) {
            uVar8 = uVar8 | 0x800000;
          }
          if ((uVar2 & 0x80000) != 0) {
            uVar8 = uVar8 | 0x400000;
          }
          if ((param_3 & 0x200) != 0) {
            bVar6 = (byte)(uVar2 >> 0x1a) & 1;
            if (((uVar2 & 0x100000) != 0) && (bVar6 == 0)) {
              uVar8 = uVar8 | 0x10000;
            }
            if (((uVar2 & 0x200000) != 0) && (bVar6 == 0)) {
              uVar8 = uVar8 | 0x10000;
            }
            if ((uVar2 & 0x40000000) != 0) {
              uVar8 = uVar8 | 0x10000;
            }
          }
          if (((param_3 & 0x2000) != 0) && ((uVar2 & 0x40000000) != 0)) {
            uVar8 = uVar8 | 0x10000;
          }
          if ((param_3 & 0x100) != 0) {
            if ((uVar2 & 0x100000) != 0) {
              uVar8 = uVar8 | 0x10000;
            }
            if ((uVar2 & 0x200000) != 0) {
              uVar8 = uVar8 | 0x10000;
            }
            if ((uVar2 & 0x40000000) != 0) {
              uVar8 = uVar8 | 0x10000;
            }
          }
          if ((*puVar9 & 3) == 2) {
            uVar8 = uVar8 | 4;
          }
          if ((local_14 == 0) && (local_10 == 0)) {
            bVar3 = true;
LAB_007241bb:
            bVar4 = false;
          }
          else {
            bVar3 = false;
            if ((local_14 == 0) || ((local_14 & uVar8) == 0)) goto LAB_007241bb;
            bVar4 = true;
          }
          if ((local_10 == 0) || ((local_10 & uVar8) != 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (((bVar3) || (bVar4)) || (bVar5)) {
            puVar10 = (undefined *)puVar9[1];
            if (puVar10 == (undefined *)0x0) {
              puVar10 = &DAT_00987ab0;
            }
            FUN_006da9b0(_DAT_009a3a78,puVar10,0,uVar8,0);
            _DAT_009a3a78 = 0;
          }
        }
        puVar9 = puVar9 + 3;
      } while (puVar9 < *(uint **)(param_1 + 0x8c));
    }
  }
  return;
}

