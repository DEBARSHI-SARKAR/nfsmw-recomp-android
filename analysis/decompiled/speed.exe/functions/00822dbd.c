/* speed.exe 00822dbd FUN_00822dbd; analysis pseudocode, not buildable source.
 */

void FUN_00822dbd(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (undefined4 *)(param_1 * 0x5c + DAT_009c2520);
  iVar4 = 0;
  *(undefined1 *)((int)puVar2 + 1) = 0;
  iVar3 = 0;
  puVar2[0xf] = 0;
  if (0 < DAT_0090bd18) {
    do {
      *(undefined4 *)(puVar2[0xd] + iVar3 * 4) = *(undefined4 *)(puVar2[0xe] + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0090bd18);
  }
  puVar1 = puVar2;
  if (DAT_009c2318._1_1_ != 0) {
    do {
      puVar1[1] = puVar1[7];
      iVar4 = iVar4 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar4 < (int)(uint)DAT_009c2318._1_1_);
  }
  *(undefined1 *)puVar2 = 2;
  return;
}

