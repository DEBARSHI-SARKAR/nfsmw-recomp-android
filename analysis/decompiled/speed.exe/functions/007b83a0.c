/* speed.exe 007b83a0 FUN_007b83a0; analysis pseudocode, not buildable source.
 * calls 007a7030 FUN_007a7030
 * calls 005768a0 FUN_005768a0
 * calls 007af4f0 FUN_007af4f0
 * calls 00747ae0 FUN_00747ae0
 * calls 007b1740 FUN_007b1740
 * calls 00652ad0 _malloc
 * calls 007a4e50 FUN_007a4e50
 * calls 007aeca0 FUN_007aeca0
 * calls 00460c20 FUN_00460c20
 * calls 007a4df0 FUN_007a4df0
 * calls 00460bf0 FUN_00460bf0
 * calls 007b5ef0 FUN_007b5ef0
 * calls 007b3f00 FUN_007b3f00
 */

void __thiscall FUN_007b83a0(int param_1,int param_2)

{
  int *piVar1;
  int ****ppppiVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  int ***pppiStack_14;
  int ***pppiStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00883478;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x2c);
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  (**(code **)(*(int *)(param_1 + 0x2c) + 0xc))();
  (**(code **)(*piVar1 + 0x3c))();
  uVar6 = FUN_007a7030();
  puVar7 = _malloc(0x2c);
  puVar11 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[3] = 0;
    puVar7[5] = 0;
    puVar7[9] = 0;
    *puVar7 = &PTR_FUN_008b7518;
    puVar7[4] = uVar6;
    puVar7[6] = 7;
    *(undefined1 *)(puVar7 + 7) = 0;
    puVar7[8] = 1;
    *(undefined1 *)(puVar7 + 10) = 0;
    puVar11 = puVar7;
  }
  uVar10 = 1;
  cVar5 = FUN_007a4df0(puVar11);
  if (cVar5 == '\0') {
    iVar8 = FUN_007aeca0(puVar11);
    if (iVar8 != 0) {
      uVar10 = 0x21;
    }
  }
  else {
    uVar10 = 0x11;
  }
  puVar11[8] = uVar10;
  FUN_007b1740(puVar11,0x697b4ad4,0x60a662f5,0,0,0);
  pppiStack_14 = (int ***)&pppiStack_14;
  uStack_4 = 0;
  pppiStack_10 = pppiStack_14;
  FUN_007af4f0(uVar6,&pppiStack_14,0);
  iStack_24 = FUN_005768a0(uVar6,0);
  if (iStack_24 == 0x2c) {
    iStack_24 = 1;
  }
  else if (iStack_24 == 0x2e) {
    iStack_24 = 2;
  }
  else if (iStack_24 == 0x30) {
    iStack_24 = 3;
  }
  iStack_1c = 2;
  iStack_18 = 1;
  if ((int ****)pppiStack_14 != &pppiStack_14) {
    do {
      iVar8 = FUN_00747ae0(0xebb03e66,0);
      if (*(char *)(param_1 + 0x1bc) == '\0') {
        iVar8 = FUN_00460c20("_WHITE",iVar8);
      }
      uVar10 = 0;
      uVar6 = FUN_00460bf0(&DAT_008b4cbc,0);
      iVar9 = FUN_00747ae0(uVar6,uVar10);
      if (iVar8 == iVar9) {
        uVar6 = FUN_007b5ef0(*(undefined4 *)(param_1 + 0x148),iStack_24);
        pppiVar3 = (int ***)*pppiStack_14;
        pppiVar4 = (int ***)pppiStack_14[1];
        *pppiVar4 = (int **)pppiVar3;
        ppppiVar2 = (int ****)(pppiStack_14 + -1);
        pppiVar3[1] = (int **)pppiVar4;
        uVar10 = FUN_007a4e50(ppppiVar2,0);
        FUN_007b1740(ppppiVar2,0x697b4ad4,iVar8,0,uVar6,uVar10);
        iVar8 = FUN_00747ae0(0xebb03e66,0);
        if (iVar8 == param_2) {
          iStack_18 = iStack_1c;
        }
        iStack_1c = iStack_1c + 1;
      }
      else {
        pppiVar3 = (int ***)*pppiStack_14;
        pppiVar4 = (int ***)pppiStack_14[1];
        *pppiVar4 = (int **)pppiVar3;
        pppiVar3[1] = (int **)pppiVar4;
        if ((int ****)(pppiStack_14 + -1) != (int ****)0x0) {
          (*(code *)*pppiStack_14[-1])(1);
        }
      }
    } while ((int ****)pppiStack_14 != &pppiStack_14);
  }
  iVar8 = DAT_009b9e84;
  if (DAT_009b9e84 == 0) {
    if (*(char *)(param_1 + 0x129) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
      *(undefined1 *)(param_1 + 0x119) = 1;
      *(undefined1 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    (**(code **)(*piVar1 + 0x40))(iStack_18);
  }
  else {
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

