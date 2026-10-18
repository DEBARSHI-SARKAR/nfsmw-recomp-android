/* speed.exe 00646ca0 FUN_00646ca0; analysis pseudocode, not buildable source.
 * calls 00629930 FUN_00629930
 * calls 00646280 FUN_00646280
 */

void __thiscall FUN_00646ca0(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar2 = param_3;
  puVar4 = *(undefined4 **)(param_1 + 4);
  bVar5 = true;
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar3 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar3;
      bVar5 = *param_3 < (uint)puVar4[3];
      if (bVar5) {
        puVar3 = (undefined4 *)*puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  param_3 = puVar4;
  if (bVar5) {
    if (puVar4 == (undefined4 *)**(int **)(param_1 + 4)) {
      puVar4 = (undefined4 *)FUN_00646280(&param_3,1,puVar4,puVar2);
      uVar1 = *puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      *param_2 = uVar1;
      return;
    }
    FUN_00629930();
  }
  if (param_3[3] < *puVar2) {
    puVar4 = (undefined4 *)FUN_00646280(&param_3,bVar5,puVar4,puVar2);
    *param_2 = *puVar4;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_2 + 1) = 0;
  *param_2 = param_3;
  return;
}

