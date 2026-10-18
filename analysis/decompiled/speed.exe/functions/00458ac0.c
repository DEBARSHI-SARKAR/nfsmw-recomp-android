/* speed.exe 00458ac0 FUN_00458ac0; analysis pseudocode, not buildable source.
 * calls 00458860 FUN_00458860
 * calls 00659250 FUN_00659250
 */

undefined4 * __fastcall FUN_00458ac0(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 0x2c);
  if (uVar1 != 0) {
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
    puVar5 = puVar2;
    for (uVar3 = (uint)(uVar1 >> 2); uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar3 = 0;
    if (*(short *)(*(int *)(param_1 + 8) + 0x2e) != 0) {
      pbVar4 = (byte *)(*(int *)(*(int *)(param_1 + 8) + 0x30) + 0xe);
      do {
        if (((*pbVar4 & 1) != 0) && ((*pbVar4 & 2) != 0)) {
          FUN_00458860((undefined1 *)((uint)*(ushort *)(pbVar4 + -6) + (int)puVar2),
                       *(undefined4 *)(pbVar4 + -10),0,*(undefined2 *)(pbVar4 + -2));
        }
        uVar3 = uVar3 + 1;
        pbVar4 = pbVar4 + 0x10;
      } while (uVar3 < *(ushort *)(*(int *)(param_1 + 8) + 0x2e));
    }
    return puVar2;
  }
  return (undefined4 *)0x0;
}

