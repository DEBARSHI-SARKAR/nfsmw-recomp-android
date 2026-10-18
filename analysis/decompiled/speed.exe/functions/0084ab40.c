/* speed.exe 0084ab40 FUN_0084ab40; analysis pseudocode, not buildable source.
 * calls 00862116 Ordinal_111
 * calls 0086213a WSARecv
 * calls 00862140 WSARecvFrom
 * calls 0084aae0 FUN_0084aae0
 */

void FUN_0084ab40(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_EAX;
  int iVar3;
  undefined4 local_8;
  int local_4;
  
  piVar1 = (int *)(in_EAX + 0x98);
  if ((*(int *)(in_EAX + 0x98) == 0) && (*(char *)(in_EAX + 0xa8) != '\x01')) {
    local_4 = in_EAX + 0xa9;
    puVar2 = (undefined4 *)(in_EAX + 0xa4);
    local_8 = 0x240;
    *puVar2 = 0;
    if (*(int *)(in_EAX + 0xc) == 2) {
      *(undefined4 *)(in_EAX + 0xa0) = 0x10;
      iVar3 = WSARecvFrom(*(undefined4 *)(in_EAX + 0x18),&local_8,1,piVar1,puVar2,in_EAX + 0x88,
                          (undefined4 *)(in_EAX + 0xa0),in_EAX + 0x50);
    }
    else {
      iVar3 = WSARecv(*(undefined4 *)(in_EAX + 0x18),&local_8,1,piVar1,puVar2,in_EAX + 0x50,0);
    }
    if (iVar3 == 0) {
      if (0 < *piVar1) {
        FUN_0084aae0();
      }
    }
    else {
      *piVar1 = iVar3;
      iVar3 = Ordinal_111();
      *(int *)(in_EAX + 0x9c) = iVar3;
      if (iVar3 == 0x3e5) {
        *(undefined1 *)(in_EAX + 0xa8) = 1;
        return;
      }
    }
  }
  return;
}

