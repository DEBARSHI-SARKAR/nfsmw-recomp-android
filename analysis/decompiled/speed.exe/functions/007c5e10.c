/* speed.exe 007c5e10 ___onexitinit; analysis pseudocode, not buildable source.
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    ___onexitinit
   
   Library: Visual Studio 2003 Debug */

undefined4 ___onexitinit(void)

{
  undefined4 uVar1;
  
  DAT_009c544c = (undefined4 *)__malloc_dbg(0x80,2,"onexit.c",0xc6);
  if (DAT_009c544c == (undefined4 *)0x0) {
    uVar1 = 0x18;
  }
  else {
    *DAT_009c544c = 0;
    DAT_009c5448 = DAT_009c544c;
    uVar1 = 0;
  }
  return uVar1;
}

