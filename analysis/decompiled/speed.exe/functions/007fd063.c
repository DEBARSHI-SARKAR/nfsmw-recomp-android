/* speed.exe 007fd063 FUN_007fd063; analysis pseudocode, not buildable source.
 */

void FUN_007fd063(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    iVar1 = iVar2 + 0x140;
    iVar2 = iVar2 + 1;
    *(short *)(param_1[0x60] + (uint)*(byte *)((int)param_1 + iVar1) * 2) =
         *(short *)(&DAT_008c38b8 + *param_1) << 2;
  } while (iVar2 < 0x40);
  *(undefined2 *)param_1[0x60] = (&DAT_008c3eb8)[*param_1] << 2;
  iVar2 = 1;
  do {
    iVar1 = iVar2 + 0x140;
    iVar2 = iVar2 + 1;
    *(short *)(param_1[0x61] + (uint)*(byte *)((int)param_1 + iVar1) * 2) =
         *(short *)(&DAT_008c39b8 + *param_1 * 4) << 2;
  } while (iVar2 < 0x40);
  *(short *)param_1[0x61] = *(short *)(&DAT_008c3f38 + *param_1 * 2) << 2;
  return;
}

