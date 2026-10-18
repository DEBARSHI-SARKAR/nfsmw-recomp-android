/* speed.exe 007eb270 FUN_007eb270; analysis pseudocode, not buildable source.
 * calls 007e9b30 FUN_007e9b30
 * calls 007ea9a0 FUN_007ea9a0
 * calls 007ea3b0 FUN_007ea3b0
 */

void __thiscall FUN_007eb270(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_c4 [80];
  int local_74;
  
  FUN_007e9b30();
  FUN_007ea3b0(local_c4);
  FUN_007ea9a0(local_c4);
  *param_2 = *param_2 & 0xfffffbff;
  if (local_74 == 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    if (*(int *)(param_1 + 8) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(param_1 + *(int *)(param_1 + 8));
    }
    if (param_2[2] == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)((int)param_2 + param_2[2]);
    }
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return;
}

