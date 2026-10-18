/* speed.exe 0084d460 FUN_0084d460; analysis pseudocode, not buildable source.
 * calls 008620ec lineGetID
 * calls 007d6cb0 __security_check_cookie
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0084d460(HLINE param_1)

{
  LONG LVar1;
  int iVar2;
  varstring_tag *pvVar3;
  varstring_tag local_130;
  undefined4 local_118;
  undefined4 local_c;
  
  local_c = DAT_00906980;
  pvVar3 = &local_130;
  for (iVar2 = 0x47; iVar2 != 0; iVar2 = iVar2 + -1) {
    pvVar3->dwTotalSize = 0;
    pvVar3 = (varstring_tag *)&pvVar3->dwNeededSize;
  }
  local_130.dwTotalSize = 0x11c;
  LVar1 = lineGetID(param_1,0,0,1,&local_130,"comm/datamodem");
  if (LVar1 != 0) {
    return 0xffffffff;
  }
  return local_118;
}

