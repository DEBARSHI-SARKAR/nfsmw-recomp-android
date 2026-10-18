/* speed.exe 00794cf0 FUN_00794cf0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083f5d0 FUN_0083f5d0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c4b80 FUN_007c4b80
 * calls 007ec1bd FUN_007ec1bd
 * calls 00794180 FUN_00794180
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00794cf0(undefined4 param_1)

{
  undefined4 uVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  uint uVar4;
  uint uVar5;
  int ****ppppiVar6;
  int *piVar7;
  int ***local_244;
  undefined1 *local_240;
  int ***local_23c;
  float local_238;
  undefined4 local_234;
  undefined1 local_230 [4];
  undefined2 local_22c;
  undefined1 local_22a;
  int local_228 [133];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0088271b;
  local_14 = ExceptionList;
  local_244 = (int ***)&local_244;
  local_240 = (undefined1 *)&local_244;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_00794180(7,param_1,&local_244);
  if ((int ****)local_244 != &local_244) {
    do {
      ppppiVar6 = (int ****)(local_244 + 3);
      local_238 = (float)(int)local_244[0x103] * _DAT_00890f14;
      local_23c = local_244;
      local_234 = FUN_007c4b80();
      uVar4 = FUN_007c4b80();
      uVar1 = *(undefined4 *)(DAT_009b4218 + 0x9c);
      local_22a = 5;
      piVar7 = local_228;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar7 = (int)*ppppiVar6;
        ppppiVar6 = ppppiVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)piVar7 = *(undefined1 *)ppppiVar6;
        ppppiVar6 = (int ****)((int)ppppiVar6 + 1);
        piVar7 = (int *)((int)piVar7 + 1);
      }
      local_22c = (undefined2)uVar4;
      FUN_007ec1bd();
      InterlockedIncrement((LONG *)&DAT_009b42d4);
      FUN_0083f5d0(uVar1,local_230,1);
      InterlockedDecrement((LONG *)&DAT_009b42d4);
      FUN_007ec1c8();
      pppiVar2 = (int ***)*local_244;
      pppiVar3 = (int ***)local_244[1];
      *pppiVar3 = (int **)pppiVar2;
      pppiVar2[1] = (int **)pppiVar3;
      if ((int ****)local_23c != (int ****)0x0) {
        thunk_FUN_007c7250(local_23c);
      }
    } while ((int ****)local_244 != &local_244);
  }
  ExceptionList = local_14;
  return;
}

