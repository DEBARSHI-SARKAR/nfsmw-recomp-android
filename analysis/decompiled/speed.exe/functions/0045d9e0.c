/* speed.exe 0045d9e0 FUN_0045d9e0; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x0045da18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045d9e0(float param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  uVar3 = uVar1 ^ 0x1d872b41;
  uVar2 = uVar3 >> 5 ^ uVar3;
  *param_2 = uVar2 << 0x1b ^ uVar2 ^ uVar3;
  return (float10)(uVar1 % 0x7fffffff) * (float10)param_1 * (float10)_DAT_00894158;
}

