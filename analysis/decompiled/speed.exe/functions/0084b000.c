/* speed.exe 0084b000 FUN_0084b000; analysis pseudocode, not buildable source.
 * calls 0084a840 FUN_0084a840
 * calls 00862116 Ordinal_111
 * calls 007d6cb0 __security_check_cookie
 * calls 0084a7c0 FUN_0084a7c0
 * calls 0086216a WSASetEvent
 * calls 00862176 Ordinal_4
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0084b000(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar1 = FUN_0084a7c0(param_3);
  Ordinal_4(*(undefined4 *)(param_1 + 0x18),uVar1);
  Ordinal_111();
  iVar2 = FUN_0084a840();
  if ((iVar2 == 0) && ((*(int *)(param_1 + 0xc) == 2 || (*(int *)(param_1 + 0xc) == 3)))) {
    WSASetEvent(DAT_009c3710);
  }
  return iVar2;
}

