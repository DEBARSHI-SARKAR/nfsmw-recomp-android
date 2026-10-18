/* speed.exe 007eb350 FUN_007eb350; analysis pseudocode, not buildable source.
 * calls 007e9b30 FUN_007e9b30
 * calls 007e9f70 FUN_007e9f70
 * calls 007ea470 FUN_007ea470
 */

void __thiscall FUN_007eb350(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_c4 [96];
  int local_64;
  
  FUN_007e9b30();
  FUN_007ea470(local_c4);
  FUN_007e9f70(local_c4);
  *param_2 = *param_2 & 0xfffffbff;
  if (local_64 == 0) {
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

