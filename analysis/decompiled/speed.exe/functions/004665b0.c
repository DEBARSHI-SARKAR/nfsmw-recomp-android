/* speed.exe 004665b0 FUN_004665b0; analysis pseudocode, not buildable source.
 */

void FUN_004665b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  undefined4 local_10 [4];
  
  if (param_1 == param_2) {
    local_20[0] = *(undefined4 *)(param_1 + 0x20);
    local_20[1] = *(undefined4 *)(param_1 + 0x24);
    local_20[2] = *(undefined4 *)(param_1 + 0x28);
    local_20[3] = *(undefined4 *)(param_1 + 0x2c);
    local_10[0] = *(undefined4 *)(param_1 + 0x30);
    local_10[1] = *(undefined4 *)(param_1 + 0x34);
    local_10[3] = *(undefined4 *)(param_1 + 0x3c);
    local_10[2] = *(undefined4 *)(param_1 + 0x38);
    puVar1 = (undefined4 *)(param_2 + 8);
    puVar2 = local_20;
    iVar3 = 4;
    do {
      puVar1[-2] = puVar2[-8];
      puVar1[-1] = puVar2[-4];
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[4];
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x20);
  puVar2 = (undefined4 *)(param_2 + 8);
  iVar3 = 4;
  do {
    puVar2[-2] = puVar1[-8];
    puVar2[-1] = puVar1[-4];
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[4];
    puVar2 = puVar2 + 4;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

