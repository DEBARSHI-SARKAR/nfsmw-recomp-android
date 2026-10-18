/* speed.exe 006650a0 FUN_006650a0; analysis pseudocode, not buildable source.
 * calls 00664e50 FUN_00664e50
 */

undefined4 * __thiscall FUN_006650a0(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar4 != *(undefined4 **)(param_1 + 4)) && ((uint)puVar4[4] <= *param_2)) {
    return puVar4 + 6;
  }
  local_18[0] = *param_2;
  local_c = 0;
  local_10 = 0;
  local_4 = 0;
  local_8 = 0;
  piVar3 = (int *)FUN_00664e50(&param_2,puVar4,local_18);
  return (undefined4 *)(*piVar3 + 0x18);
}

