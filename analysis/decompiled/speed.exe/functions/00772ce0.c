/* speed.exe 00772ce0 FUN_00772ce0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_00772ce0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)((param_2 + 0x17U & 0xfffffff0) + 4);
  if (*(int *)(DAT_009b38a0 + iVar1 * 4) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar3 = (undefined4 *)(param_1 + 0x24);
      do {
        if ((code *)*puVar3 != (code *)0x0) {
          (*(code *)*puVar3)(iVar1,0);
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
    puVar3 = *(undefined4 **)(DAT_009b38a0 + iVar1 * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      puVar3[3] = 0;
      FUN_005d0370(puVar3,0x18,0);
    }
    *(undefined4 *)(DAT_009b38a0 + iVar1 * 4) = 0;
  }
  return;
}

