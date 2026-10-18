/* speed.exe 007b76c0 FUN_007b76c0; analysis pseudocode, not buildable source.
 * calls 007a4e50 FUN_007a4e50
 * calls 007af4f0 FUN_007af4f0
 * calls 007b5ef0 FUN_007b5ef0
 * calls 00460bf0 FUN_00460bf0
 * calls 007b3f00 FUN_007b3f00
 * calls 007b1740 FUN_007b1740
 * calls 00747ac0 FUN_00747ac0
 * calls 00575b00 FUN_00575b00
 */

void __thiscall FUN_007b76c0(int param_1,int ***param_2)

{
  int *piVar1;
  byte bVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int ****ppppiVar11;
  undefined4 uVar12;
  int iStack_20;
  int ***pppiStack_14;
  int ***pppiStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00883388;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))();
  (**(code **)(*piVar1 + 0x3c))();
  pppiStack_14 = (int ***)&pppiStack_14;
  uStack_4 = 0;
  pppiStack_10 = pppiStack_14;
  FUN_007af4f0(0x2c,&pppiStack_14,0);
  iStack_20 = 1;
  if ((int ****)pppiStack_14 != &pppiStack_14) {
    do {
      pppiVar5 = pppiStack_14;
      pppiVar3 = (int ***)*pppiStack_14;
      pppiVar4 = (int ***)pppiStack_14[1];
      *pppiVar4 = (int **)pppiVar3;
      pppiVar3[1] = (int **)pppiVar4;
      ppppiVar11 = (int ****)(pppiStack_14 + -1);
      if (((*(byte *)((int)pppiStack_14[2] + 5) & 0x1f) == *(uint *)(param_1 + 0x1bc)) ||
         ((*(byte *)((int)pppiStack_14[2] + 5) & 0x1f) == 4)) {
        uVar7 = FUN_007b5ef0(*(undefined4 *)(param_1 + 0x148),pppiStack_14[4]);
        cVar6 = FUN_00575b00();
        uVar12 = 0;
        iVar8 = (-(uint)(cVar6 != '\0') & 0xa1700bc) + 0xbb034ea6;
        uVar9 = FUN_00460bf0("CARBONFIBRE",0);
        iVar10 = FUN_00747ac0(uVar9,uVar12);
        if (iVar10 != 0) {
          cVar6 = FUN_00575b00();
          iVar8 = (-(uint)(cVar6 != '\0') & 0x1400fb70) + 0x4d1c18ba;
        }
        bVar2 = *(byte *)((int)pppiVar5[2] + 5);
        uVar9 = FUN_007a4e50(ppppiVar11,0);
        FUN_007b1740(ppppiVar11,iVar8,bVar2 >> 5,0,uVar7,uVar9);
        if (*(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x1bc) * 4) == 1) {
          if ((param_2 != (int ***)0x0) && ((int ***)pppiVar5[2] == param_2)) {
            *(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x1bc) * 4) = iStack_20;
          }
          iStack_20 = iStack_20 + 1;
        }
      }
      else {
        (*(code *)**ppppiVar11)(1);
      }
    } while ((int ****)pppiStack_14 != &pppiStack_14);
  }
  if (DAT_009b9e84 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x1bc) * 4);
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    (**(code **)(*piVar1 + 0x40))(uVar7);
  }
  else {
    *(int *)(param_1 + 0x1c0 + *(int *)(param_1 + 0x1bc) * 4) = DAT_009b9e84;
    iVar8 = DAT_009b9e84;
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    (**(code **)(*piVar1 + 0x40))(iVar8);
    DAT_009b9e84 = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_007b3f00();
  ExceptionList = pppiStack_10;
  return;
}

