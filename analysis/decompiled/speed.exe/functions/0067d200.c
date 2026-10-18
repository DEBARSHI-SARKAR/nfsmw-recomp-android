/* speed.exe 0067d200 FUN_0067d200; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0067d200(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_3) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 **)(param_1 + 4)) && ((uint)puVar3[3] <= *param_3)) {
    *param_2 = puVar3;
    return;
  }
  *param_2 = *(undefined4 **)(param_1 + 4);
  return;
}

