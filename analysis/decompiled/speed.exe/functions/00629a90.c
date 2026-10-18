/* speed.exe 00629a90 FUN_00629a90; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 */

undefined4 * FUN_00629a90(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar1 = DAT_00920390;
  if (param_2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_00460c50(param_2);
  puVar4 = puVar1;
  for (uVar3 = iVar2 + 1U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = iVar2 + 1U & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  uVar3 = iVar2 + 0x10U & 0xfffffff0;
  *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + uVar3;
  DAT_00920390 = (undefined4 *)((int)DAT_00920390 + uVar3);
  return puVar1;
}

