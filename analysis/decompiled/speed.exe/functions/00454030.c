/* speed.exe 00454030 FUN_00454030; analysis pseudocode, not buildable source.
 * calls 00453a20 FUN_00453a20
 */

int __thiscall FUN_00454030(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  for (piVar2 = param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[4]) {
    if ((param_2 != 0) && (uVar3 = FUN_00453a20(param_2), uVar3 < (uint)piVar2[1])) {
      iVar1 = *piVar2 + uVar3 * 0xc;
      if ((((*(byte *)(iVar1 + 0xb) & 0x10) != 0) || (*(int *)(iVar1 + 4) != iVar1)) && (iVar1 != 0)
         ) {
        *param_3 = piVar2;
        return iVar1;
      }
    }
  }
  if (param_1[6] != 0) {
    iVar1 = *(int *)(param_1[5] + 8);
    if ((param_2 != 0) && (uVar3 = FUN_00453a20(param_2), uVar3 < *(uint *)(iVar1 + 0x10))) {
      iVar1 = *(int *)(iVar1 + 0xc) + uVar3 * 0xc;
      if ((((*(byte *)(iVar1 + 0xb) & 0x10) != 0) || (*(int *)(iVar1 + 4) != iVar1)) && (iVar1 != 0)
         ) {
        *param_3 = param_1;
        return iVar1;
      }
    }
  }
  *param_3 = 0;
  return 0;
}

