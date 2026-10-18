/* speed.exe 007252a0 FUN_007252a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007252a0(int param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x1d0);
  piVar1 = (int *)(param_1 + 8);
  iVar3 = 5;
  *(float *)(param_1 + 0x1e4) = param_2 + *(float *)(param_1 + 0x1e4);
  do {
    if (piVar1[1] == 1) {
      *piVar1 = *piVar1 + 1;
      if ((piVar1[-1] == 0) || (piVar1[-1] == 2)) {
        piVar1[1] = 0;
        *puVar2 = 0;
      }
    }
    puVar2 = puVar2 + 1;
    piVar1 = piVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

