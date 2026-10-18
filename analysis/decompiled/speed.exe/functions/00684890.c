/* speed.exe 00684890 FUN_00684890; analysis pseudocode, not buildable source.
 * calls 00683ad0 FUN_00683ad0
 */

undefined4 * __thiscall FUN_00684890(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_8 [2];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar4 != *(undefined4 **)(param_1 + 4)) && ((int)puVar4[3] <= *param_2)) {
    return puVar4 + 4;
  }
  local_8[0] = *param_2;
  local_8[1] = 0;
  piVar3 = (int *)FUN_00683ad0(&param_2,puVar4,local_8);
  return (undefined4 *)(*piVar3 + 0x10);
}

