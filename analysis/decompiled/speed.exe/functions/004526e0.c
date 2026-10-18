/* speed.exe 004526e0 FUN_004526e0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004526e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  
  piVar1 = (int *)((param_2 + 1) * 0x10 + *(int *)(param_1 + 0xc));
  if (*piVar1 == 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  piVar1[3] = param_4;
  *piVar1 = param_3;
  piVar1[1] = param_5;
  return;
}

