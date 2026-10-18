/* speed.exe 00831d15 FUN_00831d15; analysis pseudocode, not buildable source.
 * calls 00831cd3 FUN_00831cd3
 */

short * FUN_00831d15(short *param_1)

{
  short *psVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int *local_8;
  
  iVar2 = FUN_00831cd3(param_1,&local_8);
  if (iVar2 != 0) {
    iVar2 = *local_8;
    iVar4 = 0;
    if (*(ushort *)(iVar2 + 0x10) != 0) {
      puVar3 = (ushort *)(iVar2 + 0x18);
      do {
        psVar1 = (short *)(iVar2 + (uint)*puVar3 * 4);
        if (*psVar1 == *param_1) {
          return psVar1;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < (int)(uint)*(ushort *)(iVar2 + 0x10));
    }
  }
  return (short *)0x0;
}

