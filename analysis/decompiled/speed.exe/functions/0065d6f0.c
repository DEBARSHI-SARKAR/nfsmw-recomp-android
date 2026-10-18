/* speed.exe 0065d6f0 FUN_0065d6f0; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 * calls 00463ca0 FUN_00463ca0
 * calls 00462830 FUN_00462830
 * calls 0045d3d0 FUN_0045d3d0
 * calls 00461980 FUN_00461980
 */

void FUN_0065d6f0(undefined4 param_1)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  void **ppvVar5;
  int iVar6;
  int ****ppppiVar7;
  int ***local_20;
  int ***local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0087a0f8;
  local_14 = ExceptionList;
  local_20 = (int ***)&local_20;
  local_1c = (int ***)&local_20;
  local_c = 0;
  ppppiVar7 = DAT_00925b1c;
  ExceptionList = &local_14;
  ppvVar5 = &local_14;
  if ((int *****)DAT_00925b1c != &DAT_00925b1c) {
    do {
      ppppiVar1 = (int ****)*ppppiVar7;
      iVar6 = FUN_00460dd0(ppppiVar7[3],param_1);
      pppiVar4 = local_1c;
      if (iVar6 == 0) {
        pppiVar2 = *ppppiVar7;
        pppiVar3 = ppppiVar7[1];
        *pppiVar3 = (int **)pppiVar2;
        pppiVar2[1] = (int **)pppiVar3;
        *local_1c = (int **)ppppiVar7;
        local_1c = (int ***)ppppiVar7;
        ppppiVar7[1] = pppiVar4;
        *ppppiVar7 = (int ***)&local_20;
      }
      ppppiVar7 = ppppiVar1;
      ppvVar5 = ExceptionList;
    } while ((int *****)ppppiVar1 != &DAT_00925b1c);
  }
  ExceptionList = ppvVar5;
  ppppiVar7 = (int ****)local_20;
  if ((int ****)local_20 != &local_20) {
    do {
      ppppiVar7 = (int ****)*ppppiVar7;
    } while (ppppiVar7 != &local_20);
  }
  FUN_00462830(&LAB_0064ccf0);
  FUN_0045d3d0(&local_20);
  local_c = 0xffffffff;
  if ((int ****)local_20 != &local_20) {
    do {
      pppiVar3 = local_20;
      pppiVar4 = (int ***)*local_20;
      pppiVar2 = (int ***)local_20[1];
      *pppiVar2 = (int **)pppiVar4;
      pppiVar4[1] = (int **)pppiVar2;
      FUN_00461980(local_20[3]);
      FUN_00463ca0(DAT_00925900,pppiVar3);
    } while ((int ****)local_20 != &local_20);
  }
  ExceptionList = local_14;
  return;
}

