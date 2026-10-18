/* speed.exe 007c8110 __CrtReportBlockType; analysis pseudocode, not buildable source.
 * calls 007c7f30 __CrtIsValidHeapPointer
 */

/* Library Function - Single Match
    __CrtReportBlockType
   
   Library: Visual Studio 2003 Debug */

undefined4 __thiscall __CrtReportBlockType(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = __CrtIsValidHeapPointer(param_2,param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + -0xc);
  }
  return uVar2;
}

