/* speed.exe 0045b880 FUN_0045b880; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 */

void * FUN_0045b880(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = FID_conflict__memcpy(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}

