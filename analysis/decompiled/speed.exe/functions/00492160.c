/* speed.exe 00492160 FUN_00492160; analysis pseudocode, not buildable source.
 * calls 00491350 FUN_00491350
 * calls 00492160 FUN_00492160
 * calls 00491360 FUN_00491360
 */

void __thiscall FUN_00492160(uint *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1[2] == 0) {
    iVar7 = DAT_008ee4e0 << 2;
    param_1[1] = DAT_008ee4e0;
    uVar5 = (*(code *)PTR_FUN_008ee4d0)(iVar7,"EAGL4::SymbolPool::mpSymbolTable");
    param_1[2] = uVar5;
    uVar5 = 0;
    if (param_1[1] != 0) {
      do {
        *(undefined4 *)(param_1[2] + uVar5 * 4) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_1[1]);
    }
  }
  uVar5 = 0;
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    pcVar1 = param_2 + 1;
    uVar5 = uVar5 ^ uVar5 << 5 ^ (int)cVar2;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  uVar5 = uVar5 % param_1[1];
  uVar3 = param_1[2];
  iVar7 = *(int *)(uVar3 + uVar5 * 4);
  while (iVar7 != 0) {
    uVar5 = uVar5 + 1;
    if (param_1[1] <= uVar5) {
      uVar5 = 0;
    }
    iVar7 = *(int *)(uVar3 + uVar5 * 4);
  }
  *(undefined4 *)(uVar3 + uVar5 * 4) = param_3;
  uVar5 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar5 + 1;
  if (uVar3 <= uVar5 + 1) {
    uVar5 = param_1[2];
    param_1[1] = uVar3 * 2;
    uVar6 = (*(code *)PTR_FUN_008ee4d0)(uVar3 << 3,"EAGL4::SymbolPool::mpSymbolTable");
    param_1[2] = uVar6;
    uVar6 = 0;
    if (param_1[1] != 0) {
      do {
        *(undefined4 *)(param_1[2] + uVar6 * 4) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_1[1]);
    }
    *param_1 = 0;
    if (0 < (int)uVar3) {
      iVar7 = 0;
      do {
        iVar4 = *(int *)(uVar5 + iVar7 * 4);
        FUN_00492160(iVar4 + 4,iVar4);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar3);
    }
    if (uVar5 != 0) {
      (*(code *)PTR_FUN_008ee4d4)(uVar5,uVar3);
    }
  }
  return;
}

