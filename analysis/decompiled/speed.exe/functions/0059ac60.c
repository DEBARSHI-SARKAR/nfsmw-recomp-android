/* speed.exe 0059ac60 FUN_0059ac60; analysis pseudocode, not buildable source.
 * calls 00586130 FUN_00586130
 * calls 00585d60 FUN_00585d60
 * calls 007e89d0 FUN_007e89d0
 * calls 00591f60 FUN_00591f60
 * calls 00572300 FUN_00572300
 * calls 007c4b80 FUN_007c4b80
 * calls 00582c70 FUN_00582c70
 * calls 007e88f0 FUN_007e88f0
 * calls 00591fd0 FUN_00591fd0
 * calls 00586050 FUN_00586050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0059ac60(int param_1,int *param_2,ushort *param_3,int param_4,undefined4 *param_5,int param_6,
            undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  undefined4 *puVar13;
  float10 fVar14;
  float10 fVar15;
  float local_3c;
  float local_38;
  float local_30;
  uint local_24;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar1 = *(uint *)(param_4 + 0x6c);
  iVar6 = FUN_007c4b80();
  iVar2 = *(int *)(param_4 + 0x74);
  uVar3 = *(uint *)(param_4 + 0x1c);
  uVar12 = uVar1 >> 4 & 0xffffff01;
  local_10 = ((*param_2 / 2 | param_2[3] << 8) << 8 | param_2[1] / 2) << 8 | param_2[2] / 2;
  local_24 = uVar1 >> 4 & 1;
  local_c = local_10;
  local_8 = local_10;
  local_4 = local_10;
  fVar14 = (float10)FUN_00586130(param_3,uVar3,iVar2,uVar12);
  fVar15 = (float10)FUN_00591fd0(param_3,iVar6,uVar3,*(undefined4 *)(param_4 + 0x74),uVar12);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_38 = 0.0;
    }
    else {
      local_38 = (float)-fVar15;
    }
  }
  else {
    local_38 = (float)(fVar15 * (float10)_DAT_00891068);
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      local_3c = 0.0;
    }
    else {
      local_3c = -(float)fVar14;
    }
  }
  else {
    local_3c = (float)fVar14 * _DAT_00891068;
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar13 = (undefined4 *)(param_6 + 0x30);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *param_5;
      param_5 = param_5 + 1;
      puVar13 = puVar13 + 1;
    }
    uVar11 = *param_3;
    bVar5 = true;
    param_5 = (undefined4 *)0x0;
    local_30 = local_3c;
    puVar9 = param_3;
    while (uVar11 != 0) {
      param_3 = puVar9 + 1;
      if (((uVar11 != 0x20) || (local_30 != local_3c)) || ((*(byte *)(param_4 + 0x6c) & 0x10) == 0))
      {
        if (((uVar3 & 0x20) == 0) && ((uVar11 == 10 || (uVar11 == 0x5e)))) {
          if (*param_3 == 0) break;
          fVar14 = (float10)FUN_00586130(param_3,uVar3,iVar2,local_24);
          if ((uVar1 & 1) == 0) {
            if ((uVar1 & 2) == 0) {
              local_3c = 0.0;
            }
            else {
              local_3c = (float)-fVar14;
            }
          }
          else {
            local_3c = (float)(fVar14 * (float10)_DAT_00891068);
          }
          local_30 = local_3c;
          local_38 = (float)iVar6 + *(float *)(param_1 + 0x24) + local_38;
        }
        else {
          if ((iVar2 != 0) && ((uVar11 == 0x20 && ((*(byte *)(param_4 + 0x6c) & 0x10) != 0)))) {
            fVar14 = (float10)FUN_00591f60(puVar9,*(undefined4 *)(param_4 + 0x1c));
            fVar15 = (float10)iVar2;
            if (iVar2 < 0) {
              fVar15 = fVar15 + (float10)_DAT_00891214;
            }
            if (fVar15 < ((float10)local_3c - (float10)local_30) + fVar14) {
              fVar14 = (float10)FUN_00586130(param_3,uVar3,iVar2,local_24);
              fVar14 = (float10)FUN_00572300(uVar1,(float)fVar14);
              local_3c = (float)fVar14;
              local_38 = (float)iVar6 + *(float *)(param_1 + 0x24) + local_38;
              local_30 = local_3c;
              goto LAB_0059b063;
            }
          }
          if ((((uVar3 & 0x20) == 0) && ((uVar3 & 0x800) == 0)) && (uVar11 == 0x24)) {
            if (*param_3 == 0x24) {
              param_3 = puVar9 + 2;
              param_5 = (undefined4 *)((int)param_5 + 1);
              uVar11 = 0x24;
              bVar5 = false;
            }
            else if (bVar5) {
              return;
            }
          }
          if (0xff7f < uVar11) {
            uVar11 = uVar11 & 0xff;
          }
          if (uVar11 == 0x99) {
            uVar11 = 0x2122;
          }
          else if (uVar11 == 0x9c) {
            uVar11 = 0x153;
          }
          else if (uVar11 == 0xa0) {
            uVar11 = 0x20;
          }
          iVar8 = *(int *)(param_1 + 0xc);
          iVar10 = *(int *)(iVar8 + 0x14) + iVar8;
          iVar7 = (-(uint)((*(uint *)(iVar8 + 0xc) & 0x40000) != 0) & 4) + 0xc;
          if (((int)(uint)*(ushort *)(iVar8 + 10) <= (int)(uVar11 - 0x20)) ||
             (puVar9 = (ushort *)((uVar11 - 0x20) * iVar7 + iVar10), *puVar9 != uVar11)) {
            puVar9 = (ushort *)FUN_007e88f0(uVar11,iVar10,(uint)*(ushort *)(iVar8 + 10),iVar7);
          }
          if (puVar9 != (ushort *)0x0) {
            fVar4 = _DAT_00890968;
            if ((param_3[-2] != 0) && (param_5 != (undefined4 *)0x0)) {
              iVar8 = FUN_007e89d0(puVar9,param_3[-2]);
              fVar4 = (float)iVar8;
            }
            FUN_00585d60(puVar9,fVar4 + local_3c,local_38,&local_10,param_6,param_7);
            if (param_5 == (undefined4 *)0x0) {
              fVar14 = (float10)FUN_00586050(uVar11,0,uVar1);
              local_3c = (float)(fVar14 + (float10)local_3c);
            }
            else {
              fVar14 = (float10)FUN_00586050(uVar11,param_3[-2],uVar1);
              local_3c = (float)(fVar14 + (float10)local_3c);
            }
          }
        }
      }
LAB_0059b063:
      param_5 = (undefined4 *)((int)param_5 + 1);
      puVar9 = param_3;
      uVar11 = *param_3;
    }
    FUN_00582c70();
  }
  return;
}

