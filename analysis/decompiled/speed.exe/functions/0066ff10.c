/* speed.exe 0066ff10 FUN_0066ff10; analysis pseudocode, not buildable source.
 * calls 0048b5a0 FUN_0048b5a0
 * calls 0066fe00 FUN_0066fe00
 * calls 006e8be0 FUN_006e8be0
 * calls 007cb710 __aullshr
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_0066ff10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 auStack_b0 [176];
  
  if ((*(int **)(param_1 + 0xc0) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x14))(), iVar1 != 0)) {
    iVar2 = 0;
    while (*(int *)(iVar1 + iVar2 * 8) == 0 && *(int *)(iVar1 + 4 + iVar2 * 8) == 0) {
      iVar2 = iVar2 + 1;
      if (2 < iVar2) {
        return;
      }
    }
    piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x2c) + 0x54))();
    fVar7 = (float10)(**(code **)(*piVar3 + 0x14))();
    fStack_bc = (float)fVar7;
    puVar10 = &DAT_008a2fb4;
    fStack_b8 = (float)fVar7;
    uVar9 = 2;
    pfVar8 = &fStack_bc;
    fStack_b4 = (float)fVar7;
    uVar4 = (**(code **)(*piVar3 + 0x20))(pfVar8,2,&DAT_008a2fb4);
    FUN_0048b5a0(&DAT_008a3028,uVar4,pfVar8,uVar9,puVar10);
    uVar6 = 0;
    do {
      uVar5 = __aullshr();
      if ((((uVar5 & 1) != 0) && (iVar1 = FUN_006e8be0(uVar6), iVar1 != 0)) &&
         ((*(char *)(param_1 + 0xc4) != '\0' ||
          ((piVar3 = (int *)FUN_005d59f0(&LAB_00404ff0), piVar3 == (int *)0x0 ||
           (iVar2 = (**(code **)(*piVar3 + 0xc))(), iVar2 != *(int *)(param_1 + 0xbc))))))) {
        FUN_0066fe00(iVar1,param_2,(float)fVar7,auStack_b0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xa0);
  }
  return;
}

