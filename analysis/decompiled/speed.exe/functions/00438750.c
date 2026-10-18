/* speed.exe 00438750 FUN_00438750; analysis pseudocode, not buildable source.
 * calls 004358b0 FUN_004358b0
 * calls 0041c8e0 FUN_0041c8e0
 */

void __thiscall FUN_00438750(int param_1,undefined4 *param_2,short *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  psVar3 = param_3;
  puVar5 = *(undefined4 **)(param_1 + 4);
  bVar2 = true;
  if (*(char *)((int)puVar5[1] + 0xf) == '\0') {
    puVar4 = (undefined4 *)puVar5[1];
    do {
      puVar5 = puVar4;
      bVar2 = *param_3 < *(short *)(puVar5 + 3);
      if (bVar2) {
        puVar4 = (undefined4 *)*puVar5;
      }
      else {
        puVar4 = (undefined4 *)puVar5[2];
      }
    } while (*(char *)((int)puVar4 + 0xf) == '\0');
  }
  param_3 = (short *)puVar5;
  if (bVar2) {
    if (puVar5 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar5 = (undefined4 *)FUN_004358b0(&param_3,1,puVar5,psVar3);
      uVar1 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = uVar1;
      return;
    }
    FUN_0041c8e0();
  }
  if (*(short *)((int)param_3 + 0xc) < *psVar3) {
    puVar5 = (undefined4 *)FUN_004358b0(&param_3,bVar2,puVar5,psVar3);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = param_3;
  return;
}

