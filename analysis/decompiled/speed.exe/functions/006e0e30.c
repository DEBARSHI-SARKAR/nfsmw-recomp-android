/* speed.exe 006e0e30 FUN_006e0e30; analysis pseudocode, not buildable source.
 * calls 006c93a0 FUN_006c93a0
 */

undefined4 * __thiscall FUN_006e0e30(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int iVar2;
  uint uVar3;
  
  *param_1 = 0x76453719;
  param_1[1] = 0x76453719;
  param_1[2] = 0x76453719;
  param_1[3] = 0xf6453719;
  param_1[4] = 0xf6453719;
  param_1[5] = 0xf6453719;
  iVar2 = 0;
  for (uVar3 = 0;
      (iVar1 = *(int *)(param_2 + 4), iVar1 != 0 &&
      (uVar3 < (uint)((*(int *)(param_2 + 8) - iVar1) / 0xc))); uVar3 = uVar3 + 1) {
    FUN_006c93a0(iVar2 + iVar1);
    iVar2 = iVar2 + 0xc;
    param_1 = extraout_ECX;
  }
  return param_1;
}

