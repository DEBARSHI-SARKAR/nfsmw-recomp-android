/* speed.exe 00836d40 FUN_00836d40; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e3b0 FUN_0083e3b0
 */

int FUN_00836d40(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_4;
  
  uVar4 = 0xffffffff;
  local_4 = -1;
  if ((param_1 == 0) || (*(int *)(param_1 + 0xc) == 0)) {
    return -1;
  }
  iVar3 = 0;
  iVar1 = FUN_0083e390(*(int *)(param_1 + 0xc));
  if (0 < iVar1) {
    do {
      iVar2 = FUN_0083e3b0(*(undefined4 *)(param_1 + 0xc),iVar3);
      if ((iVar2 != 0) &&
         (((param_2 == 0 || ((*(byte *)(iVar2 + 0x10) & 1) != 0)) &&
          (*(uint *)(iVar2 + 0xc) < uVar4)))) {
        uVar4 = *(uint *)(iVar2 + 0xc);
        local_4 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
    if (uVar4 != 0xffffffff) {
      *param_3 = uVar4;
      return local_4;
    }
  }
  *param_3 = *param_3;
  return local_4;
}

