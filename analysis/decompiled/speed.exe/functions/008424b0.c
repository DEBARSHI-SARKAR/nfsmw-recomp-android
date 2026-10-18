/* speed.exe 008424b0 FUN_008424b0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 00846110 FUN_00846110
 * calls 008421c0 FUN_008421c0
 */

void FUN_008424b0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  iVar2 = FUN_00846110(param_2,&DAT_008c6a98);
  if (iVar2 == 0) {
    if ((void *)param_1[0x48a] != (void *)0x0) {
      FID_conflict__memcpy((void *)*param_1,(void *)param_1[0x48a],param_1[0x48b] + 1);
      param_1[0x48a] = 0;
      param_1[0x484] = *param_1;
      return;
    }
  }
  else {
    _Dst = (void *)FUN_008421c0(param_1,*param_1,param_2);
    _Src = (void *)FUN_008421c0(param_1,_Dst,"$next");
    iVar2 = FUN_008421c0(param_1,_Src,"$last");
    if (((_Dst != (void *)0x0) && (_Src != (void *)0x0)) && (iVar2 != 0)) {
      FID_conflict__memcpy(_Dst,_Src,(iVar2 - (int)_Src) + 1);
      pvVar1 = (void *)param_1[0x484];
      param_1[0x48a] = 0;
      if (_Dst < pvVar1) {
        if (pvVar1 < _Src) {
          param_1[0x484] = _Dst;
          return;
        }
        param_1[0x484] = ((int)pvVar1 - (int)_Src) + (int)_Dst;
      }
    }
  }
  return;
}

