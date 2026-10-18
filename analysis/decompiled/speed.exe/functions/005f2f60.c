/* speed.exe 005f2f60 FUN_005f2f60; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 00454640 FUN_00454640
 * calls 0045a430 FUN_0045a430
 * calls 00451670 FUN_00451670
 * calls 00460c50 FUN_00460c50
 * calls 005f1780 FUN_005f1780
 * calls 00456b00 FUN_00456b00
 * calls 00652ad0 _malloc
 * calls 005ef130 FUN_005ef130
 * calls 00455fd0 FUN_00455fd0
 * calls 00456b20 FUN_00456b20
 * calls 00451660 FUN_00451660
 * calls 006269b0 FUN_006269b0
 * calls 00453fc0 FUN_00453fc0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005e1930 FUN_005e1930
 * calls 004573c0 FUN_004573c0
 */

void __fastcall FUN_005f2f60(int param_1)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *local_28;
  int *local_24 [3];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875970;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00453fc0();
  iVar2 = FUN_00451660();
  local_28 = (int *)(iVar2 + (int)piVar1);
  local_24[0] = piVar1;
  ppiVar3 = &local_28;
  if ((int *)(iVar2 + (int)piVar1) <= piVar1) {
    ppiVar3 = local_24;
  }
  piVar4 = _malloc((int)*ppiVar3 << 2);
  *(undefined4 *)(param_1 + 0x60) = 0;
  local_24[0] = piVar4;
  iVar2 = FUN_00451670();
  piVar1 = piVar4;
  for (; iVar2 != 0; iVar2 = FUN_004573c0(iVar2)) {
    *piVar1 = iVar2;
    piVar1 = piVar1 + 1;
  }
  iVar2 = FUN_00456b00();
  do {
    if (iVar2 == 0) {
      FUN_005ef130(piVar4,piVar1,(int)piVar1 - (int)piVar4 >> 2);
      iVar2 = FUN_005e1930(piVar4,piVar1);
      uVar5 = FUN_005f1780(piVar4,iVar2 - (int)piVar4 >> 2,0x18);
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      thunk_FUN_007c7250(piVar4);
      ExceptionList = local_c;
      return;
    }
    uVar10 = 0;
    uVar9 = 0;
    uVar5 = FUN_00455fd0(0x5cea9d46,iVar2,0,0);
    FUN_00452380(uVar5,uVar9,uVar10);
    local_4 = 0;
    if (local_18 == (undefined4 *)0x0) {
      local_18 = (undefined4 *)FUN_006269b0(8);
    }
    pcVar8 = (char *)*local_18;
    local_4 = 1;
    iVar6 = FUN_00460c50(pcVar8);
    for (pcVar7 = pcVar8 + iVar6 + -1; pcVar8 <= pcVar7; pcVar7 = pcVar7 + -1) {
      if ((*pcVar7 == '/') || (*pcVar7 == '\\')) {
        pcVar8 = pcVar7 + 1;
        break;
      }
    }
    iVar6 = FUN_00454640(pcVar8);
    *piVar1 = iVar6;
    piVar1 = piVar1 + 1;
    iVar2 = FUN_00456b20(iVar2);
    local_4 = 0xffffffff;
    FUN_0045a430();
    piVar4 = local_24[0];
  } while( true );
}

