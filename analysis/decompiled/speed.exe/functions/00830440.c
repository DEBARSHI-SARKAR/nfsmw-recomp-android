/* speed.exe 00830440 FUN_00830440; analysis pseudocode, not buildable source.
 * calls 0082fe00 FUN_0082fe00
 * calls 0082ff80 FUN_0082ff80
 * calls 00830260 FUN_00830260
 */

void FUN_00830440(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_148 [80];
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(DAT_009c2964 + 0x1100);
  puVar9 = *(undefined4 **)(DAT_009c2964 + 0x40 + param_1 * 4);
  sVar1 = *(short *)(puVar9 + 1);
  if (sVar1 < 0) {
    return;
  }
  puVar7 = puVar9;
  puVar8 = local_148;
  for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar2 = (int)sVar1;
  if ((iVar2 < 0) || ((int)(uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x18) + 0x12) < iVar2)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(DAT_009c2964 + 0x18) +
            (uint)*(ushort *)(*(int *)(DAT_009c2964 + 0x1c) + iVar2 * 2) * 4;
  }
  iVar3 = (int)(puVar9[2] << 7) >> 0x1b;
  iVar6 = (-(uint)((puVar9[2] & 0x8000000) != 0) & 2) - 1;
  cVar5 = (char)iVar6;
  if ((((iVar3 < 1) || ((*(byte *)(iVar4 + 0xc) & 2) == 0)) ||
      ((int)((*(uint *)(iVar4 + 4) >> 0x14 & 0xf) * (uint)*(byte *)(iVar4 + 7)) < iVar3)) &&
     (iVar2 = FUN_0082fe00(iVar2,*(undefined1 *)((int)puVar9 + 1),1), iVar3 = iVar6,
     DAT_009c2968 != (code *)0x0)) {
    if (iVar2 < 0) {
      (*DAT_009c2968)(*(undefined4 *)(DAT_009c2964 + 0x14),iVar2);
      goto LAB_0083050e;
    }
  }
  else {
LAB_0083050e:
    cVar5 = (char)iVar3;
    if (iVar2 < 0) goto LAB_00830531;
  }
  iVar2 = FUN_00830260((int)*(short *)(puVar9 + 1),iVar2,*(undefined1 *)((int)puVar9 + 1),1);
LAB_00830531:
  *(short *)(puVar9 + 1) = (short)iVar2;
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)cVar5;
  }
  puVar9[2] = puVar9[2] ^ (iVar2 << 0x14 ^ puVar9[2]) & 0x1f00000U;
  iVar2 = FUN_0082ff80(puVar9);
  if ((iVar2 < 0) && (iVar2 != -9999)) {
    *(undefined4 *)(DAT_009c2964 + 0x1100) = local_8;
    puVar7 = local_148;
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  return;
}

