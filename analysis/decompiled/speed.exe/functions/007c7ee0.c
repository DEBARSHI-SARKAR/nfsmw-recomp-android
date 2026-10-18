/* speed.exe 007c7ee0 __CrtIsValidPointer; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000054 IsBadWritePtr
 * calls EXTERNAL:0000004b IsBadReadPtr
 */

/* Library Function - Single Match
    __CrtIsValidPointer
   
   Library: Visual Studio 2003 Debug */

undefined4 __CrtIsValidPointer(void *param_1,UINT_PTR param_2,int param_3)

{
  BOOL BVar1;
  
  if (((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,param_2), BVar1 == 0)) &&
     ((param_3 == 0 || (BVar1 = IsBadWritePtr(param_1,param_2), BVar1 == 0)))) {
    return 1;
  }
  return 0;
}

