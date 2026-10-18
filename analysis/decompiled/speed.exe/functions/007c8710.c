/* speed.exe 007c8710 __printMemBlockData; analysis pseudocode, not buildable source.
 * calls 007d4710 ___isctype_mt
 * calls 007d6cb0 __security_check_cookie
 * calls 007d4690 __chvalidator_mt
 * calls 007c6100 _sprintf
 * calls 007d2670 __CrtDbgReport
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __printMemBlockData
   
   Library: Visual Studio 2003 Debug */

void __printMemBlockData(int param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int local_60;
  int local_5c;
  byte local_54 [20];
  char local_40 [52];
  undefined4 local_c;
  int local_8;
  
  local_c = DAT_00906980;
  local_8 = 0;
  while( true ) {
    if (*(int *)(param_2 + 0x10) < 0x10) {
      local_5c = *(int *)(param_2 + 0x10);
    }
    else {
      local_5c = 0x10;
    }
    if (local_5c <= local_8) break;
    bVar1 = *(byte *)(param_2 + local_8 + 0x20);
    if (*(int *)(param_1 + 0x28) < 2) {
      local_60 = __chvalidator_mt(param_1,bVar1,0x157);
    }
    else {
      local_60 = ___isctype_mt(param_1,bVar1,0x157);
    }
    bVar3 = bVar1;
    if (local_60 == 0) {
      bVar3 = 0x20;
    }
    local_54[local_8] = bVar3;
    _sprintf(local_40 + local_8 * 3,"%.2X ",(uint)bVar1);
    local_8 = local_8 + 1;
  }
  local_54[local_8] = 0;
  iVar4 = __CrtDbgReport(0,0,0,0," Data: <%s> %s\n",local_54,local_40);
  if (iVar4 != 1) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

