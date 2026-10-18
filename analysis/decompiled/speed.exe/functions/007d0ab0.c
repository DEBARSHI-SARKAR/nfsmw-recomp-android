/* speed.exe 007d0ab0 _inconsistency; analysis pseudocode, not buildable source.
 * calls 007d0a20 terminate
 */

/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __cdecl _inconsistency(void)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008bcbf8;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (PTR_terminate_00906984 != (undefined *)0x0) {
    local_8 = 0;
    ExceptionList = &local_14;
    (*(code *)PTR_terminate_00906984)();
  }
  local_8 = 0xffffffff;
  terminate();
  ExceptionList = local_14;
  return;
}

