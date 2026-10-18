/* speed.exe 00591fd0 FUN_00591fd0; analysis pseudocode, not buildable source.
 * calls 00591f60 FUN_00591f60
 * calls 007e88f0 FUN_007e88f0
 * calls 00586050 FUN_00586050
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_00591fd0(int param_1,ushort *param_2,int param_3,undefined4 param_4,int param_5,char param_6)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  float10 fVar11;
  float10 fVar12;
  float local_10;
  float local_c;
  uint local_8;
  
  if (param_2 == (ushort *)0x0) {
    return (float10)_DAT_00890968;
  }
  uVar1 = *param_2;
  local_10 = 0.0;
  bVar5 = true;
  bVar4 = false;
  local_c = 0.0;
  local_8 = 0;
  puVar3 = param_2;
  if (uVar1 != 0) {
    do {
      uVar9 = (uint)uVar1;
      param_2 = puVar3 + 1;
      if ((uVar1 == 10) || (uVar1 == 0x5e)) {
LAB_00592106:
        bVar4 = false;
        local_c = 0.0;
        bVar5 = false;
        local_10 = (float)param_3 + local_10 + *(float *)(param_1 + 0x24);
      }
      else if (uVar1 != 0xd) {
        iVar2 = *(int *)(param_1 + 0xc);
        uVar6 = uVar9 & 0xff;
        iVar8 = *(int *)(iVar2 + 0x14) + iVar2;
        iVar7 = (-(uint)((*(uint *)(iVar2 + 0xc) & 0x40000) != 0) & 4) + 0xc;
        if (((int)(uint)*(ushort *)(iVar2 + 10) <= (int)(uVar6 - 0x20)) ||
           (psVar10 = (short *)((uVar6 - 0x20) * iVar7 + iVar8), *psVar10 != (short)uVar6)) {
          psVar10 = (short *)FUN_007e88f0(uVar6,iVar8,(uint)*(ushort *)(iVar2 + 10),iVar7);
        }
        if (psVar10 != (short *)0x0) {
          bVar5 = true;
        }
        if ((param_6 != '\0') && (param_5 != 0)) {
          if (uVar1 == 0x20) {
            fVar11 = (float10)FUN_00591f60(puVar3,param_4);
            fVar12 = (float10)param_5;
            if (param_5 < 0) {
              fVar12 = fVar12 + (float10)_DAT_00891214;
            }
            if (fVar12 < fVar11 + (float10)local_c) {
              bVar4 = true;
            }
          }
          fVar11 = (float10)FUN_00586050(uVar9,local_8,param_4);
          local_c = (float)(fVar11 + (float10)local_c);
        }
        if (bVar4) goto LAB_00592106;
      }
      uVar1 = *param_2;
      local_8 = uVar9;
      puVar3 = param_2;
    } while (uVar1 != 0);
    if (!bVar5) goto LAB_00592159;
  }
  local_10 = local_10 + *(float *)(param_1 + 0x24);
LAB_00592159:
  return (float10)local_10;
}

