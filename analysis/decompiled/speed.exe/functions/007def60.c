/* speed.exe 007def60 _ValidateRead; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000004b IsBadReadPtr
 */

/* Library Function - Single Match
    int __cdecl _ValidateRead(void const *,unsigned int)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl _ValidateRead(void *param_1,uint param_2)

{
  BOOL BVar1;
  uint local_8;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  local_8 = (uint)(BVar1 == 0);
  return local_8;
}

