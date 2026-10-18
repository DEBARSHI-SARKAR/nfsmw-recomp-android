/* speed.exe 00838b90 FUN_00838b90; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 00837bf0 FUN_00837bf0
 * calls 00838a90 FUN_00838a90
 * calls 0083e3b0 FUN_0083e3b0
 * calls 00847b60 FUN_00847b60
 */

undefined4 FUN_00838b90(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (param_2 == 0x100000) {
    iVar7 = 0;
    iVar3 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
    if (iVar3 != 0) {
      uVar4 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
      iVar3 = FUN_0083e390(uVar4);
      if (0 < iVar3) {
        while( true ) {
          iVar5 = FUN_00847b60(*(undefined4 *)(param_1 + 8));
          if (iVar5 != 0) {
            uVar4 = FUN_00847b60(*(undefined4 *)(param_1 + 8),iVar7);
            iVar5 = FUN_0083e3b0(uVar4);
            if ((((iVar5 != 0) && (piVar1 = *(int **)(iVar5 + 0x100), piVar1 != (int *)0x0)) &&
                (*piVar1 != 0)) &&
               (((uVar2 = *(uint *)(*piVar1 + 0xf8), (uVar2 & 0x100000) != 0 &&
                 ((uVar2 & 0xc0204) == 0)) && ((*(byte *)((int)piVar1 + 10) & 0x40) == 0)))) {
              iVar6 = iVar6 + 1;
            }
          }
          if (*(int *)(param_1 + 0x94) <= iVar6) break;
          iVar7 = iVar7 + 1;
          if (iVar3 <= iVar7) {
            return 1;
          }
        }
        iVar6 = FUN_00838a90(param_1);
        if (iVar6 != 0) {
          return 0;
        }
      }
    }
  }
  else if (param_2 == 0x200) {
    iVar6 = FUN_00837bf0(param_1,0x200);
    if (*(int *)(param_1 + 0x98) <= iVar6) {
      return 0;
    }
  }
  else if ((param_2 == 4) &&
          (iVar6 = FUN_00837bf0(param_1,0xc0004), *(int *)(param_1 + 0x90) <= iVar6)) {
    return 0;
  }
  return 1;
}

