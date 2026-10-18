/* speed.exe 006a29e0 FUN_006a29e0; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 00452940 FUN_00452940
 */

float10 __thiscall FUN_006a29e0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  uVar2 = FUN_00452940();
  if (param_2 < uVar2) {
    return (float10)*(float *)(iVar1 + 0x48 + param_2 * 4);
  }
  pfVar3 = (float *)FUN_006269b0(4);
  return (float10)*pfVar3;
}

