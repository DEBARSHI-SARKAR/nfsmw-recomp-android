/* speed.exe 004e8e10 FUN_004e8e10; analysis pseudocode, not buildable source.
 */

void FUN_004e8e10(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar2 = *(int *)(DAT_00911fa8 + 0x84);
  puVar5 = &DAT_0091429c;
  uVar3 = DAT_0091429c;
  while (uVar3 != 0) {
    uVar3 = *puVar5;
    iVar4 = *(int *)(iVar2 + 0x28);
    puVar1 = puVar5 + 1;
    uVar6 = uVar3 >> 8 & 0xff;
    puVar5 = puVar5 + 2;
    if ((*(int *)(iVar4 + 4 + uVar6 * 4) != 0) &&
       (iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + uVar6 * 4), iVar4 != 0)) {
      iVar4 = **(int **)(*(int *)(*(int *)(iVar4 + 0x5c) + 0x10) + (uVar3 & 0xff) * 8);
      *(uint *)(iVar4 + 4) = *puVar1 * -0x10000 | *(uint *)(iVar4 + 4) & 0xffff;
    }
    uVar3 = *puVar5;
  }
  return;
}

