/* speed.exe 004d1a60 FUN_004d1a60; analysis pseudocode, not buildable source.
 * calls 004abe60 FUN_004abe60
 * calls 004ce820 FUN_004ce820
 * calls 005d0370 FUN_005d0370
 * calls 004d0c40 FUN_004d0c40
 * calls 004ca660 FUN_004ca660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d1a60(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  iVar2 = FUN_004abe60();
  *(int *)(param_1 + 0xf0) = iVar2;
  if (0 < iVar2) {
    FUN_004ce820(iVar2,0);
  }
  iVar2 = 0;
  do {
    FUN_004ca660(iVar2,2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  piVar1 = *(int **)(param_1 + 0xbc);
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 0xbc) + 4) = *(int *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (piVar3 != *(int **)(param_1 + 0xbc)) {
    do {
      piVar1 = (int *)*piVar3;
      FUN_005d0370(piVar3,0x30,0);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xbc));
  }
  FUN_004d0c40();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xb4);
  DAT_00911ed4 = 0;
  DAT_00911ed8 = 0;
  _DAT_00911edc = 0;
  DAT_00911ee0 = 0;
  return;
}

