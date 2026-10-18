/* speed.exe 007e4840 __sopen; analysis pseudocode, not buildable source.
 * calls 007e48c1 FUN_007e48c1
 * calls 007e48f0 __tsopen_lk
 * calls 007e48d4 FUN_007e48d4
 */

/* Library Function - Single Match
    __sopen
   
   Library: Visual Studio 2003 Debug */

int __cdecl __sopen(char *_Filename,int _OpenFlag,int _ShareFlag,...)

{
  int iVar1;
  undefined4 in_stack_00000010;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008bf0f8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_28 = 0;
  local_20 = in_stack_00000010;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  local_24 = __tsopen_lk(&local_28,local_2c,_Filename,_OpenFlag,_ShareFlag,in_stack_00000010);
  local_8 = 0xffffffff;
  FUN_007e48c1();
  iVar1 = FUN_007e48d4();
  return iVar1;
}

