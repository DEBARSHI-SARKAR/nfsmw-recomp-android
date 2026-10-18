/* speed.exe 00712430 FUN_00712430; analysis pseudocode, not buildable source.
 * calls 007103e0 FUN_007103e0
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall FUN_00712430(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) & 3U) == 0) &&
     (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0x10) + 4U >> 2)) {
    FUN_007103e0(1);
  }
  uVar4 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  uVar3 = uVar4 >> 2;
  if (*(uint *)(param_1 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(param_1 + 8);
  }
  if (*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) == 0) {
    uVar2 = FUN_005d29d0(0x10,&PTR_LAB_004c5452_1_00890f10);
    *(undefined4 *)(*(int *)(param_1 + 4) + uVar3 * 4) = uVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

