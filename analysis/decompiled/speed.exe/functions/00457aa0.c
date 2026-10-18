/* speed.exe 00457aa0 FUN_00457aa0; analysis pseudocode, not buildable source.
 * calls 00453890 FUN_00453890
 */

void __thiscall FUN_00457aa0(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar1 == 0) {
    uVar4 = *(ushort *)(param_1 + 6) & 0x7fff;
    piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_0090dcbc + 4) + 0x20) +
                               (-(uint)(uVar4 < *(uint *)(*(int *)(DAT_0090dcbc + 4) + 0x18)) &
                               uVar4) * 4) + 0x10);
    iVar3 = *piVar2;
    uVar5 = FUN_00453890(param_2);
    (**(code **)(iVar3 + 0xc))(uVar5);
    uVar1 = *(ushort *)(param_1 + 6);
    uVar5 = (**(code **)*piVar2)(param_2);
    *(undefined4 *)(((uVar1 & 0x8000) >> 0xc) + 8 + param_1 + param_2 * 4) = uVar5;
    return;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)FUN_00453890(param_2);
    for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    return;
  }
  puVar6 = (undefined4 *)FUN_00453890(param_2);
  for (uVar4 = (uint)(uVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  return;
}

