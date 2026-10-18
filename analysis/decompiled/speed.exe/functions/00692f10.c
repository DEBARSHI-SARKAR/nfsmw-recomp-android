/* speed.exe 00692f10 FUN_00692f10; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 */

float10 __thiscall FUN_00692f10(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  
  iVar1 = *(int *)(param_1 + 0x160);
  uVar2 = FUN_00452940();
  if (param_2 < uVar2) {
    return (float10)*(float *)(*(int *)(param_1 + 0x160) + 0x78) *
           (float10)*(float *)(iVar1 + 8 + param_2 * 4);
  }
  pfVar3 = (float *)FUN_006269b0(4);
  return (float10)*(float *)(*(int *)(param_1 + 0x160) + 0x78) * (float10)*pfVar3;
}

