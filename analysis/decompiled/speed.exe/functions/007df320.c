/* speed.exe 007df320 x64toa; analysis pseudocode, not buildable source.
 * calls 007dcac0 __aullrem
 * calls 007dcb40 __aulldiv
 */

/* Library Function - Single Match
    _x64toa@20
   
   Library: Visual Studio 2003 Debug
   __stdcall x64toa,20 */

void x64toa(int param_1,int param_2,char *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  char *local_14;
  char *local_8;
  
  local_8 = param_3;
  if (param_5 != 0) {
    *param_3 = '-';
    local_8 = param_3 + 1;
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  lVar5 = CONCAT44(param_2,param_1);
  local_14 = local_8;
  do {
    pcVar2 = local_8;
    uVar3 = __aullrem(lVar5,param_4,0);
    lVar5 = __aulldiv(lVar5,param_4,0);
    if (uVar3 < 10) {
      *local_8 = (char)uVar3 + '0';
    }
    else {
      *local_8 = (char)uVar3 + 'W';
    }
    local_8 = local_8 + 1;
  } while (lVar5 != 0);
  *local_8 = '\0';
  local_8 = pcVar2;
  do {
    cVar1 = *local_8;
    *local_8 = *local_14;
    *local_14 = cVar1;
    local_8 = local_8 + -1;
    local_14 = local_14 + 1;
  } while (local_14 < local_8);
  return;
}

