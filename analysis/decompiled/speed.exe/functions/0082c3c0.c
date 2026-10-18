/* speed.exe 0082c3c0 FUN_0082c3c0; analysis pseudocode, not buildable source.
 */

void FUN_0082c3c0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(DAT_009c2964 + 0x18);
  iVar3 = 0;
  iVar4 = DAT_009c2964;
  if (*(char *)(iVar2 + 0xf) != '\0') {
    do {
      iVar2 = iVar2 + *(short *)(*(int *)(iVar4 + 0x24) + iVar3 * 2) * 4;
      if (iVar2 != 0) {
        puVar1 = (uint *)(iVar2 + 0x10);
        *puVar1 = *puVar1 & 0xfffdffff;
        iVar4 = DAT_009c2964;
      }
      iVar2 = *(int *)(iVar4 + 0x18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(iVar2 + 0xf));
  }
  return;
}

