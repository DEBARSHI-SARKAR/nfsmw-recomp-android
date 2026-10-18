/* speed.exe 005a4050 FUN_005a4050; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 * calls 00466410 FUN_00466410
 * calls 00462830 FUN_00462830
 */

void FUN_005a4050(void)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int ****ppppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int ***local_20;
  int ***local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_008736a8;
  local_14 = ExceptionList;
  local_20 = (int ***)&local_20;
  local_1c = (int ***)&local_20;
  iVar6 = 0;
  local_c = 0;
  ExceptionList = &local_14;
  if (0 < DAT_00904fe4 + DAT_00904fe8 + DAT_00904fe0 + DAT_00904fdc) {
    iVar5 = 0;
    ExceptionList = &local_14;
    do {
      pppiVar1 = (int ***)(iVar5 + 0x570 + DAT_0091cf90);
      pppiVar1[0x28] = (int **)0x0;
      ppppiVar3 = (int ****)FUN_00466410();
      pppiVar2 = local_1c;
      if (ppppiVar3 == (int ****)0x0) {
        ppppiVar3 = (int ****)0x0;
      }
      else {
        ppppiVar3[2] = pppiVar1;
      }
      *local_1c = (int **)ppppiVar3;
      local_1c = (int ***)ppppiVar3;
      ppppiVar3[1] = pppiVar2;
      *ppppiVar3 = (int ***)&local_20;
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0xc0;
    } while (iVar6 < DAT_00904fe4 + DAT_00904fe8 + DAT_00904fe0 + DAT_00904fdc);
  }
  DAT_0091cf98 = 1;
  while( true ) {
    iVar6 = DAT_00904fd8;
    if (10 < DAT_00904fd8) {
      iVar6 = 0xb;
    }
    if (iVar6 < DAT_0091cf98) break;
    FUN_00462830(&LAB_0056e930);
    ppiVar4 = (int **)0x1;
    ppppiVar3 = (int ****)local_20;
    if ((int ****)local_20 != &local_20) {
      do {
        pppiVar1 = ppppiVar3[2];
        pppiVar1[DAT_0091cf98 + 0x1f] = ppiVar4;
        if (ppiVar4 == (int **)0x1) {
          pppiVar1 = pppiVar1 + 0x28;
          *pppiVar1 = (int **)((int)*pppiVar1 + 1);
        }
        ppppiVar3 = (int ****)*ppppiVar3;
        ppiVar4 = (int **)((int)ppiVar4 + 1);
      } while (ppppiVar3 != &local_20);
    }
    DAT_0091cf98 = DAT_0091cf98 + 1;
  }
  local_c = 0xffffffff;
  if ((int ****)local_20 != &local_20) {
    do {
      pppiVar1 = (int ***)*local_20;
      pppiVar2 = (int ***)local_20[1];
      *pppiVar2 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar2;
      FUN_00466440(local_20);
    } while ((int ****)local_20 != &local_20);
  }
  ExceptionList = local_14;
  return;
}

