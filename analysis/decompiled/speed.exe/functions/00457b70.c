/* speed.exe 00457b70 FUN_00457b70; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00457b70(int param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_2 < *(ushort *)(param_1 + 2)) {
    if (*(ushort *)(param_1 + 4) == 0) {
      puVar5 = *(undefined4 **)
                (((*(ushort *)(param_1 + 6) & 0x8000) >> 0xc) + param_1 + 8 + param_2 * 4);
    }
    else {
      puVar5 = (undefined4 *)
               (*(ushort *)(param_1 + 4) * param_2 + 8 +
               ((*(ushort *)(param_1 + 6) & 0x8000) >> 0xc) + param_1);
    }
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar1 != 0) {
    uVar3 = (uint)(uVar1 >> 2);
    if (param_3 == (undefined4 *)0x0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      return;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *param_3;
      param_3 = param_3 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    return;
  }
  uVar3 = *(ushort *)(param_1 + 6) & 0x7fff;
  piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                             (-(uint)(uVar3 < *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) & uVar3)
                             * 4) + 0x10);
  (**(code **)(*piVar2 + 0xc))(puVar5);
  uVar1 = *(ushort *)(param_1 + 6);
  uVar4 = (**(code **)(*piVar2 + 4))(param_2);
  *(undefined4 *)(((uVar1 & 0x8000) >> 0xc) + 8 + param_1 + param_2 * 4) = uVar4;
  return;
}

