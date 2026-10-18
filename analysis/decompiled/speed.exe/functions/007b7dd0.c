/* speed.exe 007b7dd0 FUN_007b7dd0; analysis pseudocode, not buildable source.
 * calls 007a4e50 FUN_007a4e50
 * calls 007a6e50 FUN_007a6e50
 * calls 007af4f0 FUN_007af4f0
 * calls 007aed20 FUN_007aed20
 * calls 007b5ef0 FUN_007b5ef0
 * calls 007b3f00 FUN_007b3f00
 * calls 007b1740 FUN_007b1740
 * calls 00747ac0 FUN_00747ac0
 */

void __thiscall FUN_007b7dd0(int param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  int iVar5;
  int ***pppiVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int ****ppppiVar10;
  int iStack_24;
  int **ppiStack_20;
  int iStack_1c;
  int ***pppiStack_14;
  int ***pppiStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00883428;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))();
  (**(code **)(*piVar1 + 0x3c))();
  pppiStack_14 = (int ***)&pppiStack_14;
  uStack_4 = 0;
  pppiStack_10 = pppiStack_14;
  uVar8 = FUN_007a6e50();
  FUN_007af4f0(0x42,&pppiStack_14,uVar8);
  iStack_1c = 0;
  iStack_24 = 1;
  ppiStack_20 = (int **)0x0;
  if (param_2 == -1) {
    ppiStack_20 = (int **)FUN_007aed20(0x42);
  }
  if ((int ****)pppiStack_14 != &pppiStack_14) {
    do {
      pppiVar6 = pppiStack_14;
      pppiVar3 = (int ***)*pppiStack_14;
      pppiVar4 = (int ***)pppiStack_14[1];
      *pppiVar4 = (int **)pppiVar3;
      pppiVar3[1] = (int **)pppiVar4;
      ppppiVar10 = (int ****)(pppiStack_14 + -1);
      cVar7 = FUN_00747ac0(0xeb0101e2,0);
      if ((int)cVar7 == *(int *)(param_1 + 0x1bc)) {
        uVar8 = FUN_007b5ef0(*(undefined4 *)(param_1 + 0x148),pppiVar6[4]);
        bVar2 = *(byte *)((int)pppiVar6[2] + 5);
        uVar9 = FUN_007a4e50(ppppiVar10,0);
        FUN_007b1740(ppppiVar10,0x294d2a3,bVar2 >> 5,0,uVar8,uVar9);
        if (((int ***)ppiStack_20 != (int ***)0x0) && (pppiVar6[2] == ppiStack_20)) {
          iStack_1c = iStack_24;
        }
        iStack_24 = iStack_24 + 1;
      }
      else {
        (*(code *)**ppppiVar10)(1);
      }
    } while ((int ****)pppiStack_14 != &pppiStack_14);
  }
  iVar5 = DAT_009b9e84;
  if (param_2 == -1) {
    if ((int ***)ppiStack_20 == (int ***)0x0) {
      param_2 = 1;
    }
    else {
      param_2 = iStack_1c;
    }
  }
  if (DAT_009b9e84 == 0) {
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    (**(code **)(*piVar1 + 0x40))(param_2);
  }
  else {
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    (**(code **)(*piVar1 + 0x40))(iVar5);
    DAT_009b9e84 = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_007b3f00();
  ExceptionList = pppiStack_10;
  return;
}

