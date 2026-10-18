/* speed.exe 007a09e0 FUN_007a09e0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0079ff50 FUN_0079ff50
 * calls 00794180 FUN_00794180
 */

void FUN_007a09e0(undefined4 param_1)

{
  int ***pppiVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int ***local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882918;
  local_c = ExceptionList;
  local_10 = (undefined1 *)&local_14;
  local_14 = (int ***)&local_14;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00794180(7,param_1,&local_14);
  if ((int ****)local_14 != &local_14) {
    do {
      pppiVar3 = local_14;
      FUN_0079ff50(7,local_14 + 3,1);
      pppiVar1 = (int ***)*local_14;
      pppiVar2 = (int ***)local_14[1];
      *pppiVar2 = (int **)pppiVar1;
      pppiVar1[1] = (int **)pppiVar2;
      if ((int ****)pppiVar3 != (int ****)0x0) {
        thunk_FUN_007c7250(pppiVar3);
      }
    } while ((int ****)local_14 != &local_14);
  }
  ExceptionList = local_c;
  return;
}

