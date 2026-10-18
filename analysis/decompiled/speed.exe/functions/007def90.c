/* speed.exe 007def90 _ValidateWrite; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000054 IsBadWritePtr
 */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

int __cdecl _ValidateWrite(void *param_1,uint param_2)

{
  BOOL BVar1;
  uint local_8;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  local_8 = (uint)(BVar1 == 0);
  return local_8;
}

