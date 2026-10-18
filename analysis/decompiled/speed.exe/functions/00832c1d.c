/* speed.exe 00832c1d FUN_00832c1d; analysis pseudocode, not buildable source.
 */

void FUN_00832c1d(int param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = &DAT_009c2a60;
  do {
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (piVar3[1] == param_1)) {
      uVar1 = *(ushort *)(iVar2 + 0x10);
      iVar4 = 0;
      if (*(char *)(iVar2 + 0x12) != '\0') {
        do {
          *(undefined1 *)(iVar4 + ((uint)uVar1 * 2 + 3 & 0xfffffffc) + 0x18 + iVar2) = 0xff;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(byte *)(*piVar3 + 0x12));
      }
    }
    piVar3 = piVar3 + 2;
  } while ((int)piVar3 < 0x9c2aa0);
  return;
}

