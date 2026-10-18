/* speed.exe 005b5840 FUN_005b5840; analysis pseudocode, not buildable source.
 * calls 005aecb0 FUN_005aecb0
 */

void FUN_005b5840(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  bVar1 = *(byte *)(param_1 + 1);
  iVar2 = (*(int *)(param_1 + 4) << 8) >> 8;
  if (iVar2 < param_2) {
    iVar3 = FUN_005aecb0(iVar2 - param_2);
    iVar2 = *(int *)(iVar3 + 4);
    if ((iVar2 == 0) || (param_2 <= *(int *)(iVar3 + 0xc))) goto LAB_005b589f;
  }
  else {
    iVar3 = FUN_005aecb0(param_2);
    iVar2 = *(int *)(iVar3 + 8);
    if ((iVar2 == 0) || (*(int *)(iVar3 + 0xc) <= param_2)) {
LAB_005b589f:
      puVar5 = (undefined4 *)(iVar3 + 0x10);
      for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_3 = *puVar5;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + 1;
      }
      for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)param_3 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
      return;
    }
  }
  puVar5 = (undefined4 *)(iVar2 + 0x10);
  for (uVar4 = (uint)(bVar1 >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 1;
  }
  for (uVar4 = bVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)param_3 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    param_3 = (undefined4 *)((int)param_3 + 1);
  }
  return;
}

