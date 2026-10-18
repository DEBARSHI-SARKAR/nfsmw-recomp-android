/* speed.exe 00454210 FUN_00454210; analysis pseudocode, not buildable source.
 * calls 00453a20 FUN_00453a20
 */

undefined4 __thiscall FUN_00454210(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_2 != 0) && (uVar2 = FUN_00453a20(param_2), uVar2 < (uint)param_1[1])) &&
      ((iVar1 = *param_1 + uVar2 * 0xc, (*(byte *)(iVar1 + 0xb) & 0x10) != 0 ||
       (*(int *)(iVar1 + 4) != iVar1)))) && (iVar1 != 0)) {
    return 1;
  }
  iVar1 = *(int *)(param_1[5] + 8);
  if (((param_2 != 0) && (uVar2 = FUN_00453a20(param_2), uVar2 < *(uint *)(iVar1 + 0x10))) &&
     (((iVar1 = *(int *)(iVar1 + 0xc) + uVar2 * 0xc, (*(byte *)(iVar1 + 0xb) & 0x10) != 0 ||
       (*(int *)(iVar1 + 4) != iVar1)) && (iVar1 != 0)))) {
    return 1;
  }
  return 0;
}

