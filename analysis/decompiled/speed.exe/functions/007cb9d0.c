/* speed.exe 007cb9d0 __ftime; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007dbfc0 ___tzset
 * calls EXTERNAL:0000005b GetSystemTimeAsFileTime
 * calls 007dcb40 __aulldiv
 * calls EXTERNAL:0000005a GetTimeZoneInformation
 * calls 007dcac0 __aullrem
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __ftime
   
   Library: Visual Studio 2003 Debug */

void __ftime(undefined4 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  _FILETIME local_c4;
  _TIME_ZONE_INFORMATION local_bc;
  undefined4 local_8;
  
  local_8 = DAT_00906980;
  ___tzset();
  *(short *)((int)param_1 + 6) = (short)(DAT_009070b0 / 0x3c);
  GetSystemTimeAsFileTime(&local_c4);
  iVar2 = __aulldiv(local_c4.dwLowDateTime,local_c4.dwHighDateTime,600000000,0);
  if (iVar2 != DAT_009baaf0) {
    DVar3 = GetTimeZoneInformation(&local_bc);
    DAT_009baaf0 = iVar2;
    if (DVar3 == 0xffffffff) {
      _DAT_00906770 = 0xffffffff;
    }
    else if (((DVar3 == 2) && (local_bc.DaylightDate.wMonth != 0)) && (local_bc.DaylightBias != 0))
    {
      _DAT_00906770 = 1;
    }
    else {
      _DAT_00906770 = 0;
    }
  }
  *(undefined2 *)(param_1 + 2) = DAT_00906770;
  uVar5 = __aulldiv(local_c4.dwLowDateTime,local_c4.dwHighDateTime,10000,0);
  uVar1 = __aullrem(uVar5,1000,0);
  *(undefined2 *)(param_1 + 1) = uVar1;
  uVar4 = __aulldiv(local_c4.dwLowDateTime + 0x2ac18000,
                    (local_c4.dwHighDateTime + 0xfe624e22) -
                    (uint)(local_c4.dwLowDateTime < 0xd53e8000),&DAT_00989680,0);
  *param_1 = uVar4;
  return;
}

