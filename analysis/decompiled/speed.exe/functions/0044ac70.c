/* speed.exe 0044ac70 FUN_0044ac70; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

void __thiscall FUN_0044ac70(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = _malloc(0x14);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[2] = *param_2;
    piVar2[3] = (int)param_2;
    piVar2[4] = param_3;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  *puVar1 = piVar2;
  *(int **)(param_1 + 0x18) = piVar2;
  piVar2[1] = (int)puVar1;
  *piVar2 = param_1 + 0x14;
  return;
}

