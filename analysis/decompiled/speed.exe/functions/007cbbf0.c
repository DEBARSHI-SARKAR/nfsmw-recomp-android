/* speed.exe 007cbbf0 __fpreset; analysis pseudocode, not buildable source.
 * calls 007dd1c0 ___pxcptinfoptrs
 * calls 007cd9a0 __setdefaultprecision
 */

/* Library Function - Single Match
    __fpreset
   
   Library: Visual Studio 2003 Debug */

void __cdecl __fpreset(void)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  
  ppvVar3 = ___pxcptinfoptrs();
  pvVar1 = *ppvVar3;
  __setdefaultprecision();
  if ((pvVar1 != (void *)0x0) && ((**(uint **)((int)pvVar1 + 4) & 0x10008) != 0)) {
    iVar2 = *(int *)((int)pvVar1 + 4);
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0xffff;
  }
  return;
}

