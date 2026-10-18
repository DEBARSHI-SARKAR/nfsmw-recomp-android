/* speed.exe 0084afb0 FUN_0084afb0; analysis pseudocode, not buildable source.
 * calls 0084a840 FUN_0084a840
 * calls 00862116 Ordinal_111
 * calls 0086216a WSASetEvent
 * calls 00862170 Ordinal_2
 */

int FUN_0084afb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  Ordinal_2(*(undefined4 *)(param_1 + 0x18),param_2,param_3);
  Ordinal_111();
  iVar1 = FUN_0084a840();
  if ((iVar1 == 0) && ((*(int *)(param_1 + 0xc) == 2 || (*(int *)(param_1 + 0xc) == 3)))) {
    WSASetEvent(DAT_009c3710);
  }
  return iVar1;
}

