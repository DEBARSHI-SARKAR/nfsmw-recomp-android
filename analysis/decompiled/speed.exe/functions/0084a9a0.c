/* speed.exe 0084a9a0 FUN_0084a9a0; analysis pseudocode, not buildable source.
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084beb0 FUN_0084beb0
 * calls 0084bd60 FUN_0084bd60
 * calls 0084bcf0 FUN_0084bcf0
 * calls 00862134 WSACloseEvent
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a9a0(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int *unaff_ESI;
  
  bVar3 = false;
  FUN_0084bd60(0);
  piVar4 = (int *)&DAT_009c36fc;
  iVar2 = _DAT_009c36fc;
  do {
    if (iVar2 == 0) {
LAB_0084a9d5:
      FUN_0084bdf0(0);
      if (!bVar3) {
        return 0xffffffff;
      }
      FUN_0084beb0();
      FUN_0084bcf0(unaff_ESI + 0x19);
      WSACloseEvent(unaff_ESI[0x18]);
      unaff_ESI[0x18] = 0;
      unaff_ESI[6] = -1;
      *(undefined1 *)(unaff_ESI + 5) = 0;
      FUN_0084bd60(0);
      unaff_ESI[1] = (int)DAT_009c3700;
      DAT_009c3700 = unaff_ESI;
      FUN_0084bdf0(0);
      return 0;
    }
    piVar1 = (int *)*piVar4;
    if (piVar1 == unaff_ESI) {
      *piVar4 = *unaff_ESI;
      bVar3 = true;
      goto LAB_0084a9d5;
    }
    iVar2 = *piVar1;
    piVar4 = piVar1;
  } while( true );
}

