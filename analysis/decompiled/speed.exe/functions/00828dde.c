/* speed.exe 00828dde FUN_00828dde; analysis pseudocode, not buildable source.
 * calls 00828c6b FUN_00828c6b
 */

undefined8 __fastcall FUN_00828dde(undefined4 param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  bool bVar4;
  undefined4 in_EAX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  bool bVar14;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar15;
  
  bVar14 = false;
  puVar11 = &stack0xfffffffc;
  iVar9 = param_3[4];
  iVar7 = param_3[2];
  *(int *)(iVar9 + -4) = param_3[1];
  *(int *)(iVar9 + -8) = iVar7;
  uVar8 = 0;
  pbVar12 = (byte *)param_3[3];
  while (0 < *param_3) {
    *param_3 = *param_3 + -0x1c;
    if (*pbVar12 == 0xee) {
      uVar15 = (uint)(in_NT & 1) * 0x4000 | (uint)bVar14 * 0x400 | (uint)(in_IF & 1) * 0x200 |
               (uint)(in_TF & 1) * 0x100 | 0x40 | (uint)(in_AF & 1) * 0x10 | 4 |
               (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
               (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
      FUN_00828c6b(param_3,uVar15,pbVar12,param_3,puVar11,&stack0xffffffd8,iVar9,uVar8,iVar7,0xee);
      in_NT = (uVar15 & 0x4000) != 0;
      bVar14 = (uVar15 & 0x400) != 0;
      in_IF = (uVar15 & 0x200) != 0;
      in_TF = (uVar15 & 0x100) != 0;
      in_AF = (uVar15 & 0x10) != 0;
      in_ID = (uVar15 & 0x200000) != 0;
      in_AC = (uVar15 & 0x40000) != 0;
      in_VIP = 0;
      in_VIF = 0;
      param_3 = *(int **)(puVar11 + 8);
      iVar9 = param_3[4];
      iVar7 = param_3[2];
      *(int *)(iVar9 + -4) = param_3[1];
      *(int *)(iVar9 + -8) = iVar7;
      uVar8 = 0;
      pbVar12 = (byte *)param_3[3];
    }
    else {
      fVar1 = *(float *)(&DAT_0090cdc8 + (uint)(*pbVar12 >> 4) * 4);
      fVar2 = *(float *)(&DAT_0090cdb8 + (uint)(*pbVar12 >> 4) * 4);
      uVar8 = (uint)(pbVar12[1] >> 4);
      iVar10 = iVar9 + 0x70;
      iVar5 = (*pbVar12 & 0xf) * 0x40;
      pbVar13 = pbVar12 + 0xf;
      iVar6 = -0xe;
      do {
        bVar3 = pbVar13[iVar6];
        *(float *)(iVar10 + iVar6 * 8) =
             *(float *)(iVar9 + 0x6c + iVar6 * 8) * fVar2 +
             *(float *)(&DAT_0090cdd8 + uVar8 * 4 + iVar5) +
             *(float *)(iVar9 + 0x68 + iVar6 * 8) * fVar1;
        uVar8 = (uint)(pbVar12[iVar6 + 0x10] >> 4);
        *(float *)(iVar9 + 0x74 + iVar6 * 8) =
             *(float *)(iVar10 + iVar6 * 8) * fVar2 +
             *(float *)(&DAT_0090cdd8 + (bVar3 & 0xffffff0f) * 4 + iVar5) +
             *(float *)(iVar9 + 0x6c + iVar6 * 8) * fVar1;
        iVar7 = iVar6 + 1;
        bVar4 = iVar6 < -1;
        iVar6 = iVar7;
      } while (bVar4);
      param_3[1] = *(int *)(iVar9 + 0x6c);
      param_3[2] = *(int *)(iVar9 + 0x68);
      param_3[4] = iVar10;
      param_3[3] = (int)pbVar13;
      iVar9 = iVar10;
      pbVar12 = pbVar13;
    }
  }
  return CONCAT44(param_2,in_EAX);
}

