/* speed.exe 0080727c FUN_0080727c; analysis pseudocode, not buildable source.
 * calls 00806f24 FUN_00806f24
 */

int FUN_0080727c(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x150;
  iVar2 = FUN_00806f24(iVar3,*(undefined1 *)(param_1 + (param_3 * 5 + 0x3c0) * 2 + param_2));
  if (iVar2 == 0) {
    puVar1 = (undefined1 *)((param_2 + param_3 * 10) * 9 + 0x7a8 + param_1);
    iVar2 = FUN_00806f24(iVar3,*puVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_00806f24(iVar3,puVar1[1]);
      if (iVar2 == 0) {
        param_2 = FUN_00806f24(iVar3,puVar1[3]);
        param_2 = param_2 << 1;
      }
      else {
        param_2 = FUN_00806f24(iVar3,puVar1[4]);
        param_2 = param_2 + 3;
      }
    }
    else {
      iVar2 = FUN_00806f24(iVar3,puVar1[2]);
      if (iVar2 == 0) {
        param_2 = 1;
        iVar3 = FUN_00806f24(iVar3,puVar1[5]);
        if (iVar3 != 0) {
          param_2 = 7;
        }
      }
      else {
        iVar2 = FUN_00806f24(iVar3,puVar1[6]);
        if (iVar2 == 0) {
          param_2 = FUN_00806f24(iVar3,puVar1[7]);
          param_2 = param_2 + 5;
        }
        else {
          param_2 = FUN_00806f24(iVar3,puVar1[8]);
          param_2 = param_2 + 8;
        }
      }
    }
  }
  return param_2;
}

