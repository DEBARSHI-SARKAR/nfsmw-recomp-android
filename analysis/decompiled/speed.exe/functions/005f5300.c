/* speed.exe 005f5300 FUN_005f5300; analysis pseudocode, not buildable source.
 * calls 005f36a0 FUN_005f36a0
 */

undefined4 * __thiscall FUN_005f5300(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_14 [5];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  if ((puVar4 != *(undefined4 **)(param_1 + 4)) && ((uint)puVar4[3] <= *param_2)) {
    return puVar4 + 4;
  }
  local_14[0] = *param_2;
  local_14[2] = 0;
  local_14[1] = 0;
  local_14[4] = 0;
  local_14[3] = 0;
  piVar3 = (int *)FUN_005f36a0(&param_2,puVar4,local_14);
  return (undefined4 *)(*piVar3 + 0x10);
}

