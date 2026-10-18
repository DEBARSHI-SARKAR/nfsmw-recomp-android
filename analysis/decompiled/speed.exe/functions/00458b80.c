/* speed.exe 00458b80 FUN_00458b80; analysis pseudocode, not buildable source.
 * calls 00458ac0 FUN_00458ac0
 * calls 00659250 FUN_00659250
 */

undefined4 * __thiscall FUN_00458b80(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 0x2c);
  if (uVar1 == 0) {
    return (undefined4 *)0x0;
  }
  if (param_2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_00458ac0();
    return puVar2;
  }
  DAT_0090dcd4 = DAT_0090dcd4 + uVar1;
  if (DAT_0090dcd0 < DAT_0090dcd4) {
    DAT_0090dcd0 = DAT_0090dcd4;
  }
  if (uVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)**(undefined4 **)PTR_PTR_008f7ea8)((uint)uVar1,0);
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 0x2c);
  if (uVar1 != 0) {
    puVar4 = puVar2;
    for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return puVar2;
}

