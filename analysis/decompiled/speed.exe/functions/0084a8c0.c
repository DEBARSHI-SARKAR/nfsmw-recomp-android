/* speed.exe 0084a8c0 FUN_0084a8c0; analysis pseudocode, not buildable source.
 * calls 00862128 Ordinal_10
 * calls 0086211c WSACreateEvent
 * calls 00862122 Ordinal_21
 * calls 0084bcc0 FUN_0084bcc0
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0086212e Ordinal_23
 * calls 0084bd60 FUN_0084bd60
 * calls 0078af30 FUN_0078af30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0084a8c0(undefined4 param_1,int param_2)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *puVar4;
  undefined4 unaff_retaddr;
  undefined4 local_4;
  
  local_4 = 1;
  if (in_EAX == -1) {
    in_EAX = Ordinal_23(param_1,param_2);
    if (in_EAX == -1) {
      return (undefined4 *)0x0;
    }
  }
  puVar1 = (undefined4 *)FUN_0078af30(0x2ec);
  puVar4 = puVar1;
  for (iVar3 = 0xbb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar1[6] = in_EAX;
  Ordinal_10(in_EAX,0x8004667e,&local_4);
  if (param_2 == 2) {
    Ordinal_21(in_EAX,0xffff,0x20,&stack0xfffffff0,4);
  }
  puVar1[2] = unaff_EBX;
  puVar1[3] = param_2;
  puVar1[4] = unaff_retaddr;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  uVar2 = WSACreateEvent();
  puVar1[0x18] = uVar2;
  FUN_0084bcc0(puVar1 + 0x19);
  FUN_0084bd60(0);
  *puVar1 = _DAT_009c36fc;
  _DAT_009c36fc = puVar1;
  FUN_0084bdf0(0);
  return puVar1;
}

