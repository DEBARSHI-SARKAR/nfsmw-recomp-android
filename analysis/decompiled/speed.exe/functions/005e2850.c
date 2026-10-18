/* speed.exe 005e2850 FUN_005e2850; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005e2850(int param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*param_2 >> ((byte)*(undefined4 *)(DAT_0091e00c + 0x5c) & 0x1f)) << 8 | (uint)param_3;
  iVar5 = 0;
  iVar3 = *(ushort *)(param_1 + 0x1a) - 1;
  if (-1 < iVar3) {
    do {
      iVar2 = iVar3 + iVar5 >> 1;
      uVar1 = *(uint *)(*(int *)(param_1 + 0x1c) + iVar2 * 8);
      if (uVar1 < uVar4) {
        iVar5 = iVar2 + 1;
      }
      else {
        if (uVar1 <= uVar4) {
          return *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + iVar2 * 8);
        }
        iVar3 = iVar2 + -1;
      }
    } while (iVar5 <= iVar3);
  }
  return 0;
}

