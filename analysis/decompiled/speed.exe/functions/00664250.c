/* speed.exe 00664250 FUN_00664250; analysis pseudocode, not buildable source.
 * calls 00661aa0 FUN_00661aa0
 * calls 00658ee0 FUN_00658ee0
 * calls 00730bf0 FUN_00730bf0
 * calls 006de1f0 FUN_006de1f0
 * calls 00728730 FUN_00728730
 * calls 006626b0 FUN_006626b0
 * calls 00730be0 FUN_00730be0
 * calls 00663f00 FUN_00663f00
 * calls 0065d860 FUN_0065d860
 * calls 004d1a40 FUN_004d1a40
 * calls 0056b950 FUN_0056b950
 * calls 005033c0 FUN_005033c0
 * calls 00465a50 FUN_00465a50
 * calls 0078a160 thunk_FUN_0078a060
 * calls 004d0610 FUN_004d0610
 * calls 004b8c40 FUN_004b8c40
 * calls 00722840 FUN_00722840
 * calls 00463ca0 FUN_00463ca0
 * calls 0050af20 FUN_0050af20
 * calls 00660d90 FUN_00660d90
 */

void __fastcall FUN_00664250(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  
  DAT_00925e90 = 8;
  FUN_00730be0();
  FUN_00728730();
  FUN_0050af20();
  thunk_FUN_0078a060();
  cVar4 = FUN_004b8c40();
  while (cVar4 != '\0') {
    FUN_004d0610(0x3dcccccd);
    FUN_00660d90();
    FUN_00661aa0();
    cVar4 = FUN_004b8c40();
  }
  FUN_004d1a40();
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXDRAG_BIN_008f7ed8);
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXRACE_BIN_008f7edc);
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXSPLIT_BIN_008f7ee0);
  FUN_005033c0(PTR_s_GLOBAL_HUDTEXDRAGSPLIT_BIN_008f7ee4);
  FUN_005033c0(PTR_s_GLOBAL_DYNTEX_BIN_008f7ed4);
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[0xc];
    while (iVar2 == 0) {
      FUN_006626b0();
      iVar2 = piVar1[0xc];
    }
    piVar3 = (int *)piVar1[1];
    iVar2 = *piVar1;
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00658ee0();
    FUN_00463ca0(DAT_00925878,piVar1);
  }
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[0xc];
    while (iVar2 == 0) {
      FUN_006626b0();
      iVar2 = piVar1[0xc];
    }
    piVar3 = (int *)piVar1[1];
    iVar2 = *piVar1;
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00658ee0();
    FUN_00463ca0(DAT_00925878,piVar1);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00663f00(*(int *)(param_1 + 0x10));
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[0xc];
    while (iVar2 == 0) {
      FUN_006626b0();
      iVar2 = piVar1[0xc];
    }
    piVar3 = (int *)piVar1[1];
    iVar2 = *piVar1;
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00658ee0();
    FUN_00463ca0(DAT_00925878,piVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00730bf0(1,1);
  FUN_0056b950(1,0,0,0);
  DAT_009a3a20 = FUN_00722840(0);
  FUN_00465a50();
  FUN_0065d860(0);
  FUN_006de1f0();
  DAT_008f8688 = DAT_008f8688 + 1;
  return;
}

