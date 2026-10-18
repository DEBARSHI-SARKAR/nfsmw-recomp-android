/* speed.exe 0084ae70 FUN_0084ae70; analysis pseudocode, not buildable source.
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

undefined4 * FUN_0084ae70(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBP;
  undefined4 *puVar5;
  undefined4 uStack_10;
  
  uStack_10 = param_3;
  iVar1 = Ordinal_23();
  if (iVar1 == -1) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_0078af30(0x2ec);
  puVar5 = puVar2;
  for (iVar4 = 0xbb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar2[6] = iVar1;
  Ordinal_10(iVar1,0x8004667e,&uStack_10);
  if (param_2 == 2) {
    Ordinal_21(iVar1,0xffff,0x20,&stack0xffffffe4,4);
  }
  puVar2[2] = param_2;
  puVar2[3] = param_2;
  puVar2[4] = unaff_EBP;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  uVar3 = WSACreateEvent();
  puVar2[0x18] = uVar3;
  FUN_0084bcc0(puVar2 + 0x19);
  FUN_0084bd60(0);
  *puVar2 = _DAT_009c36fc;
  _DAT_009c36fc = puVar2;
  FUN_0084bdf0(0);
  return puVar2;
}

