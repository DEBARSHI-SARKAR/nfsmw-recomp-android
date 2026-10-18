/* speed.exe 007d08e0 ___CxxCallUnwindDtor; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    ___CxxCallUnwindDtor
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___CxxCallUnwindDtor(code *param_1)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008bcbc8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  (*param_1)();
  ExceptionList = local_14;
  return;
}

