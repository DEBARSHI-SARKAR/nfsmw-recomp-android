/* speed.exe 00804cc1 FUN_00804cc1; analysis pseudocode, not buildable source.
 */

uint FUN_00804cc1(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)param_2 >> 0x1f;
  iVar1 = (uVar3 ^ param_2) - uVar3;
  uVar4 = (uint)(iVar1 < param_1 * 2) * iVar1 - param_1;
  uVar2 = (int)uVar4 >> 0x1f;
  return (uVar2 - (uVar2 ^ uVar4)) + uVar3 + param_1 ^ uVar3;
}

