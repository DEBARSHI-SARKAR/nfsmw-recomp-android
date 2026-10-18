/* speed.exe 0084ac10 FUN_0084ac10; analysis pseudocode, not buildable source.
 * calls 00862116 Ordinal_111
 * calls 00862152 WSAGetOverlappedResult
 * calls 0084bdf0 FUN_0084bdf0
 * calls 0084bd60 FUN_0084bd60
 * calls 0086214c WSAWaitForMultipleEvents
 * calls 0084ab40 FUN_0084ab40
 * calls 0084aae0 FUN_0084aae0
 * calls 00862146 WSAResetEvent
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084ac10(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int local_108 [65];
  
  piVar5 = local_108;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  DAT_0090d3dc = 1;
  do {
    do {
      if (DAT_009c370c == 0) {
        DAT_0090d3dc = 0;
        return;
      }
      FUN_0084bd60(0);
      iVar4 = 1;
      local_108[0] = DAT_009c3710;
      puVar3 = _DAT_009c36fc;
      while ((puVar3 != (undefined4 *)0x0 && (iVar4 < 0x40))) {
        if ((puVar3[3] == 2) || (puVar3[3] == 3)) {
          FUN_0084bd60(puVar3 + 0x19);
          if ((int)puVar3[0x26] < 1) {
            local_108[iVar4] = puVar3[0x18];
            iVar4 = iVar4 + 1;
            if (*(char *)(puVar3 + 0x2a) == '\x01') {
              iVar2 = WSAGetOverlappedResult(puVar3[6],puVar3 + 0x14,puVar3 + 0x26,0,puVar3 + 0x29);
              if (iVar2 == 1) {
                *(undefined1 *)(puVar3 + 0x2a) = 0;
                FUN_0084aae0();
              }
              else {
                iVar2 = Ordinal_111();
                if (iVar2 != 0x3e4) {
                  *(undefined1 *)(puVar3 + 0x2a) = 0;
                }
              }
            }
            FUN_0084ab40();
          }
          FUN_0084bdf0(puVar3 + 0x19);
        }
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_0084bdf0(0);
      iVar2 = WSAWaitForMultipleEvents(iVar4,local_108,0,0xffffffff,0);
    } while ((iVar2 < 0) || (iVar4 <= iVar2));
    FUN_0084bd60(0);
    bVar1 = false;
    if (_DAT_009c36fc != (undefined4 *)0x0) {
      puVar3 = _DAT_009c36fc;
      do {
        if (puVar3[0x18] == local_108[iVar2]) {
          bVar1 = true;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    if ((iVar2 == 0) || (bVar1)) {
      WSAResetEvent(local_108[iVar2]);
    }
    FUN_0084bdf0(0);
  } while( true );
}

