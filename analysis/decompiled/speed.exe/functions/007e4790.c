/* speed.exe 007e4790 __open; analysis pseudocode, not buildable source.
 * calls 007e4822 FUN_007e4822
 * calls 007e48f0 __tsopen_lk
 * calls 007e480f FUN_007e480f
 */

/* Library Function - Single Match
    __open
   
   Library: Visual Studio 2003 Debug */

int __cdecl __open(char *_Filename,int _OpenFlag,...)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008bf0e8;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  local_28 = 0;
  local_20 = in_stack_0000000c;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  local_24 = __tsopen_lk(&local_28,local_2c,_Filename,_OpenFlag,0x40,in_stack_0000000c);
  local_8 = 0xffffffff;
  FUN_007e480f();
  iVar1 = FUN_007e4822();
  return iVar1;
}

