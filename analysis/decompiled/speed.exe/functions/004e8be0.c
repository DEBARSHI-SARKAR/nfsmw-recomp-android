/* speed.exe 004e8be0 FUN_004e8be0; analysis pseudocode, not buildable source.
 * calls 0081dafd FUN_0081dafd
 * calls 0081db11 FUN_0081db11
 */

undefined4 * __thiscall FUN_004e8be0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_00898dd0;
  param_1[7] = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = FUN_0081dafd(8);
  uVar3 = (uint)(param_3 - iVar1) >> 3;
  param_1[3] = uVar3 * 2;
  if (0x4f < uVar3 * 2) {
    param_1[1] = param_2;
    param_1[2] = param_2 + uVar3 * 4;
    uVar2 = FUN_0081db11(&LAB_004e8bd0,0,param_1,param_2 + uVar3 * 8,iVar1);
    param_1[7] = uVar2;
  }
  return param_1;
}

