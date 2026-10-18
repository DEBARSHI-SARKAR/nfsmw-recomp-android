/* speed.exe 00842380 FUN_00842380; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 007c9470 _strncmp
 * calls 0083a630 FUN_0083a630
 * calls 00846110 FUN_00846110
 * calls 008421c0 FUN_008421c0
 */

void FUN_00842380(undefined4 *param_1,char *param_2)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00846110(param_2,"$http");
  if (iVar1 == 0) {
    param_1[0x484] = param_1[0x48a];
    return;
  }
  iVar1 = FUN_00846110(param_2,"$home");
  if (iVar1 == 0) {
    _Src = (void *)param_1[0x48a];
    if (_Src != (void *)0x0) {
      iVar1 = FUN_008421c0(param_1,_Src,"$last");
      param_1[0x48b] = iVar1 - (int)_Src;
      FID_conflict__memcpy((void *)*param_1,_Src,(iVar1 - (int)_Src) + 1);
    }
    param_1[0x48a] = 0;
    iVar1 = FUN_008421c0(param_1,*param_1,"startup");
    param_1[0x484] = iVar1;
    if (iVar1 == 0) {
      param_1[0x484] = *param_1;
      return;
    }
  }
  else {
    iVar1 = FUN_00846110(param_2,"$quit");
    if (iVar1 == 0) {
      param_1[0x484] = 0;
      return;
    }
    iVar1 = _strncmp(param_2,"$exit=",6);
    if (iVar1 == 0) {
      param_1[0x484] = 0;
      FUN_0083a630(param_1 + 2,0x100,param_2 + 6);
      return;
    }
    iVar1 = FUN_00846110(param_2,"$next");
    if ((iVar1 != 0) && (*param_2 != '\0')) {
      uVar2 = FUN_008421c0(param_1,*param_1,param_2);
      param_1[0x484] = uVar2;
    }
  }
  return;
}

