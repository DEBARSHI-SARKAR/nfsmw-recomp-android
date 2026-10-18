/* speed.exe 0072e0c0 FUN_0072e0c0; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 0045ce70 FUN_0045ce70
 * calls 00463ca0 FUN_00463ca0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072e0c0(void)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  void **ppvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int ****ppppiVar8;
  undefined4 *puVar9;
  float10 fVar10;
  int ***local_28;
  int ***local_24;
  int ***local_20;
  int ***local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00880620;
  pvStack_14 = ExceptionList;
  local_20 = (int ***)&local_20;
  local_1c = (int ***)&local_20;
  local_28 = (int ***)&local_28;
  local_24 = (int ***)&local_28;
  PTR_DAT_009031f4 = (undefined *)&local_20;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  ppppiVar8 = DAT_009aa4ac;
  ExceptionList = &pvStack_14;
  ppvVar5 = &pvStack_14;
  if ((int *****)DAT_009aa4ac != &DAT_009aa4ac) {
    do {
      ExceptionList = ppvVar5;
      ppppiVar1 = (int ****)*ppppiVar8;
      pppiVar2 = ppppiVar8[3];
      puVar9 = DAT_009a3b30;
      _DAT_009a3acc = ppppiVar8;
      if ((undefined4 **)DAT_009a3b30 != &DAT_009a3b30) {
        do {
          if ((puVar9[3] & (uint)pppiVar2) != 0) {
            uVar6 = FUN_0045ce40();
            (*(code *)puVar9[2])(ppppiVar8);
            uVar7 = FUN_0045ce40();
            fVar10 = (float10)FUN_0045ce70(uVar6,uVar7);
            puVar9[5] = (float)(fVar10 + (float10)(float)puVar9[5]);
          }
          puVar9 = (undefined4 *)*puVar9;
        } while ((undefined4 **)puVar9 != &DAT_009a3b30);
      }
      pppiVar4 = local_24;
      _DAT_009a3acc = (int ****)0x0;
      pppiVar2 = *ppppiVar8;
      pppiVar3 = ppppiVar8[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      if (ppppiVar8[2] == (int ***)0x0) {
        FUN_00463ca0(DAT_009a3ac4,ppppiVar8);
      }
      else {
        *local_24 = (int **)ppppiVar8;
        local_24 = (int ***)ppppiVar8;
        ppppiVar8[1] = pppiVar4;
        *ppppiVar8 = (int ***)&local_28;
      }
      ppppiVar8 = ppppiVar1;
      ppvVar5 = ExceptionList;
    } while ((int *****)ppppiVar1 != &DAT_009aa4ac);
    while ((int ****)local_28 != &local_28) {
      pppiVar2 = (int ***)*local_28;
      pppiVar3 = (int ***)local_28[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      *DAT_009aa4b0 = local_28;
      local_28[1] = (int **)DAT_009aa4b0;
      *local_28 = (int **)&DAT_009aa4ac;
      DAT_009aa4b0 = (int ****)local_28;
    }
    while ((int ****)local_20 != &local_20) {
      pppiVar2 = (int ***)*local_20;
      pppiVar3 = (int ***)local_20[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      *DAT_009aa4b0 = local_20;
      *local_20 = (int **)&DAT_009aa4ac;
      local_20[1] = (int **)DAT_009aa4b0;
      DAT_009aa4b0 = (int ****)local_20;
    }
  }
  PTR_DAT_009031f4 = (undefined *)&DAT_009aa4ac;
  local_c = (uint)local_c._1_3_ << 8;
  if ((int ****)local_28 != &local_28) {
    do {
      pppiVar2 = (int ***)*local_28;
      pppiVar3 = (int ***)local_28[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      FUN_00463ca0(DAT_009a3ac4,local_28);
    } while ((int ****)local_28 != &local_28);
  }
  local_c = 0xffffffff;
  if ((int ****)local_20 != &local_20) {
    do {
      pppiVar2 = (int ***)*local_20;
      pppiVar3 = (int ***)local_20[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      FUN_00463ca0(DAT_009a3ac4,local_20);
    } while ((int ****)local_20 != &local_20);
  }
  ExceptionList = pvStack_14;
  return;
}

