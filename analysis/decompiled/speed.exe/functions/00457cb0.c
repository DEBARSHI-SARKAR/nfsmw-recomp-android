/* speed.exe 00457cb0 FUN_00457cb0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00457cb0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  
  if (*(short *)(param_1 + 4) == 0) {
    uVar1 = *(ushort *)(param_1 + 6);
    uVar3 = uVar1 & 0x7fff;
    piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                               (-(uint)(uVar3 < *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) &
                               uVar3) * 4) + 0x10);
    uVar3 = 0;
    if (*(short *)(param_1 + 2) != 0) {
      do {
        (**(code **)(*piVar2 + 0xc))
                  (*(undefined4 *)(((uVar1 & 0x8000) >> 0xc) + 8 + param_1 + uVar3 * 4));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(param_1 + 2));
    }
  }
  return;
}

