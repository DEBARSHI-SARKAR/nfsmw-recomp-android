/* speed.exe 005edcb0 FUN_005edcb0; analysis pseudocode, not buildable source.
 * calls 005e6920 FUN_005e6920
 */

undefined4 __thiscall FUN_005edcb0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x9c);
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    *param_2 = piVar2[4];
    param_2[1] = piVar2[5];
    param_2[2] = piVar2[6];
    param_2[3] = piVar2[7];
    param_2 = param_2 + 4;
    FUN_005e6920();
    piVar1 = *(int **)(param_1 + 0x9c);
  }
  return *(undefined4 *)(param_1 + 0xa0);
}

