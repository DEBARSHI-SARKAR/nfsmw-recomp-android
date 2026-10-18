/* speed.exe 0066bee0 FUN_0066bee0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0066bee0(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = (uint)(param_2 == '\0');
  return (float10)*(float *)(iVar1 + 0x30 + uVar2 * 4) * (float10)_DAT_008a9388 +
         (float10)*(float *)(iVar1 + 0x28 + uVar2 * 4) * (float10)_DAT_00890dc4 *
         (float10)*(float *)(iVar1 + 0x40 + uVar2 * 4) * (float10)_DAT_00897188;
}

