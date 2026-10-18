/* speed.exe 00455f70 FUN_00455f70; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00455f70(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  piVar1 = *(int **)(param_1 + 0x30);
  for (piVar2 = piVar1; (piVar2 != piVar1 + *(uint *)(param_1 + 0x34) && (*piVar2 != *param_2));
      piVar2 = piVar2 + 1) {
  }
  uVar3 = (int)piVar2 - (int)piVar1 >> 2;
  if (*(uint *)(param_1 + 0x34) <= uVar3) {
    uVar3 = 0xffffffff;
  }
  puVar4 = (undefined4 *)(uVar3 * 0x10 + *(int *)(param_1 + 0x2c));
  puVar4[3] = param_4;
  *puVar4 = param_3;
  puVar4[1] = 0;
  return;
}

