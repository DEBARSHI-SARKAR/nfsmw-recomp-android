/* speed.exe 0067c080 FUN_0067c080; analysis pseudocode, not buildable source.
 * calls 00678ad0 FUN_00678ad0
 * calls 00454c30 FUN_00454c30
 * calls 0045a430 FUN_0045a430
 * calls 00672e80 FUN_00672e80
 * calls 0045be30 FUN_0045be30
 * calls 0045a5d0 FUN_0045a5d0
 * calls 00452c50 FUN_00452c50
 * calls 00452bd0 FUN_00452bd0
 * calls 00452b30 FUN_00452b30
 * calls 00403c30 FUN_00403c30
 * calls 00454760 FUN_00454760
 */

undefined4 FUN_0067c080(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 local_30 [12];
  int *local_24;
  undefined1 local_20 [16];
  byte local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ae10;
  local_c = ExceptionList;
  if (*(int *)(param_2 + 4) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  FUN_00403c30(param_1);
  local_4 = 0;
  if ((local_10 & 1) != 0) {
    FUN_0045a5d0();
  }
  iVar5 = 0;
  do {
    piVar6 = &DAT_008f87a0;
    iVar3 = DAT_008f87a8;
    while (iVar3 != 0) {
      if (*piVar6 == iVar5) {
        iVar3 = FUN_00672e80(param_1,iVar5);
        if (0 < iVar3) {
          FUN_00452b30();
          local_4 = CONCAT31(local_4._1_3_,1);
          cVar2 = FUN_00454760(piVar6[6],local_30);
          if (((cVar2 != '\0') && (cVar2 = FUN_00452c50(), cVar2 != '\0')) &&
             ((piVar6 = local_24, local_24 != (int *)0x0 ||
              (piVar6 = (int *)FUN_00454c30(0), piVar6 != (int *)0x0)))) {
            iVar4 = *piVar6;
            if (iVar3 <= *piVar6) {
              iVar4 = iVar3;
            }
            cVar2 = FUN_00678ad0(local_20,iVar5,iVar4);
            if (cVar2 == '\0') {
              local_4 = local_4 & 0xffffff00;
              FUN_00452bd0();
              local_4 = 0xffffffff;
              FUN_0045a430();
              ExceptionList = local_c;
              return 0;
            }
          }
          local_4 = local_4 & 0xffffff00;
          FUN_00452bd0();
        }
        break;
      }
      piVar1 = piVar6 + 9;
      piVar6 = piVar6 + 7;
      iVar3 = *piVar1;
    }
    iVar5 = iVar5 + 1;
    if (6 < iVar5) {
      FUN_0045be30(local_20);
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return 1;
    }
  } while( true );
}

