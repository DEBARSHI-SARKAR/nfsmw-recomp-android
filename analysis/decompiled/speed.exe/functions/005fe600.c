/* speed.exe 005fe600 FUN_005fe600; analysis pseudocode, not buildable source.
 * calls 005fe090 FUN_005fe090
 */

void __thiscall FUN_005fe600(int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1958)) {
    piVar1 = (int *)(param_1 + 0x48);
    do {
      fVar3 = (float10)FUN_005fe090();
      piVar1[*piVar1 + 1] = (int)(float)fVar3;
      *piVar1 = *piVar1 + 1;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x65;
    } while (iVar2 < *(int *)(param_1 + 0x1958));
  }
  *(float *)(param_1 + 0x1980) = param_2 + *(float *)(param_1 + 0x1980);
  return;
}

