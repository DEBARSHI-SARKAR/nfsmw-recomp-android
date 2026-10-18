/* speed.exe 005f2290 FUN_005f2290; analysis pseudocode, not buildable source.
 * calls 005ef860 FUN_005ef860
 * calls 005e6ec0 FUN_005e6ec0
 */

void __thiscall FUN_005f2290(int param_1,undefined4 *param_2,short *param_3)

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
      puVar5 = (undefined4 *)FUN_005ef860(&param_3,1,puVar5,psVar3);
      uVar1 = *puVar5;
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = uVar1;
      return;
    }
    FUN_005e6ec0();
  }
  if (*(short *)((int)param_3 + 0xc) < *psVar3) {
    puVar5 = (undefined4 *)FUN_005ef860(&param_3,bVar2,puVar5,psVar3);
    *param_2 = *puVar5;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = param_3;
  return;
}

