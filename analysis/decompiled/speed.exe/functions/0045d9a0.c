/* speed.exe 0045d9a0 FUN_0045d9a0; analysis pseudocode, not buildable source.
 */

uint FUN_0045d9a0(uint param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *param_2;
  uVar2 = uVar1 ^ 0x1d872b41;
  uVar3 = uVar2 >> 5 ^ uVar2;
  *param_2 = uVar3 << 0x1b ^ uVar3 ^ uVar2;
  return uVar1 % param_1;
}

