/* speed.exe 0085e0d0 ___timet_from_ft; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000017 FileTimeToLocalFileTime
 * calls 008600d0 ___loctotime_t
 * calls EXTERNAL:00000018 FileTimeToSystemTime
 */

/* Library Function - Single Match
    ___timet_from_ft
   
   Library: Visual Studio 2003 Debug */

undefined4 ___timet_from_ft(FILETIME *param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  if ((((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) &&
      (BVar1 = FileTimeToLocalFileTime(param_1,&local_c), BVar1 != 0)) &&
     (BVar1 = FileTimeToSystemTime(&local_c,&local_1c), BVar1 != 0)) {
    uVar2 = ___loctotime_t(local_1c.wYear,local_1c.wMonth,local_1c.wDay,local_1c.wHour,
                           local_1c.wMinute,local_1c.wSecond,0xffffffff);
    return uVar2;
  }
  return 0xffffffff;
}

