/* speed.exe 00709d00 FUN_00709d00; analysis pseudocode, not buildable source.
 */

uint FUN_00709d00(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)0x4;
  uVar2 = (param_2 == (int *)&DAT_00000004) - 1 & (uint)param_2;
  if (param_2 != (int *)&DAT_00000004) {
    puVar4 = (undefined1 *)((int)param_2 + 1);
  }
  if ((int)uVar2 < (int)puVar4) {
    puVar3 = &DAT_00993398 + uVar2 * 5;
    do {
      piVar1 = (int *)*puVar3;
      if ((piVar1 != (int *)0x0) &&
         (param_2 = (int *)(puVar3[1] - (int)piVar1 >> 2), param_2 != (int *)0x0)) {
        for (param_2 = piVar1; param_2 != (int *)puVar3[1]; param_2 = param_2 + 1) {
          if (*(int *)(*param_2 + 8) == param_1) {
            return CONCAT31((int3)((uint)param_2 >> 8),1);
          }
        }
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 5;
    } while ((int)uVar2 < (int)puVar4);
  }
  return (uint)param_2 & 0xffffff00;
}

