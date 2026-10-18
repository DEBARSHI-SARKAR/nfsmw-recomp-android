/* speed.exe 00780270 FUN_00780270; analysis pseudocode, not buildable source.
 * calls 0077d880 FUN_0077d880
 * calls 0076b0d0 FUN_0076b0d0
 */

void __thiscall FUN_00780270(int param_1,undefined4 *param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar1 = param_3;
  puVar3 = *(undefined4 **)(param_1 + 4);
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_3[1] < (uint)puVar3[4]) {
        bVar4 = true;
      }
      else {
        bVar4 = *param_3 < (uint)puVar3[3];
      }
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  param_3 = puVar3;
  if (bVar4 != false) {
    if (puVar3 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar4 = true;
      goto LAB_007802d0;
    }
    FUN_0076b0d0();
  }
  if ((puVar1[1] <= param_3[4]) && (*puVar1 <= param_3[3])) {
    *param_2 = param_3;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
LAB_007802d0:
  puVar3 = (undefined4 *)FUN_0077d880(&param_3,bVar4,puVar3,puVar1);
  *param_2 = *puVar3;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

