/* speed.exe 007c5af0 ~type_info; analysis pseudocode, not buildable source.
 * calls 007d0fd0 __lock
 * calls 007c5b56 FUN_007c5b56
 * calls 007d1050 FUN_007d1050
 * calls 007c5b61 FUN_007c5b61
 */

/* Library Function - Single Match
    public: virtual __thiscall type_info::~type_info(void)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __thiscall type_info::~type_info(type_info *this)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008b8118;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined ***)this = &vftable;
  __lock(0xe);
  local_8 = 0;
  if (*(int *)(this + 4) != 0) {
    FUN_007d1050(*(undefined4 *)(this + 4));
  }
  local_8 = 0xffffffff;
  FUN_007c5b56();
  FUN_007c5b61();
  return;
}

