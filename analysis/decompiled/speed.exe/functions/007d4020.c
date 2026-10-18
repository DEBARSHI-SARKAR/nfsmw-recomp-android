/* speed.exe 007d4020 ___lc_lctostr; analysis pseudocode, not buildable source.
 * calls 007d3e60 __strcats
 * calls 007d0bd0 FUN_007d0bd0
 */

/* Library Function - Single Match
    ___lc_lctostr
   
   Library: Visual Studio 2003 Debug */

void ___lc_lctostr(undefined4 param_1,int param_2)

{
  FUN_007d0bd0(param_1,param_2);
  if (*(char *)(param_2 + 0x40) != '\0') {
    __strcats(param_1,2,&DAT_008b4c34,param_2 + 0x40);
  }
  if (*(char *)(param_2 + 0x80) != '\0') {
    __strcats(param_1,2,&DAT_00893ce4,param_2 + 0x80);
  }
  return;
}

