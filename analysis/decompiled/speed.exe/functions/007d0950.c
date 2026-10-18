/* speed.exe 007d0950 ___CxxCallUnwindVecDtor; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___CxxCallUnwindVecDtor
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___CxxCallUnwindVecDtor
               (code *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008bcbd8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  (*param_1)(param_2,param_3,param_4,param_5);
  ExceptionList = local_14;
  return;
}

