/* speed.exe 007c7f30 __CrtIsValidHeapPointer; analysis pseudocode, not buildable source.
 * calls 007d5260 ___sbh_verify_block
 * calls 007c7ee0 __CrtIsValidPointer
 * calls EXTERNAL:00000055 HeapValidate
 * calls 007d5200 ___sbh_find_block
 */

/* Library Function - Single Match
    __CrtIsValidHeapPointer
   
   Library: Visual Studio 2003 Debug */

BOOL __thiscall __CrtIsValidHeapPointer(undefined4 param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  
  if (param_2 == 0) {
    BVar1 = 0;
  }
  else {
    iVar2 = __CrtIsValidPointer(param_2 + -0x20,0x20,0,param_1);
    if (iVar2 == 0) {
      BVar1 = 0;
    }
    else if (DAT_009c531c == 3) {
      iVar2 = ___sbh_find_block(param_2 + -0x20);
      if (iVar2 == 0) {
        if ((DAT_009baa24 & 0x8000) == 0) {
          BVar1 = HeapValidate(DAT_009c5318,0,(LPCVOID)(param_2 + -0x20));
        }
        else {
          BVar1 = 1;
        }
      }
      else {
        BVar1 = ___sbh_verify_block(iVar2,param_2 + -0x20);
      }
    }
    else {
      BVar1 = HeapValidate(DAT_009c5318,0,(LPCVOID)(param_2 + -0x20));
    }
  }
  return BVar1;
}

