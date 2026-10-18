/* speed.exe 0074d070 FUN_0074d070; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_0074d070(int param_1)

{
  int iVar1;
  ushort uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(ushort *)(param_1 + 10);
  if (uVar2 != 0xffff) {
    iVar5 = (int)*(short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
    psVar3 = (short *)(*(int *)(DAT_009b09d4 + 0x14) + (uint)uVar2 * 2);
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        psVar3 = psVar3 + 1;
        iVar1 = *(int *)(DAT_009b09d4 + 0x1c) + *psVar3 * 8;
        if (*(int *)(*(int *)(DAT_009b09d4 + 0x1c) + *psVar3 * 8) == -0x144fc19a) {
          if (iVar1 == 0) {
            return 0;
          }
          return *(undefined4 *)(iVar1 + 4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
  }
  return 0;
}

