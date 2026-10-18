/* speed.exe 0084b960 FUN_0084b960; analysis pseudocode, not buildable source.
 * calls 0084be50 FUN_0084be50
 * calls EXTERNAL:0000001f Sleep
 * calls 008621c4 Ordinal_116
 * calls 0084beb0 FUN_0084beb0
 * calls 0084c0b0 FUN_0084c0b0
 * calls EXTERNAL:00000006 CloseHandle
 * calls 0084aa40 FUN_0084aa40
 * calls 0086216a WSASetEvent
 * calls 0084a9a0 FUN_0084a9a0
 * calls 00862164 Ordinal_22
 * calls 0086215e Ordinal_3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084b960(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0084be50(FUN_0084aa40,&DAT_009c36fc);
  FUN_0084beb0();
  DAT_009c370c = 0;
  WSASetEvent(DAT_009c3710);
  while (0 < DAT_0090d3dc) {
    Sleep(1);
  }
  CloseHandle(DAT_009c3710);
  DAT_009c3710 = (HANDLE)0x0;
  while (_DAT_009c36fc != 0) {
    uVar1 = *(undefined4 *)(_DAT_009c36fc + 0x18);
    iVar2 = FUN_0084a9a0();
    if (-1 < iVar2) {
      Ordinal_22(uVar1,2);
      Ordinal_3(uVar1);
    }
  }
  FUN_0084aa40(&DAT_009c36fc);
  FUN_0084c0b0();
  Ordinal_116();
  return;
}

