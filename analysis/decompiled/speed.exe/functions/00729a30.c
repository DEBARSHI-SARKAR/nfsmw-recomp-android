/* speed.exe 00729a30 FUN_00729a30; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00729a30(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(param_1 + 0x60 + param_2 * 4);
  if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
    *(int *)(param_1 + 0x2c20) = *(int *)(param_1 + 0x2c20) + -1;
    puVar2 = *(undefined4 **)(param_1 + 0x6428);
    *puVar2 = piVar1;
    *(int **)(param_1 + 0x6428) = piVar1;
    piVar1[1] = (int)puVar2;
    *piVar1 = param_1 + 0x6424;
    *(undefined4 *)(param_1 + 0x60 + param_2 * 4) = 0;
  }
  return;
}

