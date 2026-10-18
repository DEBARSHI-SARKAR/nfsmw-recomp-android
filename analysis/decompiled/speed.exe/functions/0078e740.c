/* speed.exe 0078e740 FUN_0078e740; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0078e740(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_2 * 0x30 + 0x48 + param_1);
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)_DAT_00891214;
  }
  return fVar2 * (float10)_DAT_00890d60;
}

