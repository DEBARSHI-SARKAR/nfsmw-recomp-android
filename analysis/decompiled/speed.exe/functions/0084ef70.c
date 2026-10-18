/* speed.exe 0084ef70 FUN_0084ef70; analysis pseudocode, not buildable source.
 */

uint FUN_0084ef70(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 *puVar6;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 < 0x40) || (0x7f < bVar1)) {
    iVar5 = *(int *)(unaff_EBX + 0xa8);
    uVar4 = *(uint *)(unaff_EBX + 0x9c);
    if ((int)(uVar4 + iVar5) % *(int *)(unaff_EBX + 0xa4) != *(int *)(unaff_EBX + 0xac)) {
      uVar3 = bVar1 - 0x80;
      if (uVar3 != (*(uint *)(unaff_EBX + 0xdc) + 1 & 0x3f)) {
        return (uint)(uVar3 == *(uint *)(unaff_EBX + 0xdc));
      }
      *(uint *)(unaff_EBX + 0xdc) = uVar3;
      goto LAB_0084f009;
    }
  }
  else {
    iVar2 = *(int *)(unaff_EBX + 0xa4);
    iVar5 = *(int *)(unaff_EBX + 0xa8);
    uVar4 = *(uint *)(unaff_EBX + 0x9c);
    if (*(int *)(unaff_EBX + 0xa0) <
        (iVar2 - ((iVar2 - *(int *)(unaff_EBX + 0xac)) + iVar5) % iVar2) / (int)uVar4) {
      *(uint *)(unaff_EBX + 0xd4) = bVar1 - 0x40;
LAB_0084f009:
      puVar6 = (undefined4 *)(*(int *)(unaff_EBX + 0xb0) + iVar5);
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *param_1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(int *)(unaff_EBX + 0x214) = *(int *)(unaff_EBX + 0x214) + 1;
      *(int *)(unaff_EBX + 0xa8) =
           (*(int *)(unaff_EBX + 0x9c) + *(int *)(unaff_EBX + 0xa8)) % *(int *)(unaff_EBX + 0xa4);
      *(uint *)(unaff_EBX + 0x218) = *(uint *)(unaff_EBX + 0x218) | 1;
      if (*(code **)(unaff_EBX + 0x3c) != (code *)0x0) {
        (**(code **)(unaff_EBX + 0x3c))();
      }
      *(int *)(unaff_EBX + 0x214) = *(int *)(unaff_EBX + 0x214) + -1;
      return 1;
    }
  }
  return 0xffffffff;
}

