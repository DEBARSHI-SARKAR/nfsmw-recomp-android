/* speed.exe 0045da70 FUN_0045da70; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x0045daab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0045da70(float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_008ec4e0 % 0x7fffffff;
  uVar2 = DAT_008ec4e0 ^ 0x1d872b41;
  uVar1 = uVar2 >> 5 ^ uVar2;
  DAT_008ec4e0 = uVar1 << 0x1b ^ uVar1 ^ uVar2;
  return (float10)uVar3 * (float10)param_1 * (float10)_DAT_00894158;
}

