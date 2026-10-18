/* speed.exe 0081e092 FUN_0081e092; analysis pseudocode, not buildable source.
 */

int FUN_0081e092(int param_1,int param_2,int *param_3,int *param_4)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  
  iVar3 = DAT_009c1c40;
  iVar8 = (&DAT_009c1f44)[param_1];
  bVar6 = true;
  bVar7 = true;
  if (*(char *)(iVar8 + 0x62) != '\0') {
    uVar10 = (uint)*(byte *)(iVar8 + 0x62);
    puVar9 = (uint *)(iVar8 + 0x10);
    do {
      if (*puVar9 <= *(uint *)(iVar8 + 8)) {
        bVar6 = false;
      }
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (!bVar6) goto LAB_0081e11f;
  }
  sVar5 = *(short *)(iVar8 + 0x44);
  if (*(int *)(iVar8 + 0x54) != 0) {
    (&DAT_009c1c44)[DAT_009c1c40 * 4] = 1;
    (&DAT_009c1c46)[iVar3 * 4] = (short)param_1;
    (&DAT_009c1c48)[iVar3 * 2] = *(undefined4 *)(sVar5 * 0x20 + iVar8 + 0x84);
    DAT_009c1c40 = DAT_009c1c40 + 1;
  }
  *(short *)(iVar8 + 0x44) = *(short *)(iVar8 + 0x44) + 1;
  *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
  if (*(short *)(iVar8 + 0x40) <= *(short *)(iVar8 + 0x44)) {
    *(undefined2 *)(iVar8 + 0x44) = 0;
  }
LAB_0081e11f:
  psVar1 = (short *)(iVar8 + 0x34 + param_2 * 2);
  if (*psVar1 == 0) {
    iVar8 = 0;
  }
  else {
    psVar2 = (short *)(iVar8 + 0x28 + param_2 * 2);
    iVar3 = *psVar2 * 0x20 + 0x7c + iVar8;
    *param_3 = (*(int *)(iVar3 + 4) << 1) >> 1;
    *param_4 = *(int *)(iVar3 + 4) >> 0x1f;
    *psVar2 = *psVar2 + 1;
    piVar4 = (int *)(iVar8 + 0x10 + param_2 * 4);
    *piVar4 = *piVar4 + 1;
    param_1 = 0;
    puVar9 = (uint *)(iVar8 + 0x10);
    do {
      if (*puVar9 <= *(uint *)(iVar8 + 0xc)) {
        bVar7 = false;
      }
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 1;
    } while ((bVar7) && (param_1 < (int)(uint)*(byte *)(iVar8 + 0x62)));
    if (bVar7) {
      *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
      *(int *)(iVar8 + 0x48) = *(int *)(iVar8 + 0x48) - ((*(int *)(iVar3 + 4) << 1) >> 1);
      *(int *)(iVar8 + 0x4c) = ((*(int *)(iVar3 + 4) << 1) >> 1) + *(int *)(iVar8 + 0x4c);
    }
    if (*(short *)(iVar8 + 0x40) <= *psVar2) {
      *psVar2 = 0;
    }
    *psVar1 = *psVar1 + -1;
    iVar8 = *(int *)(iVar3 + 8 + param_2 * 4);
    if (iVar8 == 0) {
      iVar8 = -1;
    }
  }
  return iVar8;
}

