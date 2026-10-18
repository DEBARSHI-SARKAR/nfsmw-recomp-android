/* speed.exe 0045da30 FUN_0045da30; analysis pseudocode, not buildable source.
 */

uint FUN_0045da30(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  param_1 = DAT_008ec4e0 % param_1;
  uVar1 = DAT_008ec4e0 ^ 0x1d872b41;
  uVar2 = uVar1 >> 5 ^ uVar1;
  DAT_008ec4e0 = uVar2 << 0x1b ^ uVar2 ^ uVar1;
  return param_1;
}

