/* speed.exe 008574f0 FUN_008574f0; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 008572d0 FUN_008572d0
 * calls EXTERNAL:00000011 GetTickCount
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_008574f0(uint param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xd4);
  while (uVar2 == 0) {
    DVar1 = GetTickCount();
    uVar2 = DVar1 ^ param_1;
    *(uint *)(param_1 + 0xd4) = uVar2;
  }
  FUN_008572d0();
  return;
}

