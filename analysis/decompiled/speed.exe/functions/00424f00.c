/* speed.exe 00424f00 FUN_00424f00; analysis pseudocode, not buildable source.
 * calls 007e7cc0 FUN_007e7cc0
 * calls 007c4840 FID_conflict:_memcpy
 */

int __thiscall FUN_00424f00(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_007e7cc0();
  }
  uVar2 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (param_3 != 0) {
    puVar5 = (undefined4 *)(param_1 + 4);
    puVar4 = puVar5;
    puVar1 = puVar5;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      puVar1 = (undefined4 *)*puVar5;
    }
    FID_conflict__memcpy
              ((void *)((int)puVar4 + param_2),(void *)((int)puVar1 + param_3 + param_2),
               uVar2 - param_3);
    iVar3 = *(int *)(param_1 + 0x14) - param_3;
    *(int *)(param_1 + 0x14) = iVar3;
    if (0xf < *(uint *)(param_1 + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)((int)puVar5 + iVar3) = 0;
  }
  return param_1;
}

