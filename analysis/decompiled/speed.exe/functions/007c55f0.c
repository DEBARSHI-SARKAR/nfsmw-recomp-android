/* speed.exe 007c55f0 shortsort; analysis pseudocode, not buildable source.
 * calls 007c5660 swap
 */

/* Library Function - Single Match
    _shortsort
   
   Library: Visual Studio 2003 Debug */

void __cdecl shortsort(uint param_1,uint param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  for (; param_1 < param_2; param_2 = param_2 - param_3) {
    local_c = param_1;
    local_8 = param_1;
    while (local_8 = local_8 + param_3, local_8 <= param_2) {
      iVar1 = (*param_4)(local_8,local_c);
      if (0 < iVar1) {
        local_c = local_8;
      }
    }
    swap(local_c,param_2,param_3);
  }
  return;
}

