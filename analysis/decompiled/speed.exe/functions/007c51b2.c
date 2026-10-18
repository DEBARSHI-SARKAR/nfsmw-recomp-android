/* speed.exe 007c51b2 __abnormal_termination; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __abnormal_termination
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_007c5128) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}

