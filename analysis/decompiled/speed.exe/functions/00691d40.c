/* speed.exe 00691d40 FUN_00691d40; analysis pseudocode, not buildable source.
 * calls 00672fe0 FUN_00672fe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00691d40(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00672fe0(param_1 + 0x144,param_2);
  fVar1 = (float)(((float10)*(float *)(param_1 + 0x98) + (float10)_DAT_0089096c) *
                 fVar3 * (float10)_DAT_008a938c);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x48) + 0x58))();
  if (iVar2 != 6) {
    return (float10)fVar1 * (float10)*(float *)(param_1 + 0xfc);
  }
  return (float10)fVar1;
}

