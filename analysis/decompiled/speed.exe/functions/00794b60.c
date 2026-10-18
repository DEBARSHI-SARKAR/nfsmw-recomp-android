/* speed.exe 00794b60 FUN_00794b60; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083f5d0 FUN_0083f5d0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c4b80 FUN_007c4b80
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078a310 FUN_0078a310
 * calls 00741690 FUN_00741690
 * calls 00794180 FUN_00794180
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00794b60(void)

{
  undefined4 uVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  uint uVar5;
  uint uVar6;
  int ****ppppiVar7;
  int *piVar8;
  int ***local_650;
  int ***local_64c;
  float local_648;
  undefined4 local_644;
  undefined1 local_640 [4];
  undefined2 local_63c;
  undefined1 local_63a;
  int local_638 [132];
  undefined1 local_428 [1024];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  uVar1 = DAT_00905ddc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_008826fb;
  local_14 = ExceptionList;
  local_428[0] = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 1;
  ExceptionList = &local_14;
  FUN_0078a310(DAT_00905ddc,0x20);
  FUN_00741690(uVar1,local_428);
  local_650 = (int ***)&local_650;
  local_c = 0;
  local_64c = local_650;
  FUN_00794180(1,local_428,&local_650);
  if ((int ****)local_650 != &local_650) {
    do {
      pppiVar4 = local_650;
      ppppiVar7 = (int ****)(local_650 + 3);
      local_648 = (float)(int)local_650[0x103] * _DAT_00890f14;
      local_644 = FUN_007c4b80();
      uVar5 = FUN_007c4b80();
      uVar1 = *(undefined4 *)(DAT_009b4218 + 0x9c);
      local_63a = 5;
      piVar8 = local_638;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *piVar8 = (int)*ppppiVar7;
        ppppiVar7 = ppppiVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)piVar8 = *(undefined1 *)ppppiVar7;
        ppppiVar7 = (int ****)((int)ppppiVar7 + 1);
        piVar8 = (int *)((int)piVar8 + 1);
      }
      local_63c = (undefined2)uVar5;
      FUN_007ec1bd();
      InterlockedIncrement((LONG *)&DAT_009b42d4);
      FUN_0083f5d0(uVar1,local_640,1);
      InterlockedDecrement((LONG *)&DAT_009b42d4);
      FUN_007ec1c8();
      pppiVar2 = (int ***)*local_650;
      pppiVar3 = (int ***)local_650[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      if ((int ****)pppiVar4 != (int ****)0x0) {
        thunk_FUN_007c7250(pppiVar4);
      }
    } while ((int ****)local_650 != &local_650);
  }
  ExceptionList = local_14;
  return;
}

